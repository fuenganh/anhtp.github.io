#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define e 2.71828

double so_tien_tra_hang_thang(double P, double i, double n){
	double so_tien_tra_hang_thang=(i*P)/(1-pow(1+i,-n));
	return so_tien_tra_hang_thang;
}

double c_at_depth(double l){
	double c_at_depth=(10*l)+20;
	return c_at_depth;
}
 
double to_fahrenheit(double c){
	double to_fahrenheit=(1.8*c)+32;
	return to_fahrenheit;
}

double tong_cai_bat_tay(double n){
	double tong_cai_bat_tay=(sqrt(2*pi*n)*pow(n/e,n))/(2*sqrt(2*pi*(n-2))*pow((n-2)/e,n-2));
	return tong_cai_bat_tay;
}

int main(){
printf("Ex 1:");
	double P, i, n;
 	printf("\nNhap Gia xe P= ");
 	scanf("%lf", &P);
 	
 	printf("Nhap Lai suat hang thang i= ");
 	scanf("%lf", &i);
 	
 	printf("Nhap So thang hoan tat thanh toan n= ");
 	scanf("%lf", &n);
 	
 	double Tong=so_tien_tra_hang_thang(P, i, n);
 	printf("So tien tra hang thang= %.2lf", Tong);
 
 	
printf("\n\nEx 2:");
	double l;
	printf("\nNhap Do sau (km)= ");
	scanf("%lf", &l);
	
	int do_C=c_at_depth(l);
	printf("Do C= %d", do_C);
	
	double do_F=to_fahrenheit(do_C);
	printf("\nDo F= %.1lf", do_F);

	
printf("\n\nEx 3:");
	int a;
	printf("\nNhap So nguoi trong phong= ");
	scanf("%d", &a);
	
	int tong=tong_cai_bat_tay(a);
	printf("So cai bat tay la %d", tong);
	
return 0;
 	
 }
