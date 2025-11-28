// Q125 : Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

#define MAX 500

void strip_newline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';
}

int main() {
    char filename[100];
    char text[MAX];

    printf("Existing File: ");
    fgets(filename, sizeof(filename), stdin);
    strip_newline(filename);

    FILE *fp = fopen(filename, "a");   // Open in append mode
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("User Input: ");
    fgets(text, sizeof(text), stdin);
    strip_newline(text);

    fprintf(fp, "%s\n", text);        // Append text with newline

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
