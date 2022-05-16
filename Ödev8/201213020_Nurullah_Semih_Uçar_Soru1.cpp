#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
	FILE *fp;
	int id1;
	srand(time(NULL));
	
	fp=fopen("sayilar.txt","w");
	if(fp==NULL){
		printf("Dosya Acilamadi");
		getch();
		return 0;
	}
	
	for(int sayac=0;sayac<=100;sayac++){
		id1=rand()%1000;
		fprintf(fp,"%d\n",id1);
	}
	fclose(fp);
	

	getch();
	return 0;
}
