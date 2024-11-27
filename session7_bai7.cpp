#include <stdio.h>

int main(){
	int a[100],n;
		printf("so phan tu cua mang la: ");
		scanf("%d",&n);
	for(int i =0; i < n ; i++){
		printf("nhap phan tu trong mang la so le a[%d] = ",i+1);
			scanf("%d",&a[i]);
    
	 while (a[i] % 2 == 0) {
            printf("Moi nhap lai a[%d] = ", i+1);
            scanf("%d", &a[i]);
	}
	}
	
	
		printf("mang duoc nhap lai la ");	    
	for(int i = 0; i < n ; i++){
		printf("a[%d] = %d\n",i++,a[i]);
	}
return 0;
}

