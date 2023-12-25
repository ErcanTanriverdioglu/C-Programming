#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct tagString
{
    uint16_t size;
    char **buffer;
} string;

void stringSetSize(string *str, uint16_t newSize)
{
    str->size = newSize;
    str->buffer = (char **)realloc(str->buffer, str->size  * sizeof(char*));
    if (str->buffer == NULL)
    {
        perror("Realloc Error:");
        exit(EXIT_FAILURE);
    }
}

int main()
{
    FILE *acilan_dosya = NULL;
    FILE *yazilan_dosya = NULL;
    string str = {.buffer = NULL};
    stringSetSize(&str, 4);

    acilan_dosya = fopen("test.txt", "r");
    if (acilan_dosya == NULL)
    {
        printf("Could not open file to read!!!!!\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0;; i++)
    {
        char buffer[1024];
        if (str.size < i + 2)
            stringSetSize(&str, str.size * 2);

        if (fgets(buffer, 1024, acilan_dosya) == NULL)
            break;

        uint16_t len = strlen(buffer);
        str.buffer[i] = (char *)malloc(len + 1);
        strcpy(str.buffer[i], buffer);
    }
   
   
    yazilan_dosya = fopen("output.txt", "w");
    
    for(int k=0;;k++)
    {    
        printf("%s\n", str.buffer[k]);
        fputs(str.buffer[k],yazilan_dosya);
        if(str.buffer[k]=='\0')
            break;

    }

    

    // free(str.buffer);
    return 0;
}
