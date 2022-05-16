#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int i,kelime=1;
	char metin[10000];
	
	printf("Merhaba Bu Programimiz Girdiginiz Metinde Kac Kelime Oldugunu Gosteriyor.\n");
	printf("\nLutfen Metninizi Giriniz :");
	gets(metin);
	
	for(i=0;metin[i]!='\0';i++){
		if(metin[i]==' ' && metin[i+1]==' '){ // yan yana 2 boþluðu kelime saymasýn diye
			continue;
		}

		if(metin[i]==' '){ // Her boþluk Mantýken 1 kelime artýrýr ve en sona boþluk konulmaz.
			kelime++;
		}
		if(metin[i]==' ' && metin[i+1]=='\0'){ //En sonda Boþluk olursa 1 azaltsýn
			kelime--;
		}
}
	if(metin[0]==' '){ //for daki 1. if bunu saðlayamýyor
		kelime--;
	}

	if(metin[0]=='\0'){ // kelime girmesse 1 der bu yüzden bu þart
		kelime=0;
	}
	printf("\nMetniniz %d Kelimeden Olusuyor.", kelime);
	

	
	getch();
	return 0;
}
