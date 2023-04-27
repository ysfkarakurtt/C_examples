#include<stdio.h>
#include<stdlib.h>
/*TR :Kod içerisinde tanımlı 10 elemanlı bir dizi içerisinde,yine kod içerisinde tanımlı 
3 elemanlı bir dizinin bulunup bulunmadığını bulan programı yazınız.

ENG :Within a 10-element array defined in the code, again defined in the code
Write a program that finds whether a 3-element array exists.
*/
int main()
{
  int counter=0;
  int  i,j;
  int array[10]={13,10,4,1,9,2,25,30,8,60};
  int array2[3]={1,9,2};

    printf("Buyuk dizinin elemanlari:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",array[i]);
    }
    
    printf("\n");
    printf("Kucuk dizinin elemanlari:\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t",array2[i]);
    }

    printf("\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<10;i++)
        {   
            if(array[i]==array2[j])
            {
                if(array[i+1]==array2[j+1])
                {
                    if(array[i+2]==array2[j+2])
                    {   
                        printf("Kucuk dizi buyuk dizi icerisinde bulunmaktadir\nBuyuk dizinin %d. elemanindan baslamaktadir",i+1);
                        counter++;
                    }
                }
            }

        }
    }

    if(counter==0)
    {
        printf("Kucuk dizi buyuk dizi icerisinde bulunamadi!");

    }
 return 0; 
}