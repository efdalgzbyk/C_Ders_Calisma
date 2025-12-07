#include<stdlib.h>
#include<stdio.h>

int main(){

    int number=0, i, j, number1=0, temp=0, kalan, bas=0,f;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &number);

    number1 = number;  // üst sınır

    if (number <= 0) {
        printf("Lutfen gecerli bir sayi giriniz.\n");
        return 0;
    }

    // 1'den number'a kadar strong sayı kontrol et
    for (i = 1; i <= number1; i++) {

        // basamak sayısı bul
        int t = i;
        bas = 0;
        while (t > 0) {
            t /= 10;
            bas++;
        }

        printf("sayi = %d, bas = %d\n", i, bas);

        // strong hesaplama
        int sum = 0;
        temp = i;

        for (j = 1; j <= bas; j++) {

            int sum1 = 1;

            kalan = temp % 10;  // basamağı bul
            temp /= 10;

            // faktöriyel
            for (f = 1; f <= kalan; f++) {
                sum1 *= f;
            }

            sum += sum1;
        }

        if (sum == i) {
            printf("%d sayisi Strong sayidir.  %d == %d\n", i, sum, i);
        } else {
            printf("%d sayisi Strong degildir.  %d != %d   bas = %d\n", i, sum, i, bas);
        }
    }

    return 0;
}

