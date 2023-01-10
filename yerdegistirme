#include <stdio.h>
#include <stdlib.h>

void yerdegistir(int *diziilk,int Y)
{
    int gecici,i;
    int *dizison;
    dizison=diziilk+Y;
    printf("Diziilk : %p \n",diziilk);
    printf("Dizison : %p \n",dizison);
    
    printf("\n------Değiştirilmeden önceki hali------\n");
    
    for(i=0;i<Y;i++)
    {
        printf("%d. Eleman : %d\n",i+1,*(diziilk+i));
    }
    
    for(i=0;i<Y/2;i++)
    {
        gecici=*(dizison-1-i);
        *(dizison-1-i)=*(diziilk+i);
        *(diziilk+i)=gecici;
    }
    
    printf("\n------Değiştirilmiş hali------\n");
    for(i=0;i<Y;i++)
    {
        printf("%d. Eleman : %d\n",i+1,*(diziilk+i));
    }
}



int main()
{
  int X[100];
  int *a1;
  int i,Y;
  
  a1=X;
  
  printf("Eleman sayisini giriniz\n");
  scanf("%d",&Y);
  
  for(i=0;i<Y;i++)
  {
      printf("\n %d. Eleman :",i+1);
      scanf("%d",a1+i);
  }
  
 yerdegistir(a1,Y);
  

    return 0;
}
