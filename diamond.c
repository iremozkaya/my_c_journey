#include <stdio.h>

int main() {
    int sayi, orijinalSayi, tersi = 0, kalan;

    scanf("%d", &sayi);

    orijinalSayi = sayi;

    while (sayi != 0) {
        kalan = sayi % 10;          
        tersi = tersi * 10 + kalan; 
        sayi /= 10;                 
    }

    printf("%d\n", tersi);
    printf("%d\n",orijinalSayi + tersi);

    return 0;
}