#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    int hesap=1;
    for(int i=sayi;i>0;i--)
    {
        hesap*=i;
    }
   return (hesap);
}
int main()
{   
    int sonuc;
    int sayi;

    printf("Faktoriyeli alinacak sayiyi giriniz:");
    scanf("%d",&sayi);
    
    sonuc = faktoriyel(sayi);
    printf("Faktoriyel sonucu: %d",sonuc);
    return 0;
}
