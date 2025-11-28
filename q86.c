// Q86 : Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[100];
    printf("enter a string :\n");
    scanf("%s", str);
    int start = 0, end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--; 
    int isPalindrome = 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
