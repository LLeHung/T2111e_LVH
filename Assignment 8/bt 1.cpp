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
int flag,i=0,j=0;
for( int i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
			if(arr[j+1]<arr[j]){
				flag = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=flag;
	}
	}
}
int lo=0, hi=n-1, k=0, mid;
	while(lo<=hi){
		mid=(lo+hi)/2;
		if(x==arr[mid]){
			k=1;
			break;
		}else if(x>arr[mid]){
			lo=mid+1;
		}else if(x<arr[mid]){
			hi=mid-1;
		}
	}
	if(k==1||x<arr[mid]){
		printf("gia tri gan x la:\t %d",arr[mid-1]);
	}else if(x>arr[mid]){
		printf("gia tri gan x la:\t %d",arr[mid]);
	}
}
