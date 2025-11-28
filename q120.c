// Q120 : Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char str[200];
    int i;
    printf("Enter the string:\n");
    scanf("%[^\n]", str);
    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fp, "%s", str);
    fclose(fp);
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fgets(str, sizeof(str), fp);
    fclose(fp);
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }
    printf("%s", str);
    return 0;
}
