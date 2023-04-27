#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// TR :Klavyeden girilen 5 basamaklı bir tam sayının palindrome olup olmadığını bulan C programını yazınız.
// ENG :Write a C program to find whether a 5-digit integer entered from the keyboard is a palindrome.
int main()
{
 
    int sayi; 
    int ters=0;
    int rem;
    int temp;
    
        printf("Bir sayi giriniz : ");
        scanf("%d", &sayi);
    
    temp = sayi;
        while(temp>0)
        {
            rem = temp%10;
            ters = (ters*10)+rem;
            temp = temp/10;
        }
        if(ters == sayi)
        printf("Palindromdur");
        else
        printf("Palindrom degildir.");

 return 0; 
}