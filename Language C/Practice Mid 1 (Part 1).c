#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Tao ham bool kiem tra so doi xung ex 3
bool Kiem_tra_so_doi_xung(int so_nguyen)
{
	// Dao nguoc gia tri cua so nguyen
	int so_dao_nguoc, so_tam_thoi;
	so_dao_nguoc=0;
	so_tam_thoi=so_nguyen;
		
	while(so_nguyen>0)
	{
		so_dao_nguoc=so_dao_nguoc*10+(so_nguyen%10);
		so_nguyen=so_nguyen/10;
	}		
	
	// Kiem tra so dao nguoc voi so nguyen ban dau
	if(so_dao_nguoc==so_tam_thoi)
	{
		return true; // true: so da nhap la so doi xung
	}
	else
	{
		return false; // false: so da nhap khong phai la so doi xung
	}
}
	

int main()
{
printf("Ex 1: ");
	// Buoc 1: Kiem tra do dai 3 canh co hop le hay khong ?
	int a, b, c;
	printf("\nBa canh lan luot la: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b>c || a+c>b || b+c>a)
	{
		// Buoc 2: Kiem tra do dai 3 canh tao thanh tam giac can/deu/vuong/vuong can/nhon hay khong ?
		if(a==b || b==c || c==a)
		{
			printf("Tam giac da nhap la tam giac can");
		}
		else if(a==b && b==c)
		{
			printf("Tam giac da nhap la tam giac deu");
		}
		else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
		{
			printf("Tam giac da nhap la tam giac vuong");
		}
		else if(a*a==b*b+c*c && b==c || b*b==a*a+c*c && a==c || c*c==a*a+b*b && a==b)
		{
			printf("Tam giac da nhap la tam giac vuong can");
		}
		else
		{
			printf("Tam giac da nhap la tam giac nhon");
		}
	}
	else
	{
		printf("Tam giac da nhap khong hop le");
	}
	
		
printf("\n\nEx 2: ");
	// Cho 2 so nguyen duong tim UCLN va BCNN cua 2 so nay
	                                                                                                                           
	int x1, x2, UCLN;
	printf("\nNhap so dau tien: ");
	scanf("%d", &x1);
	
	printf("Nhap so thu hai: ");
	scanf("%d", &x2);
	
	int x1_temp=x1, x2_temp=x2;
	if(x1_temp==0 || x2_temp==0)
	{
		UCLN=x1_temp+x2_temp;
	}
	else
	{
		while(x1_temp!=x2_temp)
		{
			if(x1_temp>x2_temp)
			{
				x1_temp=x1_temp-x2_temp;
			}
			else
			{
				x2_temp=x2_temp-x1_temp;
			}
		}
		UCLN=x1_temp;
	}
	printf("UCLN (%d; %d) = %d", x1, x2, UCLN);
	
	int BCNN;
	BCNN=(x1*x2)/UCLN;
	printf("\nBCNN (%d; %d) = %d", x1, x2, BCNN); 


printf("\n\nEx 3: ");
// Nhap vao 1 so nguyen, kiem tra so do co phai so doi xung khong ?
// Dinh nghia: So doi xung la doc tu trai qua phai hay tu phai qua trai deu ra ket qua nhu nhau	
// Su dung ham bool da tao de kiem tra so doi xung

	int so_nguyen;
	printf("\nNhap so nguyen: ");
	scanf("%d", &so_nguyen);
	
	int kiem_tra=Kiem_tra_so_doi_xung(so_nguyen);
	if(kiem_tra==true)
	{
		printf("So %d la mot so doi xung", so_nguyen);
	}
	else
	{
		printf("So %d khong phai la mot so doi xung", so_nguyen);
	}
	

printf("\n\nEx 4: ");
// Nhap vao 1 so, lap bang cuu chuong cua so do
	
	int m;
	printf("\nNhap so: ");
	scanf("%d", &m);
	
	int i; 
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n", m, i, m*i);
	}

	
return 0;	
}
