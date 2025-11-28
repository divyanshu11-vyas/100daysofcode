// Q92 : Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    printf("enter a string :\n");
    
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';

        if (freq[index] == 1) {
            printf("%c", str[i]);
            return 0;
        }

        freq[index]++;
    }
    printf("No repeating character");

    return 0;
}
