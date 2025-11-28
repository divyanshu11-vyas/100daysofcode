// Q89 : Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[200], ch;
    int count = 0;
    printf("enter a string :\n");
    
    fgets(str, sizeof(str), stdin);
    printf("enter ch :\n");
    
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

