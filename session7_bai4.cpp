#include <stdio.h>

int main(){
	int n, a[6];
		printf("so phan tu n: ");
		scanf("%d", &n);
	for(int i =0 ; i < n ; i++){
		printf("phan tu  trong mang la: ");
		scanf("%d", &a[i]);
	}
	for(int f = 0; f < n ; f++){
		printf("a[%d] = %d\n",f+1,a[f]);
	}
	
return 0;
}
