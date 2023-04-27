#include<stdio.h>
#include<stdlib.h>
/*TR : Klavyeden girilen 5 elemanlı tam sayı dizisinin elemanlarını kabarcık sıralama algoritmasını kullanarak
  küçükten büyüğe sıralayan kodu yazınız.
  
  ENG :Using the bubble sort algorithm, the elements of the 5-element integer array entered from the keyboard
   Write the code that sorts them in ascending order.
  */
int main()
{
    int dizi[5];
    int i,j,k,yedek;

    printf("dizinin elamanlarini giriniz: ");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&dizi[i]);
        printf("%d\t",dizi[i]);

    } 

    for(j=0;j<5;j++)
    { 
         
     for(k=0;k<4;k++)
     {
        if(dizi[k]>dizi[k+1])
        {  
            yedek=dizi[k];
            dizi[k]=dizi[k+1];
            dizi[k+1]=yedek ;

        }
     }

    }
        printf("\n dizinin sirali hali:\n");
        for(i=0;i<5;i++)
        {
            printf("%d\t",dizi[i]);
        }
            
    return 0; 
}