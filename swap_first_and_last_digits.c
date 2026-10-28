#include <stdio.h>

int main() {
    int n, temp, first, last, place = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    // Find first digit and place value
    while (temp >= 10) {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    // Remove first and last digit
    middle = (n % place) / 10;

    // Swap first and last
    result = last * place + middle * 10 + first;

    printf("After swapping = %d", result);

    return 0;
}