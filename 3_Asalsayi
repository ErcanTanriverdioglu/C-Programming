#include <stdio.h>
#include <stdlib.h>

int asalmi(int veri)
{
    int i,sayac=0;
    for(int i=2;i<veri;i++)
    {
        if(veri%i==0)
        {
            sayac++;
        }
    }
    return (sayac);
}

int main()
{   int sayi,donus;
    
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    
    donus=asalmi(sayi);
    if(donus==0)
    {
        printf("\n!!!!!!!!!!!Sayi Asaldir!!!!!!!!!!!\n");
    }
    else
    {
        printf("\n!!!!!!!!!!!Asal Degildir!!!!!!!!!!!\n");
    }
    printf("Bolen sayisi:%d",donus+2);

    return 0;
}
