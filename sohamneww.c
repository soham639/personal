#include <stdio.h>

int main() {
    int rows = 4; // Change this value for more rows

    for (int i = 1; i <= rows; i++) {
           for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print increasing numbers
     
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}