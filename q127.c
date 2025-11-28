// Q127 : Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>   

int main() {
    FILE *fin, *fout;
    int ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        perror("Error opening output.txt");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);   
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion completed. Check output.txt\n");
    return 0;
}
