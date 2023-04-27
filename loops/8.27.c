#include <stdio.h>
#include<stdlib.h>
/*TR : Klavyeden 0 girilinceye kadar Kar-zarar hesaplaması yapan programı yapınız.

ENG :Make the program that calculates profit and loss until 0 is entered from the keyboard.
*/
int main()
{
    int alis;
    int satis;
    int kar=0;
    int zarar=0;
    float oran;
    
        printf("XX ithalat-ihracat Sirketi Kar/Zarar Programi\n---------------------------------------------------\n");
        
        while(1)
        {
            printf("Alis ve satis degerlerini giriniz:");
            scanf("%d",&alis);
            scanf("%d",&satis);
            oran=((float)(satis-alis)/(float)alis);
            if(alis!=0 || satis!=0)
            {
                if(oran>0)
                {
                    printf("Kar orani %.2f\n",oran); 
                    kar=kar+1;
                }
                if(oran<0)
                {   
                    printf("zarar orani %.2f\n",oran*(-1));
                    zarar=zarar+1;
                }
            }
            else
            {
                printf("program sona erdi.\nToplamda %d  islemden kar,%d islemden zarar edilmistir.",kar,zarar);
                break; 
            }
        }
    return 0;  
}