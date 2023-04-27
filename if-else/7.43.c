#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Klavyeden girilen rakamları birbirinden farklı 3 basamaklı bir tam sayının 
en büyük rakamının sağdan kaçıncı olduğunu bulan C programını yazınız.

ENG :Write a C program to find the right digit of a 3-digit integer with different digits entered from the keyboard.
*/
int main()
{
   int value;
   int a,b,c;
   int max;

    printf("enter value(three digit):");
    scanf("%d",&value);
    c=value%10;
    b=(value/10)%10;
    a=value/100;
    max=a;
        if(b>max)
        {
            max=b;
        }
         if(c>max)
        {
            max=c;
        }
       else if(max==a)
        {
            max=3;
        }
        else if(max==b)
        {
            max=2;
        }
        else if(max==c)
        {
            max=1;
        }

    printf("the largest digit of the number is the %d. digit from the right",max);

    return 0;
}