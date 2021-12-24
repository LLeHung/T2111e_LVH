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
int tong=0;
int sl=0;
for(int i=0;i<n;i++){
	if(arr[i]%2!=0){
		tong+=arr[i];
		sl++;
	}
}
if(count != 0){
	float tbc = (float)tong/sl;
printf("tbc so le trong n la: %f",tbc);
}else{
	printf("danhh sach khong co so le nao");
}
}
