#include <stdio.h>

int main() {
    int n;
    
    // Read the odd integer n
    if (scanf("%d", &n) == 1) {
        // Upper half of the butterfly
        for (int i = 1; i <= n; i++) {
            // Print left wing stars
            for (int j = 1; j <= i; j++) {
                putchar('*');
            }
            // Print middle spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                putchar(' ');
            }
            // Print right wing stars
            for (int j = 1; j <= i; j++) {
                putchar('*');
            }
            putchar('\n');
        }
        
        // Lower half of the butterfly (mirror of the upper half)
        for (int i = n - 1; i >= 1; i--) {
            // Print left wing stars
            for (int j = 1; j <= i; j++) {
                putchar('*');
            }
            // Print middle spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                putchar(' ');
            }
            // Print right wing stars
            for (int j = 1; j <= i; j++) {
                putchar('*');
            }
            putchar('\n');
        }
    }
    
    return 0;
}