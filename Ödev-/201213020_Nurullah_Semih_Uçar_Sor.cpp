#include<stdio.h>
#include<conio.h>

int main(){
	
	char dizi[5][5];

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		
			dizi[i][j] ='*';
			
		}
	}
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			
			dizi[i][j] ='?';

		}
	}	
	
	dizi[2][2]='#';
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%c   ",dizi[i][j]);
		}
		printf("\n\n");
	}
	
	
	getch();
	return 0;
}
