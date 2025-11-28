// Q96 : Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];
    
    printf("enter str1 and str 2 :\n");
    
    scanf("%s", str1);
    scanf("%s", str2);

    // if lengths differ → not rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    char temp[400];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2))
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
