#include <stdio.h>
#include <string.h>


//EX1
typedef struct {
	char ten[100];
	char gioitinh[5];
	double toan, van, anh;
	double GPA;
	int MSV, tuoi;
			
} infor;

void enter_infor(infor *ST)
{
	printf("\nNhap MA SINH VIEN (gom 4c/s): ");
	scanf("%d", &(*ST).MSV);
	getchar();
	 
	printf("Nhap Ho&Ten: ");
	fflush(stdin);
	fgets((*ST).ten, sizeof((*ST).ten), stdin);
	
	printf("Nhap GIOI TINH: ");
	fflush(stdin);
	fgets((*ST).gioitinh, sizeof((*ST).gioitinh), stdin);

	printf("Nhap TUOI: ");
	scanf("%d", &(*ST).tuoi);
	getchar();
	
	printf("Nhap DIEM TOAN: ");
	scanf("%lf", &(*ST).toan);
	getchar();
	
	printf("Nhap DIEM VAN: ");
	scanf("%lf", &(*ST).van);
	getchar();
	
	printf("Nhap DIEM ANH: ");
	scanf("%lf", &(*ST).anh);
	getchar();
}

void print_infor(infor ST)
{

}

//a. Them moi sinh vien vao danh sach sinh vien.
void add_new_infor()
{
	
}

//b. Hien thi danh sach sinh vien hien co. Thong tin moi sinh vien phai hien thi day du tren mot dong.
void print_full_infor()
{
	
}

//c. Sap xep danh sach sinh vien theo ten tu A - Z.
void sort_by_name()
{
	
}

//d. Sap xep danh sach sinh vien theo diem trung binh 3 mon giam dan.
void calculate_GPA(infor ST)
{

}

void sort_by_GPA()
{
	
}

//e. Tim sinh vien co ten duoc nhap vao tu ban phim.
void find_name()
{
	
}


// EX2
// a - phan thuc
// b - phan ao

typedef struct {

	double a;
	double b;

} soPhuc;

void nhapSoPhuc(soPhuc *SP)
{
	printf("\nNhap PHAN THUC: ");
	scanf("%lf", &(*SP).a);

	printf("Nhap PHAN AO: ");
	scanf("%lf", &(*SP).b);
	
	printf("\nSO PHUC vua nhap la: z = %.0lf + %.0lf.i\n", (*SP).a, (*SP).b);
}

soPhuc xuatSoPhuc(soPhuc SP)
{
	printf("z = %.2lf + %.2lf.i\n", SP.a, SP.b);
}

// Tinh tong
soPhuc tong(soPhuc SP1, soPhuc SP2)
{
	soPhuc SP3;
	SP3.a = SP1.a + SP2.a;
	SP3.b = SP1.b + SP2.b;
	
return SP3;
}

// Tinh hieu
soPhuc hieu(soPhuc SP1, soPhuc SP2)
{
	soPhuc SP3;
	SP3.a = SP1.a - SP2.a;
	SP3.b = SP1.b - SP2.b;

return SP3;
}

// Tinh tich
soPhuc tich(soPhuc SP1, soPhuc SP2)
{
	soPhuc SP3;
	SP3.a = (SP1.a * SP2.a) - (SP1.b * SP2.b);
	SP3.b = (SP1.a * SP2.b) + (SP1.b * SP2.a);

return SP3;
}

//Tinh thuong
soPhuc thuong(soPhuc SP1, soPhuc SP2)
{
	soPhuc SP3;
	SP3.a = (SP1.a * SP2.a + SP1.b * SP2.b) / (SP2.a * SP2.a + SP2.b * SP2.b);
	SP3.b = (SP2.a * SP1.b - SP2.b * SP1.a) / (SP2.a * SP2.a + SP2.b * SP2.b);

return SP3;
}


