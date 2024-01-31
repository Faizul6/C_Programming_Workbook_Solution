#include <stdio.h>

void calculate_weights() {
    int n;
    for (n = 0; n < 8; ++n) {
        int weight = 1 << n; // Using left shift operator to calculate 2^n
        printf("The weight of 2^%d is %d\n", n, weight);
    }
}

int main() {
    calculate_weights();
    return 0;
}
