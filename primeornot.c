#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    while (1) {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        if (is_prime(num)) {
            printf("%d is prime\n", num);
        } else {
            printf("%d is composite\n", num);
        }
    }
    return 0;
}
