#include<stdio.h>
#include<conio.h>


int main(){
	
	
	FILE *fp;
	int id2;
	int dizi[100];
	int dizi2[100];
	int kontrol;
	int p=0;
	int sayac=0;
	fp=fopen("sayilar.txt","r");
	if(fp==NULL){
		printf("Dosya Acilamadi");
		getch();
		return 0;
	}
		
	for(id2=0;id2<100;id2++){
		fscanf(fp,"%d",&dizi[id2]);
	}	
	fclose(fp);

	for(int i=0;i<100;i++){
		kontrol=0;
		for(int j=2;j<dizi[i];j++){
			if(dizi[i]%j==0){
				kontrol=1;
			}
		}
		if(kontrol==0){
			dizi2[p]=dizi[i];
			p++;
		}
	}

	for(int k=0;dizi2[k]!='\0';k++){
		sayac++;	
	}
	
	fp=fopen("sayilar2.txt","w");
	if(fp==NULL){
		printf("Dosya Acilamadi");
		getch();
		return 0;
	}
	
	for(int z=0;z<sayac;z++){
		fprintf(fp,"%d\n",dizi2[z]);
	}
	fclose(fp);
	
	
	
	
	getch();
	return 0;
}
