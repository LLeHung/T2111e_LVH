#include <stdio.h>

int main() {
	int n;
	printf("Nhap n > 0: ");
	scanf("%d", &n);
	if(n <= 0) {
		printf("Nhap n > 0\n");
	} else {
		int i;
		printf("Cac so chan: \n");
		for(i = 0; i < n; i += 2) {
			printf("%d, ", i);
		}
		
	}
	
}
