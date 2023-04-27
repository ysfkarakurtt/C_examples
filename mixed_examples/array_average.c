#include<stdio.h>
#include<stdlib.h>
/* TR: Kod içerisinde tanımlı
 10 elemanlı bir dizinin ortalamasını hesaplayıp ortalamaya en yakın olan elamanı ekrana yazdıran programı yazınız.
 
 ENG :Defined in code
   Note the program that calculates the averages of a 10-element array and prints the element closest to the mean.
 */
int main()
{
  int array[10]={12,5,34,25,11,3,9,6,78,45};
  int i,j;
  int distance;
  int tmp;
  int near;
  float ort;
  float sum=0;
    
    printf("Dizinin elemanlari :\n");
    for(j=0;j<10;j++)
    {
      printf("%d \t",array[j]);
    }
    for(i=0;i<10;i++)
    {
      sum=sum+array[i];
    }
    ort=sum/10;  
    printf("\n");
    printf(" Dizinin ortalamasi :%.2f\n",ort);
    ort=round(ort);
    for(i=0;i<10;i++)
   { 
      tmp=abs(array[i]-(ort));
      if(i==0)
      {
        distance=tmp;  
      }
      if(tmp<=distance)
      {
        near=array[i];
        distance=tmp;
      }
    }
     printf("ortalamaya en yakin dizi elamani:%d",near);
    
    return 0;
}
