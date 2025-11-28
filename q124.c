// Q124 : Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXPATH 512

void strip_newline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';
}

int main(void) {
    char srcName[MAXPATH];
    char dstName[MAXPATH];
    printf("Source File: ");
    if (!fgets(srcName, sizeof(srcName), stdin)) {
        fprintf(stderr, "Error reading source filename.\n");
        return 1;
    }
    strip_newline(srcName);

    printf("Destination File: ");
    if (!fgets(dstName, sizeof(dstName), stdin)) {
        fprintf(stderr, "Error reading destination filename.\n");
        return 1;
    }
    strip_newline(dstName);

    if (strcmp(srcName, dstName) == 0) {
        fprintf(stderr, "Source and destination filenames are the same. Aborting.\n");
        return 1;
    }

    FILE *src = fopen(srcName, "rb");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dst = fopen(dstName, "wb");
    if (dst == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        if (fputc(ch, dst) == EOF) {
            perror("Error writing to destination file");
            fclose(src);
            fclose(dst);
            return 1;
        }
    }
    fclose(src);
    fclose(dst);

    printf("File copied successfully to %s\n", dstName);
    return 0;
}
