#include<stdio.h>

int main(){
	int arr[100];
	int currentLength,addlndex;
	printf("Nhap so phan tu cho mang: ");
	scanf("%d",&currentLength);
	if(currentLength<0 || currentLength>100){
		printf("So khong hop le.Hay nhap lai di");
		return 1;
	}
	printf("Nhap cac phan tu cho mang: \n");
	for(int i=0;i<currentLength;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("Cac phan tu truoc khi xoa la: \n");
	for(int i=0;i<currentLength;i++){
		printf("arr[%d]= %d\n",i,arr[i]);
	}
	printf("Nhap vi tri muon xoa(0 den %d): ",currentLength-1);
	scanf("%d",&addlndex);
	if(addlndex<0 || addlndex>100 ){
		printf("Vi tri khong hop le.");
	}
	for(int i=addlndex;i<currentLength;i++){
		arr[i]=arr[i+1];
	}
	currentLength--;
	printf("Cac phan tu sau khi xoa la: \n");
	for(int i=0;i<currentLength;i++){
		printf("arr[%d]= %d\n",i,arr[i]);
	}
	return 0;
}