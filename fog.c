#include <stdio.h>

#define MEMSIZE 500
#define MAXTOKS 50000
#define NUMTYPE unsigned short

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define RES   "\x1B[0m"


/* it's show time */
int main(int argc, char *argv[])
{
    /* FPs */
    FILE *in, *out;

    /* args */
    if (argc != 3)
        return fprintf(stderr, RED"Usage: %s infile\n"RES, argv[0]), 1;

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

    /* initialize memory */
    char memory[MEMSIZE] = { 0 };
    char *ptr = memory;

    /* iterate */
    for (NUMTYPE i = 0, bal = 0; tokens[i]; i++) {
        switch (tokens[i]) {
            case '>':
                ptr++;
                continue;

            case '<':
                --ptr;
                continue;

            case '+':
                ++*ptr;
                continue;

            case '-':
                --*ptr;
                continue;

            case '.':
                fputc(*ptr, out);
                continue;

            case ',':
                *ptr = getchar();
                if (*ptr == EOF || *ptr == '\r' || *ptr == '\n')
                    *ptr = 0;
                continue;

            case '[':
                if (!*ptr) {
                    bal = -1;
                    while (bal != 0 && tokens[++i])
                        if (tokens[i] == '[') bal--;
                        else if (tokens[i] == ']' && !++bal)
                            break;
                }
                continue;

            case ']':
                if (*ptr) {
                    bal = +1;
                    while (bal != 0 && --i >= 0)
                        if (tokens[i] == ']') bal++;
                        else if (tokens[i] == '[' && !--bal)
                            break;
                }
                continue;
        }
    }

    /* done */
    fclose(in);
    fclose(out);
    return puts(GRN"Completed."RES), 0;
}

