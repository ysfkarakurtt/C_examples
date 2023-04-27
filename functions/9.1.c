#include<stdio.h>
#include<stdlib.h>
#include <math.h>
/* TR :Kendisine gönderilen iki cismin ağırlığı ve aralarındaki uzaklığa göre birbirlerini çekim kuvvetini hesaplayıp 
geri döndüren kuvvet adındaki fonksiyonu main()fonksiyonu ile beraber yazınız.*/

/* ENG :Calculate the gravitational force of each other according to the weight of the two objects sent to him and the distance between them.
Write the function called kuvvet that returns together with the main() function.*/
 void kuvvet(float ag,float ag2,float uz)
{ 
    float g,f;

    g=(6.673) * pow(10,-11);
    f=(g*ag*ag2)/(uz*uz);
    printf("Cekim Kuvveti %f",f);
}

int main()
{  
    float agirlik,agirlik2,uzaklik;

        printf("Cisimlerin agirliklarinizi giriniz:\n");
        scanf("%f",&agirlik);
        scanf("%f",&agirlik2);
        printf("Cisimlerin uzakligini  giriniz:");
        scanf("%f",&uzaklik);
        kuvvet(agirlik,agirlik2,uzaklik);

   
    
 return 0; 
}