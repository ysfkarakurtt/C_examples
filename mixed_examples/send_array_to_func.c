#include<stdio.h>
#include<stdlib.h>
/*TR : 5 elemanlı bir dizinin  elemanlarını kullanıcıdan alıp bunun en küçük elemanını bulan  kodu diziyi fonksiyona göndererek yapınız.

ENG : Make the code that takes the elements of a 5-element array from the user and finds the smallest element of it by sending the array to the function.
*/
int min( int array[],int);
int main()
{
  int array[5];
  int i,enKucuk,n=5;
  
    printf("dizinin elamanlarini giriniz:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }  
    
    enKucuk =min( array,n);
    printf("dizinin en kucuk elamani = %d",enKucuk);

 return 0; 
}

int min( int array[],int n)
{
    int i,j;
    int min=array[0];
      
      for(i=1;i<n;i++)
        {  
            if(array[i]<min)
            {
              min=array[i];    
            }
        }

   return min;
}