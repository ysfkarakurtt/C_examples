#include<stdio.h>
#include<stdlib.h>
/*TR : Klavyeden girilen 5 tane sayıya göre girilen sayı kadar * karakterini ekrana basan kodu yazınız.

ENG :Write the code that prints * characters as many as the number entered according to the 5 numbers entered from the keyboard.
*/
int main()
{
    int i;
    int sayi1;
    int sayi2;
    int sayi3;
    int sayi4;
    int sayi5;
    
        printf("5 adet sayi giriniz:");
        scanf("%d",&sayi1);
        scanf("%d",&sayi2);
        scanf("%d",&sayi3);
        scanf("%d",&sayi4);
        scanf("%d",&sayi5);
        for(i=1;i<=sayi1;i++)
        {
	        printf("*");
        }
        printf("\n");
        for(i=1;i<=sayi2;i++)
        {
	        printf("*");
        }
        printf("\n");
        for(i=1;i<=sayi3;i++)
        {
	        printf("*");
        }
        printf("\n");
        for(i=1;i<=sayi4;i++)
        {
        	printf("*");
        }
        printf("\n");
        for(i=1;i<=sayi5;i++)
        {
	        printf("*");
        }
        printf("\n");

	return 0;
}