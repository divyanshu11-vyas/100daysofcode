// Q91 : Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char str[200], result[200];
    int j = 0;
    printf("enter a string :\n");
    
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        // check if vowel (uppercase or lowercase)
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            continue;  // skip vowels
        }

        result[j++] = c;   // keep non-vowel
    }

    result[j] = '\0';  // end string

    printf("%s", result);

    return 0;
}
