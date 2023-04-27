#include<stdio.h>
#include<stdlib.h>
/*TR : Kendisine gönderilen pozitif tam sayılardan oluşan bir dizi 
ve bu diziyi önce tekler sonra çiftler olucak şekilde yerlerini değiştiren C programını yazınız.

ENG : An array of positive integers sent to it
and write a C program that swaps this array for odds and then evens.
*/
void tekCiftDuzenle( int sayilar[],int n);
int main()
{
  int sayilar[15];
  int i,j;
  int n=15;
  
  printf("Dizinin elemanlarini giriniz:");

  for(i=0;i<15;i++)
   {
      scanf("%d",&sayilar[i]);
   }
  
  tekCiftDuzenle(sayilar,n);

 return 0;  
}
void tekCiftDuzenle( int sayilar[],int n)
{

    int i,j=0,son[15];

       for(i=0;i<15;i++)
      {
        if(sayilar[i]%2!=0)
          { 
             son[j]=sayilar[i];
             j++;
          }
      }

      for(i=0;i<15;i++)
      {
          if(sayilar[i]%2==0)
          { 
              son[j]=sayilar[i];
              j++;
          }
      }

    printf("Dizinin duzenlenmis hali:");
     
     for(i=0;i<15;i++)
    {

      printf("%d ",son[i]);
      if(i !=14)
      {
         printf(",");
      }
    } 
}