#include <stdio.h>
#include <math.h>

int main() {
    printf("Formul secimi yapiniz\n1: 1D Oklid\n2: 2D Oklid\n3: Cosine Distance\n");
    int choice=0;
    float x1,x2,y1,y2,d,xKD=-11,yKD=-11,xGB=11,yGB=11;

    
        do{
        
            scanf("%d",&choice);
            switch(choice){

                case 4:{
                    printf("Programdan cikiliyor.\n");
                    printf("Suni olarak yaratilan noktalar: xGB = %f yGB = %f --- xKD = %f yKD = %f\n",xGB,yGB,xKD,yKD);
                    break;
                }

            
                case 1:{
                    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

                        if(x1>xKD){
                            xKD=x1;
                        }
                        if(x2>xKD){
                            xKD=x2;
                        }
                        if(y1>yKD){
                            yKD=y1;
                        }
                        if(y2>yKD){
                            yKD=y2;
                        }
                        if(x1<xGB){
                            xGB=x1;
                        }
                        if(x2<xGB){
                            xGB=x2;
                        }
                        if(y1<yGB){
                            yGB=y1;
                        }
                        if(y2<yGB){
                            yGB=y2;
                        }

                   d=fabs(x1-x2);
                   printf("1D Oklid Mesafesi: %f\n",d);
                   break;
                }

                case 2:{
                    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
                    if(x2>xKD){
                            xKD=x2;
                        }
                        if(y1>yKD){
                            yKD=y1;
                        }
                        if(y2>yKD){
                            yKD=y2;
                        }
                        if(x1<xGB){
                            xGB=x1;
                        }
                        if(x2<xGB){
                            xGB=x2;
                        }
                        if(y1<yGB){
                            yGB=y1;
                        }
                        if(y2<yGB){
                            yGB=y2;
                        }

                    float d0=pow((x1-x2),2)+pow((y1-y2),2);
                    d=sqrt(d0);
                    printf("2D Oklid Mesafesi: %f\n",d);
                    break;
                }

                case 3:{
                    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
                    if((x1==0 && y1==0)||(y2==0 && x2==0)){
                        printf("Hata: Sifir vektor ile Cosine distance hesaplanamaz.\n");
                        break;
                    }
                    if(x2>xKD){
                            xKD=x2;
                        }
                        if(y1>yKD){
                            yKD=y1;
                        }
                        if(y2>yKD){
                            yKD=y2;
                        }
                        if(x1<xGB){
                            xGB=x1;
                        }
                        if(x2<xGB){
                            xGB=x2;
                        }
                        if(y1<yGB){
                            yGB=y1;
                        }
                        if(y2<yGB){
                            yGB=y2;
                        }
                    float pay=sqrt(x1*x1+y1*y1)*sqrt(x2*x2+y2*y2);
                    
                    d =1-((x1*x2+y1*y2)/pay);
                    printf("Cosine Distance: %f\n",d);
                    break;
                }
            }

            
            printf("\n");
            printf("Formul secimi yapiniz\n");
        }while(choice!=4);
}