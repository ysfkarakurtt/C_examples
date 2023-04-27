#include<stdio.h>
#include<stdlib.h>
/*TR : Sinema şirketinin sayı ve yaşlara göre fiyatlandırma yapan programı yapınız.

ENG :Write the program that makes pricing according to the number and age of the movie company.
*/
int main()
{
    int  i;
    int birey;
    int yas;
    int toplam;
    float tutar1=0.0;
    float tutar2=0.0;
    float tutar3=0.0;
    float tutar4=0.0;
    float tutar5=0.0;

        printf("Ailedeki birey sayisi kac?");
        scanf("%d",&birey);
	    printf("%d kisinin yaslarini giriniz:",birey);
        for(i=1;i<=birey;i++)
        {
	        scanf("%d",&yas);
	        if(yas>=1 && yas<=100)
            {
		        if(yas>=1 && yas<=10)
                {
			        tutar1=tutar1+1;
		        }
		        if(yas>=11 && yas<=17)
                {
			        tutar2=tutar2+1.5;
		        }
		        if(yas>=18 && yas<=26)
                {
			        tutar3=tutar3+4.75;
		        }
		        if(yas>=27 && yas<=50)
                {
			        tutar4=tutar4+7;
		        }
		        if(yas>50)
                {
			        tutar5=tutar5+5.25;
		        }
	        }
        }
	    printf("Odenecek toplam tutar %.2f",tutar1+tutar2+tutar3+tutar4+tutar5);

	return 0;
}