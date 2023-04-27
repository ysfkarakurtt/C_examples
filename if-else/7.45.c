#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*TR :Klavyeden girilen üç basamaklı bir tam sayının 
rakamlarından elde edilebilecek en küçük 3 basamaklı tam sayıyı  yazan C programını kodlayınız.

ENG : A three-digit integer entered from the keyboard
Code the C program that prints the smallest 3-digit integer that can be obtained from
*/
int main()
{
   int value;
   int a,b,c;
   int max,min,mid ;
   int lastValue;

    printf("enter value(three digit):");
    scanf("%d",&value);
    c=value%10;
    b=(value/10)%10;
    a=value/100;
        if(a>b &&a>c)
        {
            max=a;
            if(b>c)
            {
                min=c;
                mid=b;
            }
            else
            {
                min=b;
                mid=c;
            }
        }
   
        if(b>a &&b>c)
        {
            max=b;
            if(a>c)
            {
                min=c;
                mid=a;
            }
             else
            {
                min=a;
                mid=c;
            }
        }

        if(c>a &&c>b)
        {
            max=c;
            if(a>b)
            {
                min=b;
                mid=a;
            }
             else
            {
                min=a;
                mid=b;
            }
    
        } 

        if(min==0)
        {
            lastValue=(mid*100)+(min*10)+max;
        }
        if(min!=0)
        {
            lastValue=(min*100)+(mid*10)+max;
        }
            
        printf("the largest number that can be obtained from this number %d",lastValue);


    return 0;
}