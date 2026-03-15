#include <stdio.h>
int main(){
    int kactane,sayi,max=0,max2=0,x;
    printf("kac sayi gireceksiniz?  ");
    scanf("%d",&kactane);

    for(x=1; x<=kactane; x++){
        scanf("%d",&sayi);
        if (sayi>max){
            max2=max;
            max=sayi;
        }
        else if (sayi>max2){
            max2=sayi;
        }
    }
    printf("en buyuk: %d\n",max);
    printf("ikinci en buyuk: %d\n",max2);
}