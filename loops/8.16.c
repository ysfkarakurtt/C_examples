#include<stdio.h>
#include<stdlib.h>
/*TR : 1-20 arasında verilen bir kenarın uzunluğuna göre ekrana
 * karakteri ile bir ikizkenar dik üçgen veren kodu yazınız.
 
 ENG :According to the length of a given edge between 1-20
  Write the code that gives an isosceles right triangle with the * character.
 */
int main()
{		
	int i;
	int j;
	int sayi;
	
    printf("Bir kenar uzunlugunu giriniz:\n");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
    {		
	    for(j=1;j<=i;j++)
        {
		    printf("*");
	    }
	    printf("\n");
	
	}
	
	return 0;
}