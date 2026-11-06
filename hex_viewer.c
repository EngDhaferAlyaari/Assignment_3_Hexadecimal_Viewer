#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *file;
    unsigned char buffer[16];
    size_t bytesRead, i;
    unsigned long long offset = 0;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "rb");
    if (file == NULL) {
        printf("Error: Cannot open the file.\n");
        return 1;
    }

    printf("Offset    Hexadecimal                                         ASCII\n");
    printf("--------------------------------------------------------------------------\n");

    while ((bytesRead = fread(buffer, 1, 16, file)) > 0) {
        printf("%08llX  ", offset);

        for (i = 0; i < 16; i++) {
            if (i < bytesRead)
                printf("%02X ", (unsigned int)buffer[i]);
            else
                printf("   ");

            if (i == 7)
                printf(" ");
        }

        printf(" |");
        for (i = 0; i < bytesRead; i++) {
            if (buffer[i] >= 32 && buffer[i] <= 126)
                printf("%c", buffer[i]);
            else
                printf(".");
        }
        printf("|\n");

        offset += bytesRead;
    }

    if (ferror(file)) {
        printf("Error: Cannot read the file.\n");
        fclose(file);
        return 1;
    }

    if (fclose(file) != 0) {
        printf("Error: Cannot close the file.\n");
        return 1;
    }

    return 0;
}
