#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
	
	char metin[100];
	int temp[58];
	char temp2[58];
	int sayac=0;
	int k=0;
	int l=0;
	printf("Lutfen Metninizi Giriniz : ");
	gets(metin);
	
	for(int i=65;i<123;i++){
		sayac=0;
		for(int j=0;metin[j]!='\0';j++){
			if(metin[j]==i){
				sayac++;
			}
		}
		temp2[l]=i;
		temp[k]=sayac;
		k++;
		l++;
	}
	printf("\n");
	for(int z=0;z<=58;z++){
		if(temp[z]==0) {continue;}
		if(temp[z]==58){continue;}
		printf("%c Harfi %d kez kullanilmistir.\n",temp2[z],temp[z]);
	}	
	getch();
	return 0;
}
