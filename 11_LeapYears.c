#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yil=0;
    int counter=0;
    int baslangic=0;

    printf("Start and end years:");
    scanf("%d %d",&baslangic,&yil);

    for(baslangic;baslangic<=yil;baslangic++)
    {
         if ((baslangic % 4 == 0))
        {
            if(baslangic % 100!= 0 || baslangic%400 == 0){
                counter++;
                printf("%d is a leap year.\n",baslangic);
            }
        }
    }
    printf("The number of leap years until year %d is %d.\n",yil,counter);

    return 0;
}
