#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*TR : Birden dokuza kadar olan tek sayıların(1,3,5,7,9) ingilizce karşılıklarının başharflerine göre,
rakamın ingilizce-Türkçesini ve değerini yazan C programını yazınız.

ENG :According to the initials of the English equivalents of odd numbers from one to nine (1,3,5,7,9)
Write the C program that writes the English-Turkish version of the number and its value.
*/
int main()
{
    char digit;
    printf(" enter the first letter of the number:");
    scanf("%c",&digit);
        if(digit=='o')
        {
            printf("one -bir-1");
        }
        if(digit=='t')
        {
            printf("three -uc-3");
        }
        if(digit=='f')
        {
            printf("five -bes-5");
        }
        if(digit=='s')
        {
            printf("seven -yedi-7");
        }
        if(digit=='n')
        {
            printf("nine -dokuz-9");
        }
        
    return 0;
}