// Q97 : Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[200];
    printf("enter the string :\n");
    
    fgets(str, sizeof(str), stdin);
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c.", str[0]);
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i-1] == ' ' && str[i] != ' ' && str[i] != '\n') {
            printf("%c.", str[i]);
        }
    }

    return 0;
}