int main()
{
printf("Ex1:\n");
	//f. Viet menu cho phep nguoi dung thuc hien cac tuy chon. Trong do co chuc nang thoat chuong trinh.
	
	int number;
	
	printf("---------------------------------------------------------------------------------\n\n");
	printf("|				DU LIEU SINH VIEN				|\n");
	printf("|			1. Them moi sinh vien vao danh sach			|\n");
	printf("|			2. Hien thi danh sach sinh vien				|\n");
	printf("|			3. Sap xep danh sach theo ten a - z			|\n");
	printf("|			4. Sap xep danh sach theo GPA 3 mon giam dan		|\n");
	printf("| 			5. Tim sinh vien					|\n");
	printf("|			6. Thoat						|\n\n");
	printf("---------------------------------------------------------------------------------\n\n");
	printf("				NHAP LUA CHON CUA BAN: ");
	scanf("%d", &number);
	printf("---------------------------------------------------------------------------------\n");	
		
	switch(number)
	{
		case 1:
			{
				printf("\nYeu cau them moi sinh vien vao danh sach sinh vien!");
				break;
			}
			
		case 2:
			{
				printf("\nYeu cau hien thi danh sach sinh vien hien co!");
				break;
			}
			
		case 3:
			{
				printf("\nYeu cau sap xep danh sach sinh vien theo TEN A-Z!");
				break;
			}
			
		case 4:
			{
				printf("\nYeu cau sap xep danh sach sinh vien theo DIEM TRUNG BINH 3 MON GIAM DAN!");
				break;
			}
			
		case 5:
			{
				printf("\nYeu cau tim sinh vien theo TEN NHAP VAO TU BAN PHIM");
				find_name();
				break;
			}
			
		case 6:
			{
				printf("\nYeu cau thoat chuong trinh thanh cong!");
				break;
			}
			 
		default:
			{
				printf("\nKhong co yeu cau nay!");
				break;
			}
	}
	
	
printf("\n\nEx2:");
	
	int num;
	
	printf("\n---------------------------------------------------------\n");
	printf("|		   LUA CHON CHUC NANG			|\n");
	printf("|		1. Tinh tong cua 2 so phuc		|\n");
	printf("|		2. Tinh hieu cua 2 so phuc		|\n");
	printf("|		3. Tinh tich cua 2 so phuc		|\n");
	printf("|		4. Tinh thuong cua 2 so phuc		|\n");
	printf("|		5. Thoat				|");
	printf("\n---------------------------------------------------------\n");
	printf("		   NHAP LUA CHON CUA BAN: ");
	scanf("%d", &num);
	printf("\n---------------------------------------------------------\n");	
	
	soPhuc SP1, SP2, a;
	switch(num)
	{
		case 1:
			{
				printf("\nYeu cau tinh TONG cua 2 so phuc!");
				nhapSoPhuc(&SP1);
				nhapSoPhuc(&SP2);
				a = tong(SP1, SP2);
			
				printf("\nTong cua 2 so phuc: ");
				xuatSoPhuc(a);
				break;
			}
		
		case 2:
			{
				printf("\nYeu cau tinh HIEU cua 2 so phuc!");
				nhapSoPhuc(&SP1);
				nhapSoPhuc(&SP2);
				a = hieu(SP1, SP2);
			
				printf("\nHieu cua 2 so phuc: ");
				xuatSoPhuc(a);
				break;
			}
		
		case 3:
			{
				printf("\nYeu cau tinh TICH cua 2 so phuc!");
				nhapSoPhuc(&SP1);
				nhapSoPhuc(&SP2);
				a = tich(SP1, SP2);
			
				printf("\nTich cua 2 so phuc: ");
				xuatSoPhuc(a);
				break;
			}
		
		case 4:
			{
				printf("\nYeu cau tinh THUONG cua 2 so phuc!");
				nhapSoPhuc(&SP1);
				nhapSoPhuc(&SP2);
				if(SP2.a == 0 && SP2.b == 0)
				{
					printf("\nSo phuc da nhap khong hop le!");
				}
				else
				{
					a = thuong(SP1, SP2);
					printf("\nThuong cua 2 so phuc: ");
					xuatSoPhuc(a);
				}
				break;
			}
		
		case 5:
			{
				printf("\nYeu cau thoat chuong trinh thanh cong!");
				break;
			}
		
		default:
			{
				printf("\nYeu cau khong hop le!");
			}
	}
	
return 0;
}
