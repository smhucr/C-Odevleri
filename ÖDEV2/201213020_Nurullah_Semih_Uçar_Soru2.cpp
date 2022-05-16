#include<stdio.h>
#include<conio.h>

int main(){
	
	int n,toplam;
	float ortalama;
	
	printf("Merhabalar Bu Programimiz Girdiginiz Sayiya Kadar Olan Cift Sayilarin Toplamini ve Ortalamasini Aliyor.\n");
	printf("\nLutfen Bir Tamsayi Giriniz : ");
	scanf("%d", &n);
	
	if(n >= 0){
		
	for(int i=0 ; i<=n ; i=i+2){
	
		toplam = toplam + i;
	}
	
	ortalama = toplam/(n/2);
	printf("\nToplami = %d", toplam);
	printf("\nOrtalamasi = %0.2f", ortalama);
	}
	else if(n < 0){
		for(int i=0 ; i>=n ; i=i-2){

			
			toplam = toplam + i;
		}
		ortalama = toplam/(-n/2);
		printf("\nToplami = %d", toplam);
		printf("\nOrtalamasi = %0.2f", ortalama);

	}

	getch();
	return 0;
}
