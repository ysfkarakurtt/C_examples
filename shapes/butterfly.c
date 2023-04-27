#include<stdio.h>
#include<stdlib.h>
/*TR : Satır sayısı kullanıcıdan istenen ve satır sayısına göre farklı
büyüklüklerde kelebek (* ve boşluklardan oluşan özel bir matris) modeli oluşturan uygulamayı
yazınız.
-> Döngü -1 girilene kadar devam etmelidir.
->Çift sayı girilmişse ekranda “Lütfen tek sayi giriniz.” yazdırılmalıdır
->goto yapısı kullanılmalıdır.


ENG :Different from the number of row users requested and according to row views
large butterfly (a special matrix of * and spaces) model-generating run
carries.
-> Keep the loop going until -1 is entered.
-> If an even number is entered, "Please enter your odd number." must be printed.
->The goto construct should be used.
*/
int main()
{    
    int satir;
    int i,a,b,j,k;
    int yildiz;
    int bosluk;
    
    bas:
    printf("satir sayisini giriniz:");
    scanf("%d",&satir);
    if(satir!=-1)
    {
        if(satir%2==0)
        {
            printf("lutfen tek sayi giriniz.\n");
            goto bas;

        }
        bosluk=satir-2;
        yildiz=1;
        for(a=0;a<satir/2;a++)
        {
            for(i=0;i<yildiz;i++)
            { 
                printf("*"); 
            }

            for(j=0;j<bosluk;j++)
            {
                printf(" ");
            }

            for(i=0;i<yildiz;i++)
            { 
                printf("*");  
            }
            printf("\n");
            yildiz++;
            bosluk=bosluk-2;
        }

        for(k=0;k<satir;k++)
        {
            printf("*");
        }

        printf("\n");
        bosluk=1;
        yildiz=satir/2;

        for(b=0;b<satir/2;b++)
        {
            for(i=0;i<yildiz;i++)
            { 
                printf("*");
            }

            for(j=0;j<bosluk;j++)
            {
                printf(" ");
            }

            for(i=0;i<yildiz;i++)
            { 
                printf("*");
            }
            printf("\n");
            yildiz--;
            bosluk=bosluk+2;
        }
    }

     if(satir==-1)
     printf("cikis yapildi.");
     
     if(satir!=-1)
     goto bas;
     
 return 0; 
}