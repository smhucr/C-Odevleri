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
		if(metin[i]==' ' && metin[i+1]==' '){ // yan yana 2 bo�lu�u kelime saymas�n diye
			continue;
		}

		if(metin[i]==' '){ // Her bo�luk Mant�ken 1 kelime art�r�r ve en sona bo�luk konulmaz.
			kelime++;
		}
		if(metin[i]==' ' && metin[i+1]=='\0'){ //En sonda Bo�luk olursa 1 azalts�n
			kelime--;
		}
}
	if(metin[0]==' '){ //for daki 1. if bunu sa�layam�yor
		kelime--;
	}

	if(metin[0]=='\0'){ // kelime girmesse 1 der bu y�zden bu �art
		kelime=0;
	}
	printf("\nMetniniz %d Kelimeden Olusuyor.", kelime);
	

	
	getch();
	return 0;
}
