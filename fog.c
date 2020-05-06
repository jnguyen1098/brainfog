#include <stdio.h>
#include <stdlib.h>

#define MEMSIZE 500
#define MAX_TOK 50000

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define RES   "\x1B[0m"

#define LEGAL(x) (x == '>' || x == '<' || x == '+' || x == '-' || \
                  x == '[' || x == ']' || x == '.' || x == ',')

#define WRITE(x) (fputc(x, out))

/* it's show time */
int main(int argc, char *argv[])
{
    /* fps */
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
    unsigned short i = 0;
    char c, tokens[MAX_TOK];
    while ((c = fgetc(in)) != EOF)
        if (LEGAL(c))
            tokens[i++] = c;
    tokens[i] = 0;

    /* initialize memory */
    char memory[MEMSIZE] = { 0 };
    char *ptr = memory;

    /* iterate */
    for (unsigned short i = 0, bal = 0; tokens[i]; i++) {
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
                WRITE(*ptr);
                continue;

            case ',':
                *ptr = getchar();
                if (*ptr == EOF || *ptr == '\r' || *ptr == '\n')
                    *ptr = 0;
                continue;

            case '[':
                if (!*ptr) {
                    bal = -1;
                    while (tokens[++i] && bal != 0)
                        if (tokens[i] == '[') bal--;
                        else if (tokens[i] == ']' && !++bal)
                            break;
                }
                continue;

            case ']':
                if (*ptr) {
                    bal = +1;
                    while (--i >= 0 && bal != 0)
                        if (tokens[i] == ']') bal++;
                        else if (tokens[i] == '[' && !--bal)
                            break;
                }
                continue;

            default:
                continue;

        }
    }

    /* done */
    fclose(in);
    fclose(out);
    return puts(GRN"Completed."RES), 0;
}

