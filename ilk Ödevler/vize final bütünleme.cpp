#include<stdio.h>
#include<conio.h>

int main(){
	
	int vize,final,butunleme;
	float gecernot;
	
	printf("Merhabalar Bu Programimiz Aldiginiz Sinav Notlarina Gore Gecip Gecmediginizi Gosteriyor.\n");
	printf("\nLutfen Vize Notunuzu Giriniz : ");
	scanf("%d", &vize);
	
	bas:		
	if(vize>100 || vize<0){
		printf("Lutfen Gecerli Bir Vize Notu Giriniz : ");
		scanf("%d",&vize);
		goto bas;
	}
	
	printf("\nLutfen Final Notunuzu Giriniz : ");
	scanf("%d", &final);
	
	basf:
	if(final>100 || final<0){
		printf("Lutfen Gecerli Bir Final Notu Giriniz : ");
		scanf("%d",&final);
		goto basf;
	}
	gecernot = 0.6*final + 0.4*vize;
	
	if(gecernot >= 60 ){
		printf("\nNot Ortalamaniz = %0.2f\n", gecernot);
		printf("\nGectiniz.");
	}
	else{
		printf("\nLutfen Butunleme Notunuzu Giriniz : ");
		scanf("%d", &butunleme);
		bas2 :
			if(butunleme>100 || butunleme<0){
				printf("Lutfen Gecerli Bir Butunleme Notu Giriniz : ");
				scanf("%d",&butunleme);
				goto bas2;
	}
		gecernot = 0.6*butunleme + 0.4*vize;
		if(gecernot >= 60){
			printf("\nNot Ortalamaniz = %0.2f\n", gecernot);
			printf("\nGectiniz.");	
			}
		else{
			printf("\nNot Ortalamaniz = %0.2f\n", gecernot);
			printf("\nKaldiniz.");
		}
	}
	getch();
	return 0;
}
