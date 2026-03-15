#include <stdio.h>
int main(){
    int urun_no, kac_tane,x;
    float tutar;
    
    for (x=1; x<=5; x++){

    printf("hangi urun?\t");
    scanf("%d", &urun_no);
    printf("kac tane?\t");
    scanf("%d", &kac_tane);
    
    switch(urun_no){
        case 1:
            tutar=2.98*kac_tane;
            printf("tutar: %f", tutar);
            break;
        case 2:
            tutar=4.50*kac_tane;
            printf("tutar: %f", tutar);
            break;
        case 3:
            tutar=9.98*kac_tane;
            printf("tutar: %f", tutar);
            break;
        case 4:
            tutar=4.49*kac_tane;
            printf("tutar: %f", tutar);
            break;
        case 5:
            tutar=6.87*kac_tane;
            printf("tutar: %f", tutar);
            break;
    }
}
}