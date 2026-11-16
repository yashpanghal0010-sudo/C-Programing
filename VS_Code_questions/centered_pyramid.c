#include <stdio.h>

int main() {
    int n;
    
    // Read the number of rows for the pyramid
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows (from 1 to n)
        for (int i = 1; i <= n; i++) {
            // Print leading spaces: n - i spaces to center the row
            for (int j = 0; j < n - i; j++) {
                putchar(' ');
            }
            // Print asterisks: 2 * i - 1 asterisks for the current row
            for (int j = 0; j < 2 * i - 1; j++) {
                putchar('*');
            }
            // Move to the next line after completing the row
            putchar('\n');
        }
    }
    
    return 0;
}