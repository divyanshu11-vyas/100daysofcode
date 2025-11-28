// Q94 : Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char str[300];
    char longest[100];
    int maxLen = 0, currLen = 0, j = 0;
    printf("enter a string :\n");
    
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } 
        else {
            if (currLen > maxLen) {
                maxLen = currLen;
                int start = i - currLen;
                j = 0;
                while (start < i)
                    longest[j++] = str[start++];
                longest[j] = '\0';
            }
            currLen = 0;
        }
    }
    printf("%s", longest);
    return 0;
}
