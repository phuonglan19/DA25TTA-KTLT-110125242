# DA25TTA-KTLT-110125242
#include<stdio.h>

int main()
{
	int a , b;
	int tong, hieu, tich;
	float thuong;

    printf("Nhap vao so nguyen a=");
	scanf("%d" , &a);
	printf("Nhap vao so nguyen b=");
	scanf("%d" , &b);
	
	printf("\nGia tri a= %d", a);
	printf("\nGia tri b= %d", b);
	
	//Tinh tong
    tong=a+b;
	printf("\nTong a+b = %d", tong);
	
	//Tinh hieu
	hieu=a-b;
	printf("\nTong a-b = %d", hieu);
	
	//Tinh tich
	tich=a*b;
	printf("\nTong a*b = %d", tich);
	
	//Tinh thuong
	thuong=a/b;
	printf("\nTong a/b = %d", thuong);
	
	return 0;
}
