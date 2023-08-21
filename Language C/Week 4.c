#include <stdio.h>
#include <math.h>

int main(){
printf("Ex 1:");
	// So chinh phuong la so tu nhien co can bac hai la mot so tu nhien
	
	int i=1, so_nguyen;
	printf("\nNhap so nguyen: ");
	scanf("%d", &so_nguyen);
	while(so_nguyen < 0)
	{
		printf("So da nhap khong hop le");
	}
	while(i>0)
	{
		if(pow(i,2)==so_nguyen)
		{
			printf("So da nhap: %d la mot so chinh phuong", so_nguyen); 
			break;
		}	
		if(pow(i,2)>so_nguyen)
		{
			printf("So da nhap: %d khong phai la mot so chinh phuong", so_nguyen); 
			break;
		}
	i++;		
	}



printf("\nEx 2:");
	// a: chu so hang tram
	// b: chu so hang chuc
	// c: chu so hang don vi
	// n: so thoa man dieu kien co tong so lap phuong cac chu so bang chinh so do
    
	int gia_tri_bat_dau, gia_tri_ket_thuc;
	printf("\nNhap gia tri bat dau khoang: ");
	scanf("%d", &gia_tri_bat_dau);
	
	printf("Nhap gia tri ket thuc khoang: ");
	scanf("%d", &gia_tri_ket_thuc);
    
    
	int a, b, c, n;
    printf("Trong khoang tu %d den %d, nhung so thoa man dieu kien la: ", gia_tri_bat_dau, gia_tri_ket_thuc);
	for( n = gia_tri_bat_dau ; n < gia_tri_ket_thuc ; n++)
    {
        c = n % 10;
        b = (n / 10) % 10;
        a = (n / 100);
        
		if(pow(a,3)+pow(b,3)+pow(c,3)==n)
        {
            printf("%d ", n);
        }
	}
		


printf("\nEx 3:");
	int so_dong;
	printf("\nSo dong: ");
	scanf("%d", &so_dong);
	
	int hang, khoang_trang, dau_sao;
	for( hang = so_dong ; hang >= 1 ; hang--)
	{
		for( khoang_trang = so_dong ; khoang_trang > hang ; khoang_trang-- )
		{
			printf("  ");
		}
		for( dau_sao = 1 ; dau_sao < (2*hang) ; dau_sao++ )
		{
			printf("* ");
		}
		printf("\n");
	}



printf("\nEx 4:");
	
	
	
return 0;	
}
