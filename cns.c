#include <stdio.h>
#include <stdlib.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define CYA   "\x1B[36m"
#define MAG   "\x1B[35m"

#define RES   "\x1B[0m"

#define LEGAL(x) (x == '>' || x == '<' || x == '+' || x == '-' || \
                  x == '.' || x == ',' || x == '[' || x == ']')

/* global file vars */
FILE *in, *out;

/* tokenizes a file into an array of token char. */
char *tokenize(void);

/* . . . */
int main(int argc, char *argv[])
{
    if (argc != 3)
        return fprintf(stderr, RED"Usage: %s infile\n"RES, argv[0]), 1;

    if (!(in = fopen(argv[1], "r")))
        return fprintf(stderr, RED"Could not read %s\n"RES, argv[1]), 2;

    if (!(out = fopen(argv[2], "w")))
        return fprintf(stderr, RED"Could not write %s\n"RES, argv[1]), 3;

    char *tokens;
    if (!(tokens = tokenize()))
        return fprintf(stderr, RED"Could not compile %s\n"RES, argv[1]), 4;

    for (int i = 0; tokens[i]; i++) {
        putchar(tokens[i]);
    }
    puts("");

    fclose(in);
    fclose(out);
    return puts(GRN"Completed compilation"RES), 0;
}

char *tokenize(void)
{
    char *tokens = NULL;

    tokens = calloc(1, 100000);

    int c = 0;
    int i = 0;
    while ((c = fgetc(in)) != EOF) {
        if (LEGAL(c)) {
            tokens[i++] = c;
        }
    }

    return tokens;
}
