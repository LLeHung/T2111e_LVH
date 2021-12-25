void NhapMang(int arr[],int n){
	printf("nhap kich thuoc mang:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	printf("Nhap pt arr[%d]:",i);
	scanf("%d",&arr[i]);
}
int HienMang(int ary[],int n){
	for(int i=0;i<n;i++){
		printf("%d mang vua nhap la:",a[i]);
	}
}
void NghichDao(int ary[],int n){
	for(int i=0;i<=n/2;i++){
		int temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	printf("\n mang nghich dao la:");
	for(int i=0;i<n;i++);{
		printf("%d",a[i]);
	}
}
