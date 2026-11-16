#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the triangle
    if (scanf("%d", &n) == 1) {
        // Outer loop starts at n and decrements down to 1
        for (int i = n; i >= 1; i--) {
            // Inner loop prints 'i' asterisks for the current row
            for (int j = 0; j < i; j++) {
                putchar('*');
            }
            // Move to the next line after each row is complete
            putchar('\n');
        }
    }
    
    return 0;
}