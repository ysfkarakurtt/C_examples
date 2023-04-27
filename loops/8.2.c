#include<stdio.h>
#include<stdlib.h>
/* TR :n ∑ i=1 (i+1)/i =?  ifadesindeki n değerini bulunuz

ENG : n ∑ i=1 (i+1)/i =?  Find the value of n in the expression.
 */
int main()
{
    int sayi,i;
    float toplam=0;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    for(i=1;i<=sayi;i++)
    {
        toplam=toplam+(((float)i+1)/(float)i);

    }
    printf("%.2f",toplam);
 return 0; 
}