#include <stdio.h>

int main() {
    int n, rem, ans = 0, place = 1;

    printf("Enter binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;

        if (rem == 0)
            rem = 1;
        else
            rem = 0;

        ans = ans + rem * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %d", ans);

    return 0;
}