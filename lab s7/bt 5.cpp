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
int minX = arr[0];
for(int i=0;i<n;i++){
	if(arr[i]>0){
		minX = arr[i];
		break;
	}
}
if(minX <=0){
	printf("mang toan so am \n");
}else{
	for(int i=0;i<n;i++){
		if(arr[i]> 0 && arr[i]< minX){
			minX= arr[i];
		}
	}
	printf("So duong nho nhat la: %d\n",minX);
}
}
