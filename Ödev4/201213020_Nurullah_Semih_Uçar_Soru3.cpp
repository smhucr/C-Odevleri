#include<stdio.h>
#include<conio.h>


int main(){
	
	
	char metin[10000];
	printf("Merhaba Bu Programimiz Girdiginiz Metindeki Harfleri Buyukse Kucuk, Kucukse Buyuk Yapiyor.\n");
	printf("\nLutfen Metninizi Giriniz :");
	gets(metin);
	
	for(int i=0;metin[i]!='\0';i++){
		
		if(metin[i]>='A' && metin[i]<='Z'){
			metin[i]+=('a'-'A'); // ascii tablosunda harflerin say�lar� oldu�u i�in matematik i�lemi yapt�k altta da ayn�s� �sttede 
		}
		else if(metin[i]>='a' && metin[i]<='z'){
			metin[i]-=('a'-'A');
		}
	}
	printf("%s", metin);
	getch();
	return 0;
}
