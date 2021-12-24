#include <stdio.h>
int main(){
	int n;
     printf("Nhap n: ");
     scanf("%d",&n);
     
     int t=0;
     for(int i=1;i<n;i++){
        if(n%i==0)
        	t=t+i;
		}
			if(t==n && t != 0)
			printf("so hoan hao",t);
			else
			printf("khong phai so hoan hao",t);
 }
