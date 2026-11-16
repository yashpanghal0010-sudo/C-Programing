#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the triangle
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows (from 1 to n)
        for (int i = 1; i <= n; i++) {
            // Print leading spaces: n - i spaces
            for (int j = 0; j < n - i; j++) {
                putchar(' ');
            }
            // Print asterisks: i asterisks
            for (int j = 0; j < i; j++) {
                putchar('*');
            }
            // Move to the next line after completing the row
            putchar('\n');
        }
    }
    
    return 0;
}