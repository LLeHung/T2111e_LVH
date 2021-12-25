#include <stdio.h>
#include <string.h>
int main(){
	char ch[50];
	printf("Nhap chuoi:");
	scanf("%s",ch);
	int u,e,o,a,i,d;
	u=e=o=a=i=d=0;
	for(int x=0;x<strlen(ch);x++){
		switch(ch[x]){
			case 'u': u++;break;
			case 'e': e++;break;
			case 'o': o++;break;
			case 'a': a++;break;
			case 'i': i++;break;
			default :'d';d++;break;
		}
	}
	printf("so luong u la: %d\n",u);
	printf("so luong e la: %d\n",e);
	printf("so luong o la: %d\n",o);
	printf("so luong a la: %d\n",a);
	printf("so luong i la: %d\n",i);
	printf("so luong dem la: %d\n",d);
}
