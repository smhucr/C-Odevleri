#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int *ip, x, y=0;
	ip = (int*) malloc(sizeof(int));
	
	do{
		printf("Bir tam sayi giriniz : ");
		scanf("%d", &x);
		if(x>0 && x%3==0 && x%5==0){
	    	ip = (int*) realloc(ip, (y+1) * sizeof(int));
	    	*(ip+y) = x;
	    	printf("%d: %d\n", y+1, *(ip+y));
	    	y++;
		}else{
			printf("3 ve 5 e bolunemiyor .\n");
		}
	}while(x>0);
	
	ip = (int*) realloc(ip, (y+1) * sizeof(int));
	*(ip+y) = '\0';
	
	for(int i=0; *(ip+i)!= '\0'; i++){
		printf("\n%d| %d", i+1, *(ip+i));
	}
	return 0;
}
