#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{   
    int sayi,sayac=0;
    int degerler[100];

    printf("ikilik tabana çevrilecek sayıyı giriniz:");
    scanf("%d",&sayi);
    
      while((sayi)!=1)
    {
        degerler[sayac]=(sayi%2);
        if(sayi%2==0)
        {
        sayi=(sayi/2);
        }
        else if(sayi%2==1)
        {
            sayi=(sayi-1)/2;
        }
        sayac++;
    }
    degerler[sayac]=1;
    for(int i=sayac;i>=0;i--)
    {
        printf("%d",degerler[i]);
    }
    
    return 0;
}
