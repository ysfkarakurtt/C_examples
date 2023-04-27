#include<stdio.h>
/*TR : Kenar uzunlukları her defasında yarıya inen
 karelerden klavyeden girilen  kadar karenin toplam alanını bulan kodu yazınız.
 
 ENG :Side lengths halved each time
  Write the code that finds the total area of the squares as entered from the keyboard.
 */
int main()
{
	int kenar;
	int adet;
	int toplam=0;
	int alan;
	int i;
	int bayrak=0;
	
	printf("ilk karenin kenar uzunluklarini gir:");
	scanf("%d",&kenar);
	printf("kac tane kare:");
	scanf("%d",&adet);
	i=kenar;
	while(1)
	{	
		alan=i*i;
		toplam=toplam+alan;
		bayrak=bayrak+1;
		i=(i/2);
		if(bayrak==adet)
		{	
			printf("toplam alan %d",toplam);
			break;
		}
		
	}
	

	

	
	
	
	
	
	
	
	
	return 0;
}