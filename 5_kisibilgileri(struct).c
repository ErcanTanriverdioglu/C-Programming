#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char isim[20];
    char soyisim[30];
    char mahalle[20];
    char sokak[20];
    char no[5];
    char daire[2];
    char telno[11];
} kisiler;
void bilgigir (kisiler aday[],int sayi)
{
    int x;
    for(int i=0; i<sayi; i++) {
        printf("Kisi %d ismini giriniz:",i+1);
        scanf("%s",aday[i].isim);
        printf("Kisi %d soyismini giriniz:",i+1);
        scanf("%s",aday[i].soyisim);
        printf("Kisi %d telefon numarası giriniz:",i+1);
        scanf("%s",aday[i].telno);
        printf("Kisi %d mahalle giriniz:",i+1);
        scanf("%s",aday[i].mahalle);
        printf("Kisi %d sokak giriniz:",i+1);
        scanf("%s",aday[i].sokak);
        printf("Kisi %d apartman no giriniz:",i+1);
        scanf("%s",aday[i].no);
        printf("Kisi %d daire no giriniz:",i+1);
        scanf("%s",aday[i].daire);
       
    }
    
   
    
}
int main()
{
    int sayi;
    printf("Kisi sayisi:");
    scanf("%d",&sayi);
    kisiler kisi[sayi];

    bilgigir(kisi,sayi);
  
   printf("\nKisi bilgileri:\n");
    for(int i=0; i<sayi; i++) {
        printf("Kisi %d ismi ve soyismi: %s %s \n",i+1,kisi[i].isim,kisi[i].soyisim);
        printf("Kisi %d adres: %s mahallesi %s sokak no: %s daire: %s \n",i+1,kisi[i].mahalle,kisi[i].sokak,kisi[i].no,kisi[i].daire);
        printf("Kisi %d telefon numarası:%s\n",i+1,kisi[i].telno);
    }
    return 0;
}
