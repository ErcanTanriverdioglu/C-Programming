#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float topla(float x, float y)
{  return x + y;
}
float cikar(float x, float y)
{   return x - y;
}
float carp(float x, float y)
{  return x * y;
}
float bol(float x, float y)
{ return x / y;
}

int main()
{
    while (1) {
        float x = 0;
        float y = 0;
        char islem[20];
        char kontrol;
        float (*fonksiyon)(float, float);
       
        printf("Isleme devam etmek icin herhangi bir tusa basiniz.\nCikmak icin ise x'e basiniz: ");
        scanf(" %c", &kontrol);
        if (kontrol == 'x')
            break;
        printf("\nIslem yapilacak ilk sayiyi ve ikinci sayiyi giriniz:");
        scanf("%f %f", &x, &y);
        printf("\nYapilacak islemi yaziniz:\n->topla\n->cikar\n->bol\n->carp\n");
        scanf("%s", islem);

        if ((strcmp(islem, "topla") == 0))
                 fonksiyon = topla;
        if ((strcmp(islem, "cikar") == 0))
                 fonksiyon = cikar;
        if ((strcmp(islem, "carp") == 0))
                 fonksiyon = carp;
        if ((strcmp(islem, "bol") == 0))
                 fonksiyon = bol;
        if ((strcmp(islem, "bol") != 0) && (strcmp(islem, "carp") != 0) && (strcmp(islem, "topla") != 0) && (strcmp(islem, "cikar") != 0))
        { fprintf(stderr, "GIRILEN ISLEM BULUNAMADI.....\n");
          abort();
        }
        printf("Islem sonucu = %.2f dir. \n", fonksiyon(x, y));   
    }
    return EXIT_SUCCESS;
}
