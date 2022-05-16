#include<stdio.h>
#include<conio.h>

#include<stdlib.h>

int main(){
	
	int adizi[10];
	int bdizi[10];
	int cdizi[20];
	int temp1[2],temp2[2];
	srand(time(NULL));
	for(int i=0;i<10;i++){
		adizi[i]=rand()%100;
		bdizi[i]=rand()%100;
	}
	printf("A[10] B[10]");
	for(int c=0;c<10;c++){
		printf("\n%d     %d\n",adizi[c],bdizi[c]);
	}

		for(int i=0;i<20;i++){
      		temp2[1]=temp2[0]=temp1[1]=temp1[0]=-99;
        	for(int j=0;j<10;j++){
            	if(adizi[j]>temp1[0]){
				temp1[0]=adizi[j];temp1[1]=j;
				}
            	if(bdizi[j]>temp2[0]){
				temp2[0]=bdizi[j];temp2[1]=j;
				} 
        } 
        	if (temp2[0]>temp1[0]){
			bdizi[temp2[1]]=-100; cdizi[i]=temp2[0];
			}
      		else{
				adizi[temp1[1]]=-100; cdizi[i]=temp1[0];
			}
        } 
	
	printf("\n");
    for(int i=0;i<20;i++) {
	printf("C[%d]=%d\n",i+1,cdizi[i]); 
	}

	
	getch ();
	return 0;
}
 
