#include <stdio.h>
#include <stdlib.h>
/*TR: Kendisine gönderilen 2 pozitif tam sayının ekokunu(EN KÜÇÜK ORTAK KAT) bulan kodu yazınız.

ENG:Write the code that finds the least common multiple of 2 positive integers sent to it.
*/
int ekok(int a,int b);
int main()
{
    int value,value2;

        printf("ilk sayiyi giriniz:");
        scanf("%d",&value);
        printf("ikinci sayiyi giriniz:");
        scanf("%d",&value2);
        printf("girdiginiz sayilarin ekoku:\n");
        printf("%d",ekok(value,value2));
    
    return 0;
}

int ekok(int a,int b)
{  
    int ebob;
    int ekok;
    int new;
    int new2;

     new=a;
     new2=b;
        if(a==b)
        {
            ebob=a;
        }
        if(a>b)
        {  
            while(a!=b)
            {  
                if(a>b)
                 {  
                    a=a-b;
                 }
                else if(b>a)
                 {
                    b=b-a;
                 }
                else
                {
                    ebob=a;
                }
            }
        }

        else
        {  
             while(a!=b)
            {
                if(a>b)
                {  
                    a=a-b;
                }
                else if(b>a)
                {
                    b=b-a;
                }
                else
                {
                    ebob=a;
                }
            }
        }

    ebob=a;
    ekok=(new*new2)/ebob;
    
    return ekok;
}