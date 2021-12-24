#include <stdio.h>
int main(){
	int n;
     printf("Nhap n: ");
     scanf("%d",&n);
     int t=0;
     int a;
     
     for(;n!=0;){
     	a = n%10;
     	t += a;
     	n /= 10;
	 }
	 printf("tong cac chu so cua n la: %d",t);
}
