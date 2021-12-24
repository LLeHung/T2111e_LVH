#include <stdio.h>
int main(){
	int n;
     printf("Nhap n: ");
     scanf("%d",&n);
     int g=1;
     for(int i=1;i<=n;i++){
     	g *= i;
	 }
	 printf("giai thua cua n la: %d",g);
}
