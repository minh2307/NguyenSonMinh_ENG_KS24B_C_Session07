#include <stdio.h>

int main(){
	int count = 0,array[5] = {2,3,5,3,6};
	for(int i = 0 ; i < sizeof(array)/sizeof(int); i++){
		if(i == 0){	
			printf("so chan trong mang la: ");
		}
		if(array[i] % 2 ==0){	
			printf("%d ",array[i]);
		 	count++;	
		}
		if(count == 0){
			printf("mang ko chua so chan");
		}
	
	}
}
