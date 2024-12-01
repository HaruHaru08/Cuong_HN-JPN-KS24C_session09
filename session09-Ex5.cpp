#include <stdio.h>

int main() {
    int arr[100]; 
    int n = 0;    
    int m,exit=1; 
	while(exit==1){
        printf("MENU\n\n\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &m);
        switch (m) {
            case 1: {
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("Phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                printf("Gia tri cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                int sum = 0;
                printf("Cac phan tu chan: ");
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
                break;
            }
            case 4: {
                if (n == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                int max = arr[0], min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                break;
            }
            case 5: {
                int x, count = 0;
                printf("Nhap vao mot so: ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == x) {
                        count++;
                    }
                }
                printf("So %d xuat hien %d lan trong mang.\n", x, count);
                break;
            }
            case 6: {
            printf("Chao tam biet.Hen gap lai");
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
