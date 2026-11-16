#include <stdio.h>

int main() {
    int n;
    
    // Read the number of rows
    if (scanf("%d", &n) == 1) {
        int num = 1; // Counter to track consecutive integers starting from 1
        
        // Outer loop controls the rows (from 1 to n)
        for (int i = 1; i <= n; i++) {
            // Inner loop controls the numbers printed in the current row
            for (int j = 1; j <= i; j++) {
                printf("%d", num);
                num++; // Increment the counter for the next number
                
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