#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*TR : Verilen bir metindeki farklı kelimeleri bulan ve bu kelimelerin frekans
değerlerini hesaplayıp ekrana yazdıran programı kodlayınız
NOT : kelimenin frekansi= (kelimenin metinde geçme sayısı)/(metindeki toplam kelime sayısı)


ENG :Finding different words in a given text and determining the frequency of these words
Code a program that calculates and prints the values
NOTE : frequency of the word = (number of occurrences of the word in the text)/(total number of words in the text)
*/
#define MAX_KELIME_UZUNLUGU 100
#define MAX_METIN_UZUNLUGU 10000

char **KelimeBul(char *metin, int *kelimeSayisi);
float *FrekansHesapla(char **kelimeler, int kelimeSayisi, int toplamKelimeSayisi);
void EkranaYazdir(char **kelimeler, float *frekanslar, int kelimeSayisi);

int main()
{
    char metin[MAX_METIN_UZUNLUGU];
    printf("Metni girin:\n");
    fgets(metin, MAX_METIN_UZUNLUGU, stdin);
    int kelimeSayisi = 0;
    char **kelimeler = KelimeBul(metin, &kelimeSayisi);
    float *frekanslar = FrekansHesapla(kelimeler, kelimeSayisi, kelimeSayisi);
    EkranaYazdir(kelimeler, frekanslar, kelimeSayisi);
    return 0;
}

char **KelimeBul(char *metin, int *kelimeSayisi)
{
    char **kelimeler = (char **)malloc(sizeof(char *) * MAX_METIN_UZUNLUGU);
    char *kelime = strtok(metin, " .,;:\n\r\t"); 
    int i;
    
    while (kelime != NULL)
    {
        
        for (i = 0; i < strlen(kelime); i++)
        {
            kelime[i] = tolower(kelime[i]);
        }

        kelimeler[*kelimeSayisi] = (char *)malloc(sizeof(char) * MAX_KELIME_UZUNLUGU);
        
        strcpy(kelimeler[*kelimeSayisi], kelime);
        (*kelimeSayisi)++;
        kelime = strtok(NULL, " .,;:\n\r\t");
    }
    return kelimeler;
}

float *FrekansHesapla(char **kelimeler, int kelimeSayisi, int toplamKelimeSayisi)
{
    float *frekanslar = (float *)malloc(sizeof(float) * kelimeSayisi);
    int i,j;
    for (i = 0; i < kelimeSayisi; i++)
    {
        int sayac = 0;
        for (j = 0; j < kelimeSayisi; j++)
        {
            if (strcmp(kelimeler[i], kelimeler[j]) == 0)
            {
                sayac++;
            }
        }
        frekanslar[i] = (float)sayac / toplamKelimeSayisi;
    }
    return frekanslar;
}

void EkranaYazdir(char** kelimeler, float* frekanslar, int kelimeSayisi) 
{
    printf("Kelime  -  Frekans\n");
    int i;
    for ( i = 0; i < kelimeSayisi; i++) {
        printf("%s  -  %f\n", kelimeler[i], frekanslar[i]);
    }
}

