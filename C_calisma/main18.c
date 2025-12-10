#include <stdio.h>
#include <math.h>

int main() {

    int x, n;
    double sum = 0.0;
    int sign = 1;   // ilk terim: +x
    int i;

    printf("Taban sayiyi (x) giriniz: ");
    scanf("%d", &x);

    printf("Seride kac terim olacagini giriniz: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {    // 1,3,5,7 ... tek üsler

        double term = pow(x, i);

        sum += sign * term;         // +x, -x^3, +x^5, ...

        if (sign == 1)
            printf(" + %.0f", term);
        else
            printf(" - %.0f", term);

        sign *= -1; // iþaret deðiþtir
    }

    printf("\nSerinin sonucu = %.0f\n", sum);

    return 0;
}

