#include <stdio.h>

int main() {
    float num;
    int intNum;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    intNum = (int) num; // type casting the float to int

    printf("The integer equivalent of %.2f is %d.\n", num, intNum);

    return 0;
}
