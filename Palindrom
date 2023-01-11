#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char giris[50];
    int boyut,i,counter=0;
    char *kelime,*kelimeson;

    kelime=giris;

    printf("Kelimeyi giriniz:");
    scanf("%s",kelime);
    int x=strlen(kelime);
    kelimeson=giris+x;

    for(i=0; i<x/2; i++) {
        if(*(kelime+i)!=*(kelimeson-i-1)) {
            counter++;
        }
    }
    if(counter==0) {
        printf("\nKelime Palindromdur.");
    } else if (counter!=0) {
        printf("\nKelime Palindrom değildir.");
    }

    return 0;
}
