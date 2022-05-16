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
	int plaka;
	char cevap;
	if ((fp = fopen ("sehirler.dat", "r")) == NULL) {
        printf("Dosya açýlamadý!");
        getch();
        return 0;
    }
	
	do{
		printf("\nPlaka Giriniz : ");
		scanf("%d",&plaka);
		
		fseek(fp,(plaka-1)*sizeof(struct ilkod), SEEK_SET);
		if((fread(&ilbilgi, sizeof(struct ilkod),1, fp))!= 0){
			printf("%d %s\n",ilbilgi.plaka,ilbilgi.ilisim);
		}
		else{
			printf("Kayit bulunamadi.\n");
		}
		printf("\nDevam etmek istiyor musunuz? (E/H) :");
		cevap = getche () ;
	}while(cevap != 'h' && cevap !='H');
	
	
	
	
	
	
	
	fclose(fp);
	getch();
	return 0;
}
