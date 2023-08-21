#include <math.h>
#include <stdio.h>

// tao ham kiem tra gia tri n trong day Fibonacci
int fibonacci(int x){
	if(x==0){
		return 0;
	}else if(x==1 || x==2){
		return 1;
	}else{
		return fibonacci(x-1)+fibonacci(x-2);
	}
}

int main()
{
	
printf("Ex 5: ");
	char ky_tu;
	printf("\nKy tu nhap vao: ");
	scanf("%c", &ky_tu);
	
	if(('a'<=ky_tu && ky_tu<='z') || ('A'<=ky_tu && ky_tu<='Z'))
	{
		switch(ky_tu)
		{
			{	
				case 'U': case 'E': case 'O': case 'A': case 'I':
				case 'u': case 'e': case 'o': case 'a': case 'i':
					printf("%c la mot nguyen am", ky_tu);
					break;
			}
				default:
					printf("%c la mot phu am", ky_tu);
					break;
		}
	}
	else if('0'<=ky_tu && ky_tu<='9')
	{
		printf("%c la mot so", ky_tu);
	}
	else
	{
		printf("%c la mot ky tu dac biet", ky_tu);
	}	
	
		
printf("\n\nEx 6: ");
	int so_nguyen, i;
	printf("\nNhap so nguyen: ");
	scanf("%d", &so_nguyen);
	
	printf("%d = ", so_nguyen);
	for(i=2;i<=so_nguyen;i++)
	{
		if(so_nguyen%i==0)
		{
			int so_mu=0;
			while(so_nguyen%i==0)
			{
				++so_mu;
				so_nguyen=so_nguyen/i;
			}
			printf("%d^%d", i, so_mu);
			if(so_nguyen!=1)
			{
				printf("*");	
			}
		}
	}
	if(so_nguyen!=1)
	{
		printf("%d^1", so_nguyen);
	}


printf("\n\nEx 7: ");
// Tom tat BANG GIA DIEN nhu sau:
// 0   <= x < 50		3.000/so dien		loai1
// 50  <= x < 150		4.000/so dien		loai2
// 150 <= x < 250		5.000/so dien		loai3
// 250 <= x				10.000/so dien		loai4

	int so_dien, tien_dien;
	int loai1=3000; 
	int loai2=4000; 
	int loai3=5000; 
	int loai4=10000;
	
	printf("\nNhap so dien: ");
	scanf("%d", &so_dien);
	
	if(so_dien<0){
		printf("Vui long nhap lai so dien hop le");
	}else if(0<=so_dien && so_dien<50){
		tien_dien=so_dien*loai1;
		printf("Tong gia tien: %d", tien_dien);
	}else if(50<=so_dien && so_dien<150){
		tien_dien=(loai1*50)+((so_dien-50)*loai2);
		printf("Tong gia tien: %d", tien_dien);
	}else if(150<=so_dien && so_dien<250){
		tien_dien=(loai1*50)+(loai2*100)+((so_dien-150)*loai3);
		printf("Tong gia tien: &d", tien_dien);
	}else if(so_dien>=250){
		tien_dien=(loai1*50)+(loai2*100)+(loai3*100)+((so_dien-250)*loai4);
		printf("Tong gia tien: %d", tien_dien);
	}
	
	
printf("\n\nEx 8: ");
	int n;
	do{
		printf("\nNhap so nguyen: ");
		scanf("%d", &n);
	}while(n<0);	
	printf("So thu %d trong day Fibonacci la: %d", n, fibonacci(n));


return 0;	
}
