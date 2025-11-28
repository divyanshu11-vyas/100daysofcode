// Q93 : Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq[26] = {0};
    printf("enter str1 :\n");
    
    scanf("%s", str1);
    
    printf("enter str2 :\n");
    
    scanf("%s", str2);
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[str1[i] - 'a']++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[str2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}
