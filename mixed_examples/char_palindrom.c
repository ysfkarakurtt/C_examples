#include <stdio.h>
#include <string.h>
/*TR :Klavyeden girilen cümledeki alıntı cümlesinin (Çift tırnaklar arasına yazılmış cümle) içinde yer
alan palindrom kelimeleri bulan C programını yazınız.Palindrom kelimeler, tersten okunuşu da aynı olan kelimelerdir. (Örn. Makam, neden, ana, ara…)
Girdi:
Yusuf "neden makam sahibi oldun "dedi
Çıktı:
Alıntı cumlesi:neden makam sahibi oldun
Alinti cumlesindeki palindrom kelimeler: neden makam


ENG :It takes place inside the translation sentence (the sentence written by double quotes) in the sentence entered from the keyboard.
The domain contains C programs that find palindrome words.Palindrome words are words that are the same backwards. (E.g. makam,neden,ara,ana)
İnput:
Yusuf "neden makam sahibi oldun "dedi
Output:
Alıntı cumlesi:neden makam sahibi oldun
Alinti cumlesindeki palindrom kelimeler: neden makam
*/
void alintiBul(char *cumle);
int is_palindrome(char *word, int length);
int main()
{
    char cumle[1000];
    char *ilkAlinti;
    char *sonAlinti;
    char *ilkKelime;
    char *sonKelime;
    int kelimeUzunlugu;
    int sayac=0;
    
        printf(" Lutfen bir cumle girin:");
        fgets(cumle,1000,stdin);
        alintiBul(cumle);

        ilkAlinti=strchr(cumle,'"');
        sonAlinti=strchr(ilkAlinti +1,'"');
        ilkKelime=ilkAlinti+1;
        printf("Alinti cumlesindeki palindrom kelimeler:");
        
        while(ilkKelime<sonAlinti)
        {
            sonKelime=strchr(ilkKelime,' ');
            
            if(sonKelime==NULL)
            {
                sonKelime=sonAlinti;
                printf("Cumlede alinti yok.");
            }
            kelimeUzunlugu=sonKelime-ilkKelime;
            if (is_palindrome(ilkKelime, kelimeUzunlugu)) 
            {
                printf("%.*s ", kelimeUzunlugu, ilkKelime);
                sayac++;
            }
            
            ilkKelime=sonKelime+1;
        }

        if(sayac ==0)
        {
            printf("yok.");
        }
        
        printf("\n");
    return 0;
}

void alintiBul(char *cumle)
{
    char *ilkAlinti;
    char *sonAlinti;
    char *ilkKelime;
    char *sonKelime;
    int kelimeUzunlugu;
    
    
    ilkAlinti=strchr(cumle, '"');
      
      if(ilkAlinti==NULL)
        {
            printf("Cumlede alinti yok.");
        }
      else
        {
            printf("Alinti Cumlesi:");
        }
    
    sonAlinti=strchr(ilkAlinti +1, '"');
    ilkKelime= ilkAlinti+1;

    while (ilkKelime<sonAlinti)
        {
            sonKelime=strchr(ilkKelime,' ');
        
            if (sonKelime == NULL) 
            {
                sonKelime = sonAlinti;
                printf("Cumlede alinti yok.");
            }

            kelimeUzunlugu=sonKelime-ilkKelime;
        
            if(kelimeUzunlugu>0)
            {
                printf("%.*s ", kelimeUzunlugu,ilkKelime);
            }
        
            ilkKelime=sonKelime +1;

        }

        printf("\n");
    
}

int is_palindrome(char *word, int length)
{
    int i;
    
    for (i = 0; i < length / 2; i++) 
    {
        if (word[i] != word[length - i - 1]) 
        {
            return 0;
        }
    }
    return 1;
}