#include <stdio.h>
#include <stdlib.h>
/*TR :  Kendisine gönderilen çok büyük pozitif tam sayının basamaklarına ayırıp  basamak sayısını veren ve tersten yazan kodu yazınız.

ENG:  Write the code that divides the very large positive integer sent to it into digits and gives the number of digits and writes it in reverse.
 */
int basamakla(long value,int arr[100]);
int main()
{
    int long value;
    int i;
    int array[100];
    int yazdir;

       printf("Basamak sayisini ogrenmek istediginiz sayiyi giriniz:");
       scanf("%d",&value);
       yazdir =basamakla(value,array);
       printf("sayiniz %d basamakli ve basamaklarina ayrilmis hali:",yazdir);
        for(i=0;array[i]!=-1;i++)
            {
                printf("%d\t",array[i]);
            }

    return 0;

}

int basamakla(long value,int arr[100])
{  
    int i;
    int digit=0;//basamak

       for(i=0;i<100;i++)
       {
          arr[i]=value%10;
          value /= 10;
          digit++;

          if(value==0)
          {
              arr[i+1]=-1;
              return digit;
          }

       }

}