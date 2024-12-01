#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cho mang: ");
	scanf("%d",&n);
	if(n<0){
		printf("So khong hop le.Hay nhap lai di");
		return 1;
	}
	int arr[n];
	printf("Nhap cac phan tu cho mang : \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("Mang truoc khi sua la: \n");
		for(int i=0;i<n;i++){
		printf("arr[%d]= %d\n",i,arr[i]);
		
		}
		int addlndex;
		printf("Nhap vi tri can sua: ");
		scanf("%d",&addlndex);
		if(addlndex>n-1){
			printf("Vi tri khong hop le.");
			return 1;
		}
		int newvalue;
		printf("Nhap thay the vao: ");
		scanf("%d",&newvalue);
		arr[addlndex]=newvalue;
		printf("Mang sau khi sua la: \n");
			for(int i=0;i<n;i++){
		printf("arr[%d]= %d\n",i,arr[i]);
		
		}
		return 0;
}