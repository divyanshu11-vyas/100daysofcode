// Q99 : Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    printf("enter date :\n");
    
    scanf("%s", date);

    char dd[3], mm[3], yyyy[5];
    strncpy(dd, date, 2); dd[2] = '\0';
    strncpy(mm, date + 3, 2); mm[2] = '\0';
    strcpy(yyyy, date + 6);

    char *month;

    if (strcmp(mm, "01") == 0) month = "Jan";
    else if (strcmp(mm, "02") == 0) month = "Feb";
    else if (strcmp(mm, "03") == 0) month = "Mar";
    else if (strcmp(mm, "04") == 0) month = "Apr";
    else if (strcmp(mm, "05") == 0) month = "May";
    else if (strcmp(mm, "06") == 0) month = "Jun";
    else if (strcmp(mm, "07") == 0) month = "Jul";
    else if (strcmp(mm, "08") == 0) month = "Aug";
    else if (strcmp(mm, "09") == 0) month = "Sep";
    else if (strcmp(mm, "10") == 0) month = "Oct";
    else if (strcmp(mm, "11") == 0) month = "Nov";
    else month = "Dec";

    printf("%s-%s-%s", dd, month, yyyy);

    return 0;
}
