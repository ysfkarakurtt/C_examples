#include<stdio.h>
#include<stdlib.h>
/*TR :Eşit eleman sayısına sahip iki dizinin aynı indis konumundaki farklı elemanlarının sayısına Hamming Uzaklığı denir.
klavyeden girilen İki tam sayı dizisinin hamming uzaklığını bulunuz.

ENG:The number of different elements at the same index position in two arrays with the same number of elements is called the Hamming Distance.
Find the hamming distance of two integer strings entered from the keyboard.
*/
int Hamming(int dizi1[],int dizi2[], int n);

int main()
{
  int  uzaklik=0;
  int i,j;
  int dizi1[10];
  int dizi2[10];
  int n=10;

    printf("Birinci dizinin elemanlarini giriniz:");

    for(i=0;i<10;i++)
    {
        scanf("%d",&dizi1[i]); 
    }
    printf("ikinci dizinin elemanlarini giriniz:");
    for(i=0;i<10;i++)
    {
       scanf("%d",&dizi2[i]);
    }
    printf("%d",Hamming(dizi1, dizi2, n));
  
 return 0;  
}

int Hamming(int dizi1[],int dizi2[], int n)
{   
   int uzaklik=0,i,j;

      for(i=0;i<10;i++)
       {
          if(dizi1[i]!=dizi2[i])
          {
            uzaklik++;
          }
       }   
      printf("iki dizi arasindaki hamming uzakligi:");
   
   return uzaklik;
}