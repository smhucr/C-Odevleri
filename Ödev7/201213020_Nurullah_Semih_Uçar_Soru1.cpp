#include<stdio.h>
#include<conio.h>

int main(){

	int sayi;
	int sayac=0;
	int kontrol=0;
	int asal[10];
	int dogru=1;
	printf("\nLutfen Bir Sayi Giriniz : ");
	scanf("%d",&sayi);
	
	while(1){
		if(sayi<1){
			printf("\nLutfen Tekrar Bir Sayi Giriniz : ");
			scanf("%d",&sayi);
		}
		else break;
	}
	while(sayac<11){
		sayi++;
		kontrol=0;
		
		for(int i=2;i<sayi;i++){
			if(sayi%i == 0){
				kontrol=1;
			}
		}
		if(kontrol){
			continue;
		}
		asal[sayac]=sayi;
		sayac++;
	}
	printf("\t\t\t\n\n---------------------------------------\n");
	for(int j=0;j<10;j++){
		printf("\t\t\t\n%d. Asal sayi = %d ",j+1,asal[j]);
	}
	printf("\t\t\t\n\n---------------------------------------");
	getch();
	return 0;
}
