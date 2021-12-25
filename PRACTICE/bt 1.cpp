#include<stdio.h>
int main()
{
  int n;
  float S;
  S = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);
    if(n <= 0){
      printf(" error");
    }else{
    	for(int i = 1; i <= n; i++){
    		S = S + 1.0 / i;
    	printf("\nTong 1 + 1/2 + ... + 1/%d là: %.2f",n, S);	
	}
  }
}
