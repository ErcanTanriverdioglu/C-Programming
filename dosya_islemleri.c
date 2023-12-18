#include <stdio.h>
#include <stdlib.h>

/*   İSİM SOYİSİM NUMARA şeklinde tutulan dataset dosyasındaki veriler okunup bunlar daha sonra yenihal dosyasına yazılır.  */

int main()
{ 
	FILE* f;
	FILE* x;
	
	char deneme[100][50];
	char duzenle[50][50];
	int i,sayac=0;
       
	 f = fopen( "C:\\Users\\etanriverdioglu\\Desktop\\CDeneme\\Deneme2\\dataset.txt", "r");
	 x = fopen( "C:\\Users\\etanriverdioglu\\Desktop\\CDeneme\\Deneme2\\yenihal.txt", "w");
	
		if(f == NULL){
			printf("\nDosya acilamiyor!!!! \n");
			exit(EXIT_FAILURE);
		}
		else{
           		printf("\n Dosya acildi...\n");
		    for(i=0;fscanf(f,"%s",deneme[i])==1;i++,sayac++);

		    for(int x=0,i=0;x<sayac;x+=3,i++){
			sprintf(duzenle[i],"%s %s %s",deneme[x],deneme[x+1],deneme[x+2]);
			
			}

		    for(i=0;i<sayac/3;i++){	
			fprintf(x,"%s",(duzenle[i]));
			fprintf(x,"\n");
		    }
        }
	fclose(f);
	fclose(x);	
	return 0;
}
