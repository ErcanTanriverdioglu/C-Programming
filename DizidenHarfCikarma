#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void islem (char *sozcuk,char eleme)
{
    int a=strlen(sozcuk);
    int i,j;
    for(i=0;i<a;i++)
    {
        if(eleme==*(sozcuk+i))
        {
            for(j=i;j<a;j++)
            {
                *(sozcuk+j)=*(sozcuk+j+1);
            }
        }
    }
  
   
    printf("Son hali: %s",sozcuk);
   
}

int main()
{
   char harf[50];
   char eleme;
   char *sozcuk;
   sozcuk=harf;
   
   printf("Kelimeyi giriniz:");
   gets(sozcuk);
   printf("Çıkarılacak harfi giriniz:");
   scanf("%c",&eleme);
   
   islem(sozcuk,eleme);
   
    return 0;
}
