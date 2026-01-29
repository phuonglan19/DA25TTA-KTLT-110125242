#include<stdio.h>
int main()
{
	int a, b;
	int tong, hieu, tich;
	float thuong;
	
	//Nhap so nguyen a,b
	printf("Nhap vao so nguyen a= ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b= ");
	scanf("%d", &b);
	
	printf("\nGia tri a = %d", a);
	printf("\nGia tri b = %d", b);
	
	//Tinh tong
	tong=a+b;
	printf("\nTong a+b = %d", tong);
	
	hieu=a-b;
	printf("\nHieu a-b = %d", hieu);
	
	tich=a*b;
	printf("\nTich a*b = %d", tich);
	
	thuong=a/b;
	printf("\nThuong a/b = %d", thuong);
	

	/*thuytrucdethuonghonphuonglan */
	return 0;
}





