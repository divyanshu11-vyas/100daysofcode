// Q128 : Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int vowels = 0, consonants = 0;
    printf("File: ");
    fgets(filename, sizeof(filename), stdin);

    int len = strlen(filename);
    if (len > 0 && filename[len - 1] == '\n')
        filename[len - 1] = '\0';
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (isalpha(ch)) {             
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
