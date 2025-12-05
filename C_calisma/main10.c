#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
    int number, i;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        int temp = i;
        int sum = 0;
        int digits = 0;

        // Basamak sayýsýný bul
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = i;

        // Armstrong kontrolü
        while (temp != 0) {
            int kalan = temp % 10;
            sum += pow(kalan, digits);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d bir Armstrong sayisidir.\n", i);
        }
    }

    return 0;
}

