// Q100 : Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("enter a string :\n");
    
    scanf("%s", str);

    int n = 0;
    while (str[n] != '\0') n++;  

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // print substring from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");  // print each substring on a new line
        }
    }

    return 0;
}