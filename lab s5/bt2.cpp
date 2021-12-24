#include <stdio.h>
int main(){
	int a,b,u,t;
	do{
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	
	}while(a<=0 || b<=0);
	u=a;
	t=b;
	while(a!=b){
		if(a>b)
		a-=b;
		else
		b-=a;
	}
	printf("uoc chung lon nhat la: %d \n",a);
	printf("boi chung nho  nhat la: %d",(u*t)/a);
}
