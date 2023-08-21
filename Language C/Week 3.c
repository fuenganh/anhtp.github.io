#include <stdio.h>
#include <math.h>

int main()
{
printf("Ex 1:");
	double a, b, c;
	printf("\nNhap a= ");
	scanf("%lf", &a);
	
	printf("Nhap b= ");
	scanf("%lf", &b);
	
	printf("Nhap c= ");
	scanf("%lf", &c);
	
	double max=a;
	if(max<b){
		max=b;
	}if(max<c){
		max=c;
	}	
	printf("Gia tri lon nhat la: %.2lf", max);
	printf("\nCac so lon nhat la: ");
	if(a==max) printf("a");
	if(b==max) printf(" b");
	if(c==max) printf(" c");
	

printf("\nEx 2:");	
	int t, n;
	printf("\nNhap thang= ");
	scanf("%d", &t);
	if(t>=1 && t<=12){
		switch(t)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang %d co 31 ngay", t);
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang %d co 30 ngay", t);
			break;
		case 2:
			printf("Nhap nam= ");
			scanf("%d", &n);
			if(n%400==0)
				printf("Thang %d nam %d co 29 ngay", t, n);
			else if(n%4==0 && n%100!=0)
				printf("Thang %d nam %d co 29 ngay", t, n);
			else
				printf("Thang %d nam %d co 28 ngay", t, n);
			break;	
		}
	}else{
		printf("Khong ton tai thang nay");
	} 


printf("\nEx 3: Bien luan phuong trinh bac hai ex^2+fx+g=0");
	float e, f, g; 
	printf("\nNhap e= ");
	scanf("%f", &e);
	
	printf("Nhap f= ");
	scanf("%f", &f);
	
	printf("Nhap g= ");
	scanf("%f", &g);
	
	if(e==0){
		if(f==0 && g!=0){
			printf("Phuong trinh vo nghiem"); 
		}else if(f==0 & g==0){
			printf("Phuong trinh vo so nghiem");
		}else{
			float x=-g/f;
			printf("Phuong trinh co nghiem x= %.1f", x);
		}	
	}else{
		float delta=(f*f)-(4*e*g);
		if(delta>0){
			float x1=(-f-sqrt(delta))/(2*e);
			float x2=(-f+sqrt(delta))/(2*e);
			printf("Phuong trinh co 2 nghiem: x1= %.1f va x2= %.1f", x1, x2);
		}else if(delta<0){
			printf("Phuong trinh vo nghiem");
		}else{
			float x=-f/(2*e);
			printf("Phuong trinh co 1 nghiem (kep): x= %.1f", x);
		}
	}	
	
printf("\nEx 4:");	
	int so;
	printf("Nhap vao so co 4 chu so: ");
	scanf("%d", &so);
	
	if(so>=1000 && so<=10000) 
	{
		int a1, a2, a3, a4;
		a1=so/1000;
		a2=(so/100)%10;
		a3=(so/10)%10;
		a4=(so%10);			
	
		switch(a1) // doc so hang nghin
		{
			case 1: printf("Mot nghin ");  break;
			case 2: printf("Hai nghin ");  break;
			case 3: printf("Ba nghin ");   break;
			case 4: printf("Bon nghin ");  break;
			case 5: printf("Nam nghin ");  break;
			case 6: printf("Sau nghin ");  break;
			case 7: printf("Bay nghin ");  break;
			case 8: printf("Tam nghin ");  break;
			case 9: printf("Chin nghin "); break;
		}
	
		switch(a2) // doc so hang tram
		{
			case 0: printf("khong tram "); break;
			case 1: printf("mot tram ");   break;
			case 2: printf("hai tram ");   break;
			case 3: printf("ba tram ");    break;
			case 4: printf("bon tram ");   break;
			case 5: printf("nam tram ");   break;
			case 6: printf("sau tram ");   break;
			case 7: printf("bay tram ");   break;
			case 8: printf("tam tram ");   break;
			case 9: printf("chin tram ");  break;
		}
		
		switch(a3) // doc so hang chuc
		{
			case 0: printf("linh ");       break;
			case 1: printf("muoi ");       break;
			case 2: printf("hai muoi ");   break;
			case 3: printf("ba muoi ");    break;
			case 4: printf("bon muoi ");   break;
			case 5: printf("nam muoi ");   break;
			case 6: printf("sau muoi ");   break;
			case 7: printf("bay muoi ");   break;
			case 8: printf("tam muoi ");   break;
			case 9: printf("chin muoi");   break;
		} 
		
		switch(a4) // doc so hang don vi
		{
			case 0: printf(""); 		   break;
			case 1: printf("mot"); 		   break;
			case 2: printf("hai"); 		   break;
			case 3: printf("ba");          break;
			case 4: printf("bon");         break;
			case 5: printf("lam");         break;
			case 6: printf("sau");         break;
			case 7: printf("bay");         break;
			case 8: printf("tam");         break;
			case 9: printf("chin");        break;
		}
		
	}else{
		printf("Nhap so khong hop le");
	}
	

return 0;
}
