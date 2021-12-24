#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a=",a);
	scanf("%d",&a);
	printf("Nhap b=",b);
	scanf("%d",&b);
	printf("Nhap c=",c);
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("so nho nhat la: %d",a);
		}else{
			printf("so nho nhat la: %d",c);
		}
	}else{
		if(b<c){
			printf("so nho nhat la: %d",b);
		}else{
			printf("so nho nhat la: %d",c);
		}
	}
}
