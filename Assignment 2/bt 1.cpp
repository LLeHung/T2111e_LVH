#include <stdio.h>
 
int main(){
    int n, tmp;
    printf("Nhap n:",n);
    scanf("%d", &n);
    int nd = 0;
    while(n > 0){
        tmp = n % 10;
        nd = nd * 10 + tmp;
        n = n / 10;
    }
    printf(" so nghich dao cua n la: %d", nd);
}
