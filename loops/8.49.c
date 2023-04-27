#include<stdio.h>
#include<stdlib.h>
/*TR :Kullanıcı tarafından girilen 3 tam sayının artan,azalan yada karışık sırada olup olmadığını
 sayılar eşit girilene  kadar ekrana yazan programı yazınız.

ENG :Whether the 3 integers entered by the user are in ascending, descending or mixed order.
  Write a program that prints the numbers until the numbers are entered equal.
*/
int main()
{ 
  int value,value2,value3;
  int counter=0,counter2=0,counter3=0;
    do
    {
        printf("Uc sayi giriniz:");
        scanf("%d %d %d",&value,&value2,&value3);
        if(value==value2 && value==value3)
        {
          break;
        }
        if(value>value2 && value2>value3)
        {
          printf("Girilen sayilar azalan sirada dizilmis.\n");
          counter++;
        }
        else if(value3>value2 && value2>value)
        {
          printf("Girilen sayilar artan sirada dizilmis.\n");
          counter2++;
        }
        else
        {
          printf("Girilenler karisik sirada dizilmis.\n");
          counter3++;
        }
    }
    while(value!=value2 && value!=value3 &&value2!=value3);
  
  printf("Program bitti\nGirilen dizilerden %d tanesi artan,%d tanesi azalan,%d tanesi karisik siradadir.",counter2,counter,counter3);
 
 return 0; 
}