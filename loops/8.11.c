#include<stdio.h>
#include<stdlib.h>
/*TR :Klavyeden girilen 3 basamaklı ya da daha büyük sayı girilineye kadar girilen 
1 yada 2 basamaklı olanların sayısını yazan programı yazınız.

ENG :Until a 3-digit or larger number entered from the keyboard is entered,
Add the program that prints the number of 1 or 2 digits.*/

int main()
{	
	int sayi;
	int ikibas=0;
	int tekbas=0;
    
	    printf("sayi gir");
	    scanf("%d",&sayi);
	    while(sayi/100==0)
        {
		    if(sayi/10==0)
            {
			    tekbas=tekbas+1;
		    }
		    if(sayi/10!=0)
            {
		        ikibas=ikibas+1;
	        }
	        printf("sayi gir");
	        scanf("%d",&sayi);
	    }
	
        printf("girilen %d sayinin %d tanesi tek basamakli %d tanesi iki basamakli",ikibas+tekbas,tekbas,ikibas);
	
	return 0;
}