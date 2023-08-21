#include <stdio.h>

int main(){
	
printf("Ex1:\n");
		
	double a;
	printf("Nhap so do cua dong ho khi bat dau quang duong: ");
	scanf("%lf", &a);

	double b;
	printf("Nhap so do cua dong ho khi quang duong ket thuc: ");
	scanf("%lf", &b);
	
	double quang_duong=b-a;
	printf("Ban da di mot quang duong dai %.1lf km", quang_duong);

	double gia_ve=quang_duong*1.50;
	printf("\nVoi $1.50 moi km, gia ve cua ban la $ %.2lf", gia_ve);

printf("\nEx2:\n");
    
    float Dollar;
    printf("Dollar= ");
    scanf("%f", &Dollar);
        
	float Pound=Dollar*0.75;
    printf("Pound= %.2f", Pound); 
		
printf("\nEx3:\n");
	
    int c;
    printf("Chieu dai cua san= ");
    scanf("%d", &c);
        
    int d;
    printf("Chieu rong cua san= ");
    scanf("%d", &d);
        
    int dien_tich_san=c*d;
    printf("Dien tich san= %d met vuong", dien_tich_san);
        
    int e;
    printf("\nChieu dai cua ngoi nha= ");
    scanf("%d", &e);
        
    int f;
    printf("Chieu rong cua ngoi nha= ");
    scanf("%d", &f);
        
    int dien_tich_ngoi_nha=e*f;
    printf("Dien tich cua ngoi nha= %d met vuong", dien_tich_ngoi_nha);
        
    int dien_tich_co_trong_san=dien_tich_san-dien_tich_ngoi_nha;
    printf("\nDien tich toan bo co trong san (khong bao gom dien tich nha)= %d met vuong",dien_tich_co_trong_san);
        
    double thoi_gian_cat_het_co=dien_tich_co_trong_san/0.5;
    printf("\nThoi gian can thiet de cat toan bo co trong san (khong bao gom dien tich nha)= %.2f giay", thoi_gian_cat_het_co);
        

return 0;
	
}
	
