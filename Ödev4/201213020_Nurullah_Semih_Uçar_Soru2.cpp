#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


// Metin Ýle Kelimeyi Kontrol ettiremedim elimden ancak bu kadar gelebildi. Yaptýðým çalýþma bazýlarý için doðru bazýlarý için yanlýþ oluyor.

int main(){
	
	char metin[10000];
	char kelime[10000];
	int sayac=0;
	int sayac2=0;
	int sayac3=0;
	int durum=0;
	int sira;
	int dur=0;
	int yer;
	printf("Merhaba Bu Programimiz Girdiginiz 1. Metnin Icersindeki 2. Girdiginiz Kelimeyi Bulan Programdir.\n");
	printf("\nLutfen Metninizi Giriniz :");
	gets(metin);
	printf("\nLutfen Kelimenizi Giriniz :");
	gets(kelime);
	
	for(int a=0;metin[a]!='\0';a++){
		if(metin[a]==' ') continue;
		sayac++;
	}
	for(int b=0;kelime[b]!='\0';b++){
		sayac2++;
	}
	for(int c=0;c<sayac;c++){
		for(int d=0;d<sayac2;d++){
			if(metin[c+d]!=kelime[d]){
				break;
			}
			else if(metin[c+d]==kelime[d]){
				sayac3++;
			}
		}
	}
	
	for(int e=0;metin[e]!='\0';e++){
		for(int f=0;kelime[f]!='\0';f++){
			
			if(metin[e+f]!=kelime[f]){
				break;
			}
			else if(metin[e+f]==kelime[f]){
				durum=1;
				
			}	
		}
	}
	if(durum==1){
		for(int g=0;g<sayac-1;g++){
			for(int h=0;h<sayac2;h++){
				if(metin[g+h-1]==kelime[h]){
					sira=g;
					if(metin[g]>='a'&& metin[g]<='z'){
						if(metin[g]>='A' && metin[g]<='Z'){
							if(metin[g+1]==' '){
								sira=sira-1;
							}
						}
					}
				

					printf("\t%s Kelimeniz %d. Harften Itibaren Vardir.\n",kelime,sira);
					printf("%d %d %d",g,h,sayac3);
					dur=1;
					if(dur==1){
						break;
					}
				}
			}
		}
	}
	else{
		printf("\t%s Kelimeniz Metinde Yoktur.",kelime);
	}
	getch();
	return 0;
}
/*	if(metin[g]>='a'&& metin[g]<='z'){
						if(metin[g]>='A' && metin[g]<='Z'){
							if(metin[g+1]==' '){
								sira=sira-1;
							}
						}
					}*/
