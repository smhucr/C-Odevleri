#include <stdio.h>
#include <locale.h>

unsigned short kaydir(unsigned short x, unsigned short y){
	return ((x<<y)|(x>>(16-y)));
}

int main(){
	int z,p;

	while(1){
		printf("Lutfen Tam Sayi ve kaydirmak istediðiniz miktarý giriniz : ");
		scanf("%d %d", &z, &p);
		
		printf("Sonuç: %d\n", kaydir(z,p));
	}
	
	return 0;
}
