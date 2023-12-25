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

void str_init(String* str,uint16_t xsize)
{
    str->size=xsize;
    str->buffer=(char*)realloc(str->buffer,str->size);
    if(str->buffer==NULL)
    {
        perror("SIZE OPERATION ERROR:\n");
        exit(EXIT_FAILURE);
    }   
}

int str_printf(String* str,const char *fmt,...)
{
    va_list va;
    va_start(va,fmt);
    char buffer[1024];
    int uzunluk=0;
    uzunluk=vsprintf(buffer,fmt,va);
    str_init(str,uzunluk);
    printf("MEMORY LENGHT : %d ADDRESS : %p \n",str->size,str->buffer);
    puts(buffer);
    return vsprintf(buffer,fmt,va);
}

int main()
{
    String str={.buffer=NULL};
    int deneme = 12345678;
    str_init(&str,1);
    str_printf(&str,"My value is = %d\n",deneme);
    
  return 0;
}
