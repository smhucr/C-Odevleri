#include<stdio.h>
#include<conio.h>

int ebobfonk(int n, int r);

int main(){
	
	int sayi1,sayi2;
	int z;
	printf("2 Tane Sayi Giriniz : ");
	scanf("%d",&sayi1);
	check:
	if(sayi1<=0){
		printf("Lutfen Pozitif Bir Tamsayi Giriniz : ");
		scanf("%d",&sayi1);
		goto check;
	}
	printf("2. Sayiyi Giriniz : ");
	scanf("%d",&sayi2);
	if(sayi2<=0){
		printf("Lutfen Pozitif Bir Tamsayi Giriniz : ");
		scanf("%d",&sayi2);
		goto check;
	}
	
	z=ebobfonk(sayi1,sayi2);
	printf("%d",z);
	
	getch();
	return 0;
}
int ebobfonk(int n, int r){
	int x,y;
	if(n>r){
		x=n/r;
		y=n%r;
		if(y==0){
			return r;
		}
		else{
			return ebobfonk(r, y);
		}
	}
	else if(n<r){
		x=r/n;
		y=r%n;
		if(y==0){
			return n;
		}
		else{
			return ebobfonk(n, y);
		}
	}
	
	
	
}
