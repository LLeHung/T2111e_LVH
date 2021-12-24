#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		int C = a+b+c;
		float p = C/2;
		float s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("day la tam giac co chu vi: %d \n",C);
		printf("dien tich tam giac la: %f",s);
	}else{
		printf("day khong phai 3 canh tam giac");
	}
	}
