#include <stdio.h>

int main() {
    int n;
    
    // Read the height of the triangle
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows (from 1 to n)
        for (int i = 1; i <= n; i++) {
            // Inner loop prints 'i' asterisks for the current row
            for (int j = 1; j <= i; j++) {
                putchar('*');
            }
            // Move to the next line after each row is complete
            putchar('\n');
        }
    }
    
    return 0;
}