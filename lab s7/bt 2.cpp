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
int sl=0;
int tong=0;
for(int i=0;i<n;i+=2){
	if(arr[i]%2!=0){
		tong+=arr[i];
		sl++;
}
}
float tcb=tong/sl;
printf("tong sole: %d",tcb);
}
