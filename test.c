#include <stdio.h>

int sum(int a, int b);

int main() {
    if (sum(2, 3) == 5) {
        printf("Test Passed\n");
        return 0;
    } else {
        printf("Test Failed\n");
        return 1;
    }
}
