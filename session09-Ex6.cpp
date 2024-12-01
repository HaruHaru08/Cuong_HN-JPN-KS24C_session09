#include <stdio.h>

int main(){
    int arr[100][100]; 
    int n=0,m=0;
    int choice; 
    int exit=1;
    while(exit==1){
		printf("\nMENU\n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In cac phan tu le va tinh tong\n");
		printf("4. In cac phan tu nam tren duong bien va tinh tich\n");
		printf("5. In cac phan tu nam tren duong cheo chinh\n");
		printf("6. In cac phan tu nam tren duong cheo phu\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
        switch (choice) {
            case 1: {
                printf("Nhap so hang: ");
                scanf("%d", &n);
                printf("Nhap so cot: ");
                scanf("%d", &m);

                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i<n; i++) {
                    for (int j = 0; j<m; j++) {
                        printf("arr[%d][%d]: ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            }
            case 2: {
                printf("Ma tran la:\n");
                for (int i = 0; i<n; i++) {
                    for (int j = 0; j<m; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                int sum = 0; 
                printf("Cac phan tu le: ");
                for (int i = 0; i<n; i++) {
                    for (int j = 0; j<m; j++) {
                        if (arr[i][j] % 2 != 0) { 
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le la: %d\n",sum);
                break;
            }
            case 4: {
                int multiplication= 1; 
                printf("Cac phan tu tren duong bien: ");
                for (int i = 0; i<n; i++) {
                    for (int j = 0; j<m; j++) {
                        if (i==0 || i==n - 1 || j==0 || j==m-1) { 
                            printf("%d ", arr[i][j]);
                           multiplication*= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n",multiplication);
                break;
            }
            case 5: {
                if (n!=m) {
                    printf("Khong phai ma tran vuong, khong có duong cheo chinh.\n");
                } else {
                    printf("Cac phan tu tren duong cheo chinh la: ");
                    for (int i = 0; i<n; i++) {
                        printf("%d ", arr[i][i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 6: {
                if (n!=m) {
                    printf("Khong phai ma tran vuong, khong có duong cheo phu.\n");
                } else {
                    printf("Cac phan tu tren duong cheo phu: ");
                    for (int i = 0; i<n; i++) {
                        printf("%d ", arr[i][n - i - 1]);
                    }
                    printf("\n");
                }
                break;
            }
            case 7: {
                printf("Chao tam biet.Hen gap lai\n");
                exit=0;
                break;
            }
            default: {
                printf("So nhap khong hop le\n");
				break;
            }
        }
    }
    return 0;
}
