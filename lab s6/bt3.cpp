#include <stdio.h>
int main(){
	int n;
     printf("Nhap n: ");
     scanf("%d",&n);
     int t;
     int nd=0;
     while(n!=0){
     	t =n%10;
     	nd=nd*10+t;
     	n /= 10;
	 }
	 printf("so nghich dao cua n la: %d",nd);
}
