#include <stdio.h>

void reverse() {
    int num, remainder;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number is: %d\n", reversed);
}

