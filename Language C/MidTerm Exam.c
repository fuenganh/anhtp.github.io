#include <stdio.h>
#include <math.h>


int main()
{
printf("Ex 1: ");
	double toan, van, anh, ly, hoa, gdcd;
	printf("\nDiem 6 mon Toan, Van, Anh, Ly, Hoa, GDCD la: ");
	scanf("%lf %lf %lf %lf %lf %lf", &toan, &van, &anh, &ly, &hoa, &gdcd);
	
	double diem_trung_binh=(toan+van+anh+ly+hoa+gdcd)/6;
	if(diem_trung_binh>8.0 && anh>6.5 && ly>6.5 && hoa>6.5 && gdcd>6.5)
	{
		if(toan>8.0 || van>6.5)
		{
			printf("Hoc sinh dat danh hieu HSG");
		}
		else if(toan>6.5 || van>8.0)
		{
			printf("Hoc sinh dat danh hieu HSG");
		}
	}
	else if(diem_trung_binh<6.5)
	{
		printf("Hoc sinh dat danh hieu HSTB");
	}
	else
	{
		printf("Hoc sinh dat danh hieu HSTT");
	}
	
		
printf("\n\nEx 3: ");
	int n;
	printf("\nNhap so n: ");
	scanf("%d", &n);
	
	int i, tong;
	tong=0;
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			tong=tong+i;
		}
	}	
	printf("Tong cac so chan be hon n: %d", tong);


return 0;
}
