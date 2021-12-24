#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
    	printf("Nhap pt arr[%d]:",i);
    	scanf("%d",&arr[i]);
}
int x;
printf("Nhap x=",x);
scanf("%d",&x);
int flag = 0;
for( int i=0;i<n;i++){
	if(arr[i]==x){
		printf("x thuoc mang arr[n] %d\n",x);
		flag = 1;
		break;
	}
}if(flag == 0){
		printf("x khong thuoc mang arr[n]\n",x);
	}
}
