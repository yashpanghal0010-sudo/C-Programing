#include <stdio.h>

int main() {
    int n;
    
    // Read the number of rows
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows (from 1 to n)
        for (int i = 1; i <= n; i++) {
            // Inner loop runs 'i' times for the current row
            for (int j = 1; j <= i; j++) {
                // Print the current row number 'i'
                printf("%d", i);
                // Print a space after the number only if it's not the last number in the row
                if (j < i) {
                    putchar(' ');
                }
            }
            // Move to the next line after completing the current row
            putchar('\n');
        }
    }
    
    return 0;
}