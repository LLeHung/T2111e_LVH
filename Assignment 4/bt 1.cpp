#include<stdio.h>
int main()
{
  int n;
  float S;
  S = 0;
  do
  {
    printf("\nNhap n: ");
    scanf("%d", &n);
    if(n < 1)
    {
      printf("\n n phai lon hon hoac bang 1, nhap lai !");
    }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    S = S + 1.0 / i;
  }
  printf("\nTong 1 + 1/2 + ... + 1/%d là: %.2f",n, S);

}
