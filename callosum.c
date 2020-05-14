#include <stdio.h>

#define MEMSIZE 500
#define MAXTOKS 50000
#define NUMTYPE unsigned short

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define RES   "\x1B[0m"

#define TAB(x)      for(int i = 0; i < x; i++)WRITE("\t");
#define WRITE(x)    (fprintf(out, x))

/* it's show time */
int main(int argc, char *argv[])
{
    /* FPs */
    FILE *in, *out;

    /* args */
    if (argc != 2 && argc != 3)
        return fprintf(stderr, RED"Usage: %s infile [outfile]\n"RES, argv[0]), 1;

    /* open infile for reading */
    if (!(in = fopen(argv[1], "r")))
        return fprintf(stderr, RED"Could not read %s\n"RES, argv[1]), 2;

    /* open outfile for writing */
    if (!(out = fopen(argv[2], "w")))
        return fprintf(stderr, RED"Could not write %s\n"RES, argv[1]), 3;

    /* tokenize */
    NUMTYPE i = 0;
    char c, tokens[MAXTOKS];
    while ((c = fgetc(in)) != EOF)
        if (c == '>' || c == '<' || c == '+' || c == '-' ||
            c == '[' || c == ']' || c == '.' || c == ',')
                tokens[i++] = c;
    tokens[i] = 0;

    int scope = 1;

    WRITE("#include <stdio.h>\n");
    WRITE("#include <stdlib.h>\n");

    WRITE("int main(void)\n");
    WRITE("{\n");

    TAB(scope); WRITE("char memory[50000] = { 0 };\n");
    TAB(scope); WRITE("char *ptr = memory;\n");

    /* iterate */
    for (NUMTYPE i = 0; tokens[i]; i++) {
        switch (tokens[i]) {
            case '>':
                TAB(scope); WRITE("ptr++;\n");
                continue;

            case '<':
                TAB(scope); WRITE("--ptr;\n");
                continue;

            case '+':
                TAB(scope); WRITE("++*ptr;\n");
                continue;

            case '-':
                TAB(scope); WRITE("--*ptr;\n");
                continue;

            case '.':
                TAB(scope); WRITE("putchar(*ptr);\n");
                continue;

            case ',':
                TAB(scope); WRITE("*ptr = getchar();\n");
                TAB(scope); WRITE("if (*ptr == EOF || *ptr == '\r' || *ptr == '\n')\n");
                TAB(scope + 1); WRITE("*ptr = 0;");
                continue;

            case '[':
                TAB(scope);
                WRITE("while (*ptr) {\n");
                scope++;
                continue;

            case ']':
                if (scope > 1) scope--;
                TAB(scope); WRITE("}\n");
                continue;
        }
    }

    WRITE("\treturn 0;\n");
    WRITE("}\n");

    /* done */
    fclose(in);
    fclose(out);
    return puts(GRN"Completed."RES), 0;
}

