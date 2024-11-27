#include <stdio.h>

int main(){
	int array[5] = {4, 6, 7, 3, 5};
    for(int i = 0 ; i < sizeof(array)/sizeof(int); i++){
    	printf("%d ",array[i]);
	}
	
return 0;
}
