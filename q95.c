 // Q95 : Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200], temp[400];
    printf("enter s1 :\n");
    
    scanf("%s", s1);

    printf("enter s2 :\n");
    
    scanf("%s", s2);
    // length check
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
