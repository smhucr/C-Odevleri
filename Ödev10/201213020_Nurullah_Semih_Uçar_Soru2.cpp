#include<stdio.h>
#include<conio.h>



int summon(int n);
int toplam;
int main(){
	
	int sayi,z;
	printf("Bu Program Girilecek Sayiya Kadar Olan Pozitif Sayilari Topluyor.\n");
	printf("Lutfen Sayiyi Giriniz : ");
	scanf("%d",&sayi);
	check:
	if(sayi<=0){
		printf("Lutfen Pozitif Bir Tamsayi Giriniz : ");
		scanf("%d",&sayi);
		goto check;
	}
	
	z=summon(sayi);
	printf("%d",z);
	
	getch();
	return 0;
}
int summon(int n){
	toplam+=(n-1);
	if(n==1){
		return toplam;
	}
	else{
		return summon(n-1);
	}
}
