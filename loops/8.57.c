#include<stdio.h>
#include<stdlib.h>
/* TR: Uyuklama yöntemi ile pay ve paydada sadeleştirilebilen,rakamları birbirinden farklı iki basamaklı pay ve paydaları
 bulan ve ekrana yazan C programını yazınız
 Uyuklama yöntemi pay ve paydada ortak olan sayıların birbirini götürerek yapılır.
  örneğin 26/65 ifadesinde 6 lar sadeleşiyor ve sonuç 2/5 çıkıyor aynı zamanda gerçekteki 26/65 ifadesinin sonucuda  2/5 çıkıyor
  
  ENG :Two-digit numerators and denominators with different digits, which can be simplified in the numerator and denominator with the snoozing method.
  Write a C program that finds it and writes it to the screen.
  The slumbering method is done by canceling out the numbers that are common in the numerator and denominator.
   For example, in the expression 26/65, the 6s are simplified and the result is 2/5. At the same time, the result of the actual expression 26/65 is 2/5.
   */
int main()
{
	
	float i,j,pay,payda,a,b,top=0,top2=0,top3=0,top4=0;
		for(a=1;a<10;a++)
		{

			for(b=0;b<10;b++)
			{

				for(j=0;j<10;j++)
				{

					for(i=1;i<10;i++)
					{

						if(i==a || i==b || j==a || j==b)
						{
							if(i!=j && a!=b)
							{
								pay=i*10+j;
								payda=a*10+b;
								if(pay!=payda)
								{
									if(payda!=0)
									{
										if(pay!=payda)
										{
											if(i==a)
											{
												if((j/b)==(pay/payda))
												{
													top=top+1;
													printf("%.0f / %.0f\n",pay,payda);
												}
											}
											if(i==b)
											{

												if((j/a)==(pay/payda))
												{
													top2=top2+1;
													printf("%.0f / %.0f\n",pay,payda);
												}
											}
											if(j==a)
											{

												if((i/b)==(pay/payda))
												{
													top3=top3+1;
													printf("%.0f / %.0f\n",pay,payda);
												}
											}	
											if(j==b)
											{

												if((i/a)==(pay/payda))
												{
													top4=top4+1;
													printf("%.0f / %.0f\n",pay,payda);
												}
											}

										}

									}
								}
	    					}
						}
					}
				}
     	}
	}

	printf("Toplam %.0f kesir bulunmustur.",top+top2+top3+top4);

	return 0;
}