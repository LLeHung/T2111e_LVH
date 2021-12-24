#include <stdio.h>
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	int i=1;
	while(i<n){
		int j=1,count=0;
		while(j<=i){
		if(i%j==0){
			count++;
		}
		j++;
		}
		if(count==2){
			printf("so nguyen to: %d\n",i);
		}
	i++;
}
}
