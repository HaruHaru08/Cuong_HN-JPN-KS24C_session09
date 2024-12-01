#include<stdio.h>

int main(){
	int arr[100];
	int currentLength,addlndex,newvalue;
	printf("Nhap so phan tu muon nhap: ");
	scanf("%d",&currentLength);
	if(currentLength<0 || currentLength>100){
		printf("So khong hop le,Hay nhap lai di.");
		return 1;
	}
	for(int i=0;i<currentLength;i++){
		printf("\nNhap phan tu thu %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("cac phan tu trong mang truoc khi them la: \n");
	for(int i=0;i<currentLength;i++){
		printf("arr[%d]= %d\n",i,arr[i]);
	}
	printf("\nNhap vi tri muon them phan tu(0 den %d): ",currentLength-1);
	scanf("%d",&addlndex);
	if(addlndex<0 || addlndex>100 || addlndex>currentLength-1){
		printf("Vi tri khong hop le.");
		return 1;
	}
	printf("\nNhap phan tu muon them vao: ");
	scanf("%d",&newvalue);
	if(addlndex==currentLength){
		arr[currentLength]= newvalue;
		currentLength++;
	}else{
		for(int i=currentLength;i>addlndex;i--){
			arr[i]=arr[i-1];
		}
			arr[addlndex]=newvalue;
			currentLength++;
	}
	printf("\nCac phan tu trong mang sau khi them phan tu la: ");
		for(int i=0;i<currentLength;i++){
		printf("\n arr[%d]= %d",i,arr[i]);
	}	
	return 0;
}