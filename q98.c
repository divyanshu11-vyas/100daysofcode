// Q98 : Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
    char str[200];
    printf("enter a string :\n");
    
    fgets(str, sizeof(str), stdin);

    int lastStart = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            lastStart = i + 1;
        }
    }
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c.", str[0]);
    for (int i = 1; i < lastStart - 1; i++) {
        if (str[i-1] == ' ' && str[i] != ' ') {
            printf("%c.", str[i]);
        }
    }
    printf(" ");
    for (int i = lastStart; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c", str[i]);

    return 0;
}
