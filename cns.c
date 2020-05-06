#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        return fprintf(stderr, "Usage: %s infile\n", argv[0]), 1;

    FILE *fp;
    if (!(fp = fopen(argv[1], "r")))
        return fprintf(stderr, "Could not open %s\n", argv[1]), 2;

    fclose(fp);
    return 0;
}
