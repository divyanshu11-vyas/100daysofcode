// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int num, count = 0;
    long sum = 0;
    printf("File: ");
    fgets(filename, sizeof(filename), stdin);
    int len = strlen(filename);
    if (len > 0 && filename[len - 1] == '\n')
        filename[len - 1] = '\0';

    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count == 0) {
        printf("No integers found in the file.\n");
        return 0;
    }
    printf("Sum = %ld\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    return 0;
}
