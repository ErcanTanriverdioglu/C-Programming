#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>

#define  TEXT_RESET         "\x1b[0m"
#define  TEXT_RED           "\x1b[31m"
#define  TEXT_GREEN         "\x1b[32m"
#define  TEXT_BLUE          "\x1b[34m"
#define  TEXT_CYAN          "\x1b[36m"
#define  TEXT_BOLD          "\x1b[1m"
#define  TEXT_UNDER         "\x1b[4m"

typedef enum tagColors
{
    RESET   = 0x00,
    RED     = 0x01,
    GREEN   = RED   << 1,
    BLUE    = GREEN << 1,
    CYAN    = BLUE  << 1,
    BOLD    = CYAN  << 1,
    UNDER   = BOLD  << 1,
    MAX     = UNDER << 1

}Colors;

FILE* f_out = NULL;

void printFormat(Colors myColors,const char* fmt,...)
{
    if (f_out == NULL)
        f_out = stdout;
    if (myColors >= MAX)
    {
        fprintf(stderr, "MAX BOYUT ASILDI\n");
        return;    
    } 
    va_list va;
    va_start(va,fmt);
    
    if (myColors & RED)
        fprintf(f_out, "%s", TEXT_RED);
    else if(myColors & GREEN)
        fprintf(f_out, "%s", TEXT_GREEN);
    else if (myColors & CYAN)
        fprintf(f_out, "%s", TEXT_CYAN);
    else if (myColors & BLUE)
        fprintf(f_out, "%s", TEXT_BLUE);
    
    if(myColors & BOLD)
        fprintf(f_out, "%s", TEXT_BOLD);
    if (myColors & UNDER)
        fprintf(f_out, "%s", TEXT_UNDER);
  
    vfprintf(f_out, fmt, va);
    fprintf(f_out, "%s\n", TEXT_RESET);
    va_end(va);

}

int main(void)
{
    Colors   myColors;
    printFormat(CYAN | BOLD | UNDER, "DENEME YAZISIDIR\n");
    printFormat(GREEN | BOLD, "DENEME YAZISIDIR\n");
  
    return 0;
}  
