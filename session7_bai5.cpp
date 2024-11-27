#include <stdio.h>

int main() {
    int a[5] = {2, 3, 6, 8, 1};
    int min = a[0], max = a[0]; 

    for (int i = 1; i < 5; i++) { 
        if (a[i] < min) {
            min = a[i]; 
        }
        if (a[i] > max) {
            max = a[i]; 
        }
    }

    printf("Phan tu be nhat trong mang la: %d\n", min);
    printf("Phan tu lon nhat trong mang la: %d", max);

    return 0;
}
