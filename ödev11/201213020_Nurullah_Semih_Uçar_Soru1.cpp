#include <stdio.h>
#include <locale.h>

unsigned short kaydir(unsigned short x, unsigned short y){
	return ((x<<y)|(x>>(16-y)));
}

int main(){
	int z,p;

	while(1){
		printf("Lutfen Tam Sayi ve kaydirmak istedi�iniz miktar� giriniz : ");
		scanf("%d %d", &z, &p);
		
		printf("Sonu�: %d\n", kaydir(z,p));
	}
	
	return 0;
}
