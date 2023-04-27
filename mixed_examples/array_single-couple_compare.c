#include<stdio.h>
#include<stdlib.h>
/* TR :Klavyeden  boyutu ve elemanları girilen bir tam sayı dizisinin elemanlarının 
tek ve çift sayıları toplamlarının ayrı ayrı hesaplanarak büyük olan değerin yazdırılmasını sağlayan programı yazınız.

ENG :Elements of an integer array whose size and elements are entered from the keyboard
Write a program that calculates the sum of odd and even numbers separately and prints the larger value.
*/
int buyukToplamiBul(int array[],int boyut)
{
    int i,j,toplam=0,toplam2=0;
        printf("cift sayilar ");
        for(i=0;i<boyut;i++)
        {
            if(array[i]%2==0)
            {
                printf("%d\t",array[i]);
                toplam=toplam+array[i];
            }
        }
        printf("\ncift sayilarin toplami: %d",toplam);
        printf("\ntek sayilar ");
        for(i=0;i<boyut;i++)
        {
            if(array[i]%2!=0)
            {
                printf("%d\t",array[i]);
                toplam2=toplam2+array[i];
            }
        }
        printf("\ntek sayilarin toplami: %d",toplam2);
        if(toplam>toplam2)
        {
            return 1;
        }
}

int main()
{ 
    int i,j;
    int degisken;
    int boyut;

        printf("Dizi boyutunu giriniz:\n");
        scanf("%d",&boyut);
        int array[boyut];
        printf("dizinin elemanlarini giriniz:");
        for(i=0;i<boyut;i++)
        {
            scanf("%d",&array[i]); 
        }
        degisken= buyukToplamiBul(array,boyut);
        if(degisken==1)
        {
            printf("\ncift sayilar toplami daha buyuktur");
        }
        else
        {
            printf("\ntek sayilar toplami daha buyuktur");
        }
        
    return 0;
}
