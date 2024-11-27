#include <stdio.h>

int main(){
	int n,a[100];
		printf("nhap vao so phan tu cua mang: ");
		scanf("%d", &n);
    for(int i = 0 ; i < n ; i++ )
    {
    	scanf("%d",&a[i]);
    	int t=100;
    	for (int j=2; j<a[i];j++){
    		if(a[i] % j == 0){
    			t=1;
			}
		}
		if(t==100){
			printf("%d ",a[i]);
		}
        
}

}
