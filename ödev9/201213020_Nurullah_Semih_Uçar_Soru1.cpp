#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct ilkod{
	int plaka;
	char ilisim[10];
}ilbilgi;


int main(){
	
	FILE *fp;

	char sehirler[10][10]={"Adana","Adiyaman","Afyon","Agri","Amasya","Ankara","Antalya","Artvin","Aydin","Balikesir"};
	if((fp=fopen("sehirler.dat","w")) == NULL){
		printf("Dosya Acilmadi!");
		return 0;
	}
	
	 for(int i=0; i<10; i++){
		ilbilgi.plaka=i+1;
		strncpy(ilbilgi.ilisim, sehirler[i],10);
		
		printf("%d\t %s\n", ilbilgi.plaka,ilbilgi.ilisim);
		if(fwrite(&ilbilgi,sizeof(struct ilkod),1,fp)!=1){
			printf("Dosya Yazilamadi!!");
			return 0;
		}
	}

	
	fclose(fp);
	getch();
	return 0;
}
