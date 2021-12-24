#include <stdio.h>
int main() {
  
  int n, sum = 0;
  
  printf("\nNhap n: ");
  scanf("%d", &n);
  
  for(int i = 1; i < n; i +=2){
   
    sum = sum + i;
  }
  
  printf("\nTong các so le là: %d", sum);

}
