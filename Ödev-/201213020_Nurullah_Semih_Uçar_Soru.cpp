#include<stdio.h>
#include<conio.h>

int main(){
	
	int tam[20];
	int toplam=0;
	int s,en,gecici;
	float bolum;
	printf("Merhaba! Bu Programimiz Girdiginiz 20 Tam Sayininin Cift Olanlarini En Buyuk Sayiya Boler.\n");
	bas:
	for(int i=0;i<20;i++){
		s=i+1;
		printf("\nLutfen %d. Sayiyi Giriniz : ",s);
		scanf("%d",&tam[i]);	
		if(tam[i]%2==0){
			toplam += tam[i];
		}	
	}
	for(int j=0;j<20;j++){
		for(int m=1;m<20;m++){
			if(tam[m]<tam[m-1]){
				gecici = tam[m-1];
				tam[m-1]=tam[m];
				tam[m]=gecici;
			}
			en=tam[19];
		}
	}
	if(en==0){
		printf("\nEn Buyuk Sayiniz 0 Olamaz Aksi Taktirde Tanimsizlik ya da Belirsizlik Olusur\n");
		printf("\nLutfen En Bastan Tekrar Sayilari Giriniz\n");
		printf("\nEn Buyuk Sayinizin 0 Olmamasina Dikkat Ediniz\n");
		goto bas;
	}
	else{
		bolum = (float)toplam/(float)en;
		printf("Cift Sayilarin En Buyuk Sayiya Bolumu %.4f 'dir",bolum);
	}
	
	
	
	
	
	
	getch ();
	return 0;
}
