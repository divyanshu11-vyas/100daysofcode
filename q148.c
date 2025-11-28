// Q148 : Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;
    printf("Enter Student 1 details:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    printf("\nEnter Student 2 details:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Marks: ");
    scanf("%f", &s2.marks);
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        printf("\nSame\n");
    } else {
        printf("\nDifferent\n");
    }
    return 0;
}
