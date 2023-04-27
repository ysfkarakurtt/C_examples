#include<stdio.h>
#include<stdlib.h>
/*TR : Darıca Hayvanat bahçesinde bulunan dişi goril kafesine her girişinde giriş sayısı kadar muz yemektedir.
Ancak 5. girişinden itibaren doymaya başladığından 5. ve sonraki her girişinde (toplam muz sayısı-giriş sayısı)/2+1 formülün sonucunun tam kısmı kadar kadar yemeğe devam etmektedir.Erkek goril ise  her zaman dişi gorilin yediği muz sayısının 2 katını yemektedir.
Klavyeden girilen cinsiyet ve giriş sayısına göre  her girişteki yediği toplam muz sayılarını gösteren programı yazınız.

ENG :The female gorilla in the Darica Zoo eats as many bananas as the number of entries each time she enters the cage.
However, since he starts to feel full from the 5th entry, he continues to eat as much as the full part of the result of the formula/2+1 at the 5th and each subsequent entry (total number of bananas-number of entries).
Write a program that shows the total number of bananas eaten in each entry according to the gender and the number of entries entered from the keyboard.
*/
int main()
{
	int  i,a,b,j,giris,toplam=0,formul=0;
	char cinsiyet;

	printf("Maymunun cinsiyetini giriniz(Erkek E/e,Disi D/d)):\n");
	scanf("%c",&cinsiyet);
	printf("Maymun kafese kac kez girdi:\n");
	scanf("%d",&giris);
	
	switch(cinsiyet)
    {		
		case 'E':
		case 'e':
			for(i=1;i<=giris;i++)
            {
                toplam=(toplam+i)*2 ;
				printf("%d.girisinde toplamda %d muz yemis oldu.\n",i,toplam);	
			    if(giris>=5)
                {
				    for(j=5;j<=giris;j++)
                    {
				        formul=(formul+(toplam-giris)/2+1)*2 ;
				        printf("%d.girisinde toplamda %d muz yemis oldu.\n",j,formul);
			        }
				
			    }
			}
			break;
			
			
		case 'D':
		case 'd':
			if (giris<5)
            {
			    for(a=1;a<=giris;a++)
                {
				    toplam=(toplam+a) ;
				    printf("%d.girisinde toplamda %d muz yemis oldu.\n",a,toplam);
			    }
				
			}
			
            if(giris>=5)
            {
		        for(a=1;a<5;a++)
                {
				    toplam=(toplam+a);
				    printf("%d.girisinde toplamda %d muz yemis oldu.\n",a,toplam);
			    }
				
                for(b=5;b<=giris;b++)
                {
				    toplam=toplam+((toplam-giris)/2)+1;
				    printf("%d.girisinde toplamda %d muz yemis oldu.\n",b,toplam);	
			    }
				
			}
			
			break;
	}
	
	
	return 0;
}