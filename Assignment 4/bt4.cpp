#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int i=1,count=0;
	while(i<=n){
		if(n%i==0){
			count++;
		}else{
		}
		i++;
	}
	if(count==2){
		printf("n la so nguyen to");
	}else{
		printf("n khong la so nguyen to");
	}
}
