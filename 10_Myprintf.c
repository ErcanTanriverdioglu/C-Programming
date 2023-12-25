#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>

typedef struct  string
{
  const char *buffer;
  uint16_t size;
}String;

void str_init(String* str,uint16_t boyut)
{
    str->size=boyut;
    str->buffer=(char*)realloc(str->buffer,str->size);
    if(str->buffer==NULL)
    {
        perror("Boyut olusturma hatasi:\n");
        exit(EXIT_FAILURE);
    }
    printf("Memory Ayrildi %d\n",str->size);   
}

int str_printf(String* str,const char *fmt,...)
{
    va_list va;
    va_start(va,fmt);
    char buffer[1024];
    int uzunluk=0;
    uzunluk=vsprintf(buffer,fmt,va);
    str_init(str,uzunluk);
    puts(buffer);
    va_end(va);
    return vsprintf(buffer,fmt,va);
}

int main()
{
    String str={.buffer=NULL};
    char olustur[]="ERCAN TANRIVERDIOGLU";
    int deneme = 12345678;
    str_init(&str,1);
    str_printf(&str,"Int degeri olarak girilen sey budur = %d\n",deneme);
    str_printf(&str,"String degeri olarak girilen sey budur = %s\n",olustur);

    return 0;
}
