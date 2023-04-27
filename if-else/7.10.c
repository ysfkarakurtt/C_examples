#include<stdio.h>
#include<stdlib.h>

/*TR :Dört(4) basamaklı (abcd) pozitif tam sayılardan, 
ilk iki basamağı ile son iki basamağının çarpımı,rakamlarının yer değiştirilmiş halinin çarpımına eşit olma (ab*cd=ba*dc) özelliğine sahip olanlara Tersyüz Sayı denir ise
klavyeden girilen 4 basamaklı bir sayının Tersyüz Sayı olup olmadığını ekrana yazan programı yazınız.
 
 ENG : Four (4) digit (abcd) positive integers,
If the product of the first two digits and the last two digits is equal to the product of the swapped digits (ab*cd=ba*dc), it is called an Inverted Number.
Write a program that displays whether a 4-digit number entered from the keyboard is an Inverted Number.*/

int main()
{ 
  int value;
  int tmp,tmp2,tmp3,tmp4;
  int i;
  int a,b,c,d;   
  
  //abcd = value
      printf("please enter digit four value :");
      scanf("%d",&value);
      tmp=value%100;
      tmp2=value/100;
      tmp3=(tmp%10)*10+tmp/10;
      tmp4=(tmp2%10)*10+tmp2/10;
   
          if(tmp*tmp2==tmp3*tmp4)
            {
               printf("the value entered is a TERSYUZ number");
            }
          else
            {
                printf("the value entered is a  not TERSYUZ number");
            }

 return 0; 
}