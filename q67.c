// Q67 : Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n + 1];  // +1 to allow insertion
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos, x;  
    scanf("%d %d", &pos, &x);  
    // pos is the index where x will be inserted (0-based or 1-based?)
    // The sample uses 2 as position meaning index 2 (0-based).
    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;  // Insert element
    n++;
    // Print the updated array
    for (int i = 0; i < n; i++)
    
        printf("%d ", arr[i]);
    return 0;
}
