#include<stdio.h>

int main(){
	int arr[100];
	int addlndex,currentLength=0,newvalue,n,m;
	int exit=1;
	while(exit==1){
		printf("Menu\n\n\n");
		printf("1.Nhap vao mang\n");
		printf("2.Hien thi mang\n");
		printf("3.Them phan tu\n");
		printf("4.Sua phan tu\n");
		printf("5.Xoa phan tu\n");
		printf("6.Thoat\n");
		printf("Lua chon cua ban: ");
		  scanf("%d",&m);
		switch(m){
			case 1:
				printf("Nhap so phan tu cho mang: ");
				scanf("%d",&n);
				if(currentLength<0 || currentLength>100){
					printf("So khong hop le.");
					return 1;
				}
				currentLength=n;
				printf("Nhap cac phan tu cho mang: \n");
				for(int i=0;i<currentLength;i++){
					printf("Phan tu thu %d: ", i + 1);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				for(int i=0;i<currentLength;i++){
					printf("arr[%d]= %d\n",i,arr[i]);
				}
				break;
			case 3:
				if(currentLength==0){
					return 1;
				}
				printf("cac phan tu trong mang truoc khi them la: \n");
	            for(int i=0;i<currentLength;i++){
		        printf("arr[%d]= %d\n",i,arr[i]);
	            }
				printf("Nhap vi tri muon them(0 den %d): ",currentLength-1);
				scanf("%d",&addlndex);
				if(addlndex<0 || addlndex>100 || addlndex>currentLength-1){
					printf("Vi tri khong hop le.");
				}
				printf("Nhap phan tu muon them: ");
				scanf("%d",&newvalue);
				if(addlndex==currentLength-1){
					arr[addlndex]=newvalue;
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
							printf("\n arr[%d]= %d\n",i,arr[i]);
						}	
				break;
			case 4:
				if(currentLength==0){
					return 1;
				}
				int addlndex;
				printf("Mang truoc khi sua la: \n");
				for(int i=0;i<currentLength;i++){
				printf("arr[%d]= %d\n",i,arr[i]);
				}
				printf("Nhap vi tri can sua(0 den %d): ",currentLength-1);
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
				for(int i=0;i<currentLength;i++){
				printf("arr[%d]= %d\n",i,arr[i]);
				}
				break;
			case 5:
				if(currentLength==0){
					return 1;
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
				break;
			case 6:
				printf("Chao tam biet.Hen gap lai");
				exit=0;
				break;
			default:
				printf("So nhap khong hop le\n");
				break;
		}
	}
	return 0;
}