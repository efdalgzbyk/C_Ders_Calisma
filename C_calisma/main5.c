#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Iki sayi giriniz: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // GCD bulma (EBOB) - subtraction method
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }

    gcd = x; // veya y çünkü eþit oluyor
    lcm = (a * b) / gcd;

    printf("EBOB: %d\n", gcd);
    printf("EKOK: %d\n", lcm);

    return 0;
}

