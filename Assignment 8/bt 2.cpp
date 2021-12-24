#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		int flag;
    	do{
    			flag = 0;
		printf("Nhap pt arr[%d]:",i);
    	scanf("%d",&arr[i]);
    
    	for(int j=0;j<=i-1;j++){
    		if(arr[j] == arr[i]){
    			flag = 1;
    			break;
		}
			}
		}while(flag==1);
}
printf("mang sau khi nhap;\n");
for(int i=0;i<n;i++){
	printf("%5d",arr[i]);
}
}
