#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sirala(int *sayi)
{
    int gecici=0;
    printf("----SIRALAMADAN ONCEKI HAL----\n");
    for(int i=0;i<100;i++)
    {
    printf("%3d",*(sayi+i));
    if((i+1)%10==0)
    {
        printf("\n");
    }
    }
    printf("----SIRALAMADAN SONRAKI HAL----\n");
    
    for(int i=0;i<100;i++)
    {
        for(int j=i+1;j<100;j++)
        {
            if(*(sayi+j)<*(sayi+i))
            {
            gecici=*(sayi+i);
            *(sayi+i)=*(sayi+j);
            *(sayi+j)=gecici;
            }
        }
   
    }
     for(int i=0;i<100;i++)
    {
    printf("%3d",*(sayi+i));
    if((i+1)%10==0)
    {
        printf("\n");
    }
    }
}
int main()
{   
    int sayilar[100];
    int *sayi;
    sayi=sayilar;
    
    srand(time(0));
    for(int i=0;i<100;i++)
    {
    *(sayi+i)=rand()%100;
    }
    
    sirala(sayi);

    return 0;
}
