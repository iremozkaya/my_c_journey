#include <stdio.h>
int main(){
    long int sayi,yedi=0;
    printf("sayi gir: ");
    scanf("%ld",&sayi);
    do{
        if(sayi%10==7){
            ++yedi;
        }
        sayi/=10;
    }while(sayi!=0);

    printf("%d tane yedi var.",yedi);
    return 0;
}