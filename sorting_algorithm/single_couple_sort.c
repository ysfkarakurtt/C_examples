#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/* TR :0’dan 100’e kadar 10 rastgele sayıyı bir diziye atayınız. 
Dizinin elemanlarını küçükten büyüğe doğru sıralayınız.
Dizinin elemanlarını önce tek sayılar (küçükten büyüğe) daha sonra da çift sayılar (küçükten büyüğe) gelecek şekilde tek bir dizide sıralayınız.

ENG :Assign 10 random numbers from 0 to 100 into an array.
Rank the elements of the array from smallest to largest.
Arrange the elements of the array in a single array, first odd numbers (small to greatest) and then even numbers (small to greatest).
*/
int main()
{

int a,b;
int karsilastirma;
int dizi[10];

    srand(time(NULL));
    printf("Rastegele sayilar:\n");
    for(a=0 ; a<10 ;a++)
    {
        dizi[a]=rand()%101;
        printf("%d ",dizi[a]);
    }
    printf("\nSirali dizi:\n");
    for(a=0; a<10 ;a++)
    {
        for( b=a+1; b<10; b++)
        {
            if(dizi[a] > dizi[b])
            {
                karsilastirma=dizi[a];
                dizi[a]=dizi[b];
                dizi[b]=karsilastirma;
            }
        }
    }
    for( a=0; a<10; a++)
    {
        printf("%d ",dizi[a]);
    }
    
    printf("\nOnce tek sayilar sonra cift sayilar sirali dizi:\n");
    for(a=0 ; a<10 ; a++)
    {
        if(dizi[a]%2!=0)
            {
                printf("%d ",dizi[a]);
            }
    }
    for(a=0 ; a<10 ; a++)
    {
        if(dizi[a]%2==0)
            {
                printf("%d ",dizi[a]);
            }
    }

    return 0;
}