#include<stdio.h>

int main(){
	// khai bao bien
	int n, vitri=0;
	int value;
	int choice;
	int arr[100][100];
	int tich=1;
	
	
	// Cho hien thi MENu va lap lai
	do{
		printf("\n              MENU            \n");
		printf(" 1. Nhap kich co va gia tri cac phan tu trong mang\n");
		printf(" 2. In ra cac gia tri cua mang theo ma tran\n");
		printf(" 3. In cac phan tu nam tren duong bien va tinh tich\n");
		printf(" 4. In ra cac phan tu nam tren duong cheo chinh\n");
		printf(" 5. In ra cac phan tu cua duong cheo phu\n");
		printf(" 6. Sap xep duong cheo chinh theo thu tu tang dan \n");
		printf(" 7. Tim kiem mot phan tu trong mang va in phan tu do ra \n");
		printf(" 8. Thoat chuong trinh\n");
		printf("Lua chon cua ban (1-8):  ");
		scanf("%d", &choice);
		
		// Bat dau vao lua chon cua nguoi dung
		switch(choice){
			case 1:
				printf("Ban hay nhap vao kich co cua mang:  " );
				scanf("%d", &n);
				if(n < 0){
					printf("Kich co khong hop le.");
				}else{
					printf("Ban hay nhap cac phan tu cho mang:\n ");
				for(int i=0; i<n; i++){
					for(int j=0; j<n; j++){
						printf("Phan tu  [%d][%d] cua mang la: ", i, j);
						scanf("%d", &arr[i][j]);
					   }
				    }
				}
				break;
			case 2:
				if(n==0){
					printf("Mang dang rong. Ban hay nhap phan tu cho mang.");
				}else{
					printf("Mang ban vua nhap do la: \n");
				for(int i=0; i< n; i++){
					for(int j=0; j<n; j++){
						printf("%d\t", arr[i][j]);
					   }
				     	printf("\n");
				    }
				}
				
				break;
			case 3:
				printf("Nhung phan tu nam tren duong bien la: ");
				for(int i=0; i<n; i++){
					for(int j=0; j<n; j++){
						if(i==0 || i== n-1 || j==0 || j == n-1){
							printf("   %d   ", arr[i][j]);
							tich*=arr[i][j];
						}
					}
				}
				printf("\nTich cua cac phan tu duong bien la: %d", tich);
				
				break;
			case 4:
				printf("\nDuong cheo chinh cua mang la: ");
				for(int i=0; i< n; i++){
					printf("  %d   ", arr[i][i]);
				}
				printf("\n");
				
				break;
			case 5:
				printf("\nDuong cheo phu cua mang la: ");
				for(int i=0; i< n; i++){
					printf("  %d   ", arr[i][n-1-i]);
				}
				printf("\n");
				break;
			case 6:
				
				printf("Duong cheo chinh cua mang ban dau la: ");
				for(int i= 0; i<n; i++){
					printf("   %d    ", arr[i][i]);
				}
				printf("\n");
				for(int i=0; i<n; i++){
					for(int j=i+1; j<n; j++){
						if(arr[i][i]> arr[j][j]){
							int temp = arr[i][i];
							arr[i][i] = arr[j][j];
							arr[j][j] = temp;
						}
					}
				}
					printf("mang sau khi sap xep la: ");
					for(int i=0; i< n; i++){
						printf("  %d   ", arr[i][i]);
					}
				break;
			case 7:
				printf("Ban hay nhap vao gia tri phan tu ma ban muon tim: ");
				scanf("%d", &value);
				for(int i=0; i<n; i++){
					for(int j=0; j<n; j++){
						if(arr[i][j]== value){
							printf("Phan tu %d duoc tim thay o vi tri [%d][%d]", value, i, j);
							vitri=1;
						}
						if(vitri==1){
							break;
						}
					}
				}
				if(vitri==0){
					printf("Phan tu khong co trong mang.");
				}
				
				break;
			case 8:
				return 0;
			default:
				printf("Loi ban hay thu lai");
				
				
				
				
		}
	
		
		
	}while(choice!=8);
	return 0;
}
