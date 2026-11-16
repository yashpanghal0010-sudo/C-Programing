#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the square
    if (scanf("%d", &n) == 1) {
        // Outer loop controls the rows
        for (int i = 0; i < n; i++) {
            // Inner loop controls the columns (asterisks per row)
            for (int j = 0; j < n; j++) {
                putchar('*');
            }
            // Move to the next line after each row is complete
            putchar('\n');
        }
    }
    
    return 0;
}