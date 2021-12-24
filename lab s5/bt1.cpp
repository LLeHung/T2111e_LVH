#include <stdio.h>
int main(){
	int n;
	do{
	printf("Nhap n=");
	scanf("%d",&n);
	if(n<=0){
		printf("Nhap lai n=");
	}
	}while(n<=0);
	int t = 0;
	for(int i=1;i<=n;i++){
		if(n % i == 0){
			t += i;
		}
	}
	printf("tong uoc cua n la: %d",t);
}
