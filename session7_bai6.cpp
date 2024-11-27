#include <stdio.h>

int main(){
	int a[5] = {3,2,5,6,7};
	for(int i = 0; i < 5; i++){
		if(a[i] % 2 == 0){
			a[i] += 3;
			
		}else{
			a[i] += 2;
		}
    }
	for(int i = 0; i < 5; i++){
		printf("%d ",a[i]);
	}
	
	
return 0;
}
