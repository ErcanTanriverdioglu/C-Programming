#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <ctype.h>

void my_perror(const char* fmt,...)
{
    va_list va;
    va_start(va, fmt);
    vfprintf(stderr, fmt, va);
    fprintf(stderr, "%s\n", strerror(errno));
    va_end(va);
}

int main()
{
    FILE *f,*f2;
    char ch;
    if ((f = fopen("test.txt", "r")) == NULL) {
        my_perror("File opening: ");
    }
    
    if ((f2 = fopen("out.txt", "w")) == NULL) {
        my_perror("File creating: ");
    }
    printf("Choose the word to be removed:");
    scanf("%c",&ch);
    
    char buffer[1024];
    for (;;) {
        if (fgets(buffer, 1024, f) == NULL) {
            printf("End of file...\n");
            break;
        }
        
        bool flag = false;
        for (int i = 0; i < strlen(buffer); ++i) {
            if (buffer[i] == ch)  {
                for(int j=i;j<strlen(buffer)-1;j++)
                {
                    buffer[j]=buffer[j+1];
                    buffer[j+1]=' ';    
                    
                } 
                buffer[strlen(buffer)-1]='\0';
            
            }
        }
     

        fprintf(f2,"%s", buffer);
    }

    fclose(f);
    fclose(f2);
        
    printf("Successfull...\n");
    
}

