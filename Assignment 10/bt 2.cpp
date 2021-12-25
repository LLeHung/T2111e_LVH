#include <stdio.h>
#include <string.h>
 
int main () {
	int n;
	printf("Nhap kich thuoc chuoi:");
	scanf("%d",&n);
	char ch[n];
	int i,j;
	char temp;
	
	for(int i=0;i<n;i++){
    	printf("Nhap chuoi [%d]:",i);
    	scanf("%s",ch);
    int size = strlen(ch);
	printf("Chuoi truoc khi sap xep: %s \n", ch);	
   for (i = 0; i < size-1; i++) {
      for (j = i+1; j < size; j++) {
         if (ch[i] > ch[j]) {
            temp = ch[i];
            ch[i] = ch[j];
            ch[j] = temp;
         }
      }
   }
    
   printf("\nChuoi sau khi sap xep %s \n", ch);
   return 0;
}
}
