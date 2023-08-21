#include <stdio.h>
#include <math.h>

void Nhap_mang(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void Xuat_mang(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
		{
			printf("%d ", a[i]);
		}
}

void Hoan_vi(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Ham su dung cho Ex1
void Sap_xep_tang_dan(int a[], int n)
{
	int i, j;
	for(i=0; i<n-1; i++)
	{
		int min = i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
		}
	Hoan_vi(&a[i], &a[min]);
	}
}

// Ham su dung cho Ex3
void Dao_nguoc_mang(int a[], int n)
{
	int i;
	for(i=0; i<n/2; i++)
	{
		Hoan_vi(&a[i], &a[n-i-1]);
	}
}

// Ham su dung cho Ex4
void Tach_mang(int a[], int n)
{
	int E[100];
	int F[100];
	int e=0, f=0, i;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			E[e] = a[i];
			e++;
		}else
		{
			F[f] = a[i];
			f++;
		}
	}
	printf("\nMang chan sau khi sap xep: ");
	Sap_xep_tang_dan(E, e);
	Xuat_mang(E, e);
	
	printf("\nMang le sau khi sap xep: ");
	Sap_xep_tang_dan(F, f);
	Xuat_mang(F, f);
}

// Ham su dung cho Ex2
void Xuat_bang(char a[3][3])
{
	int i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%c]", a[i][j]);
		}
	printf("\n");
	}
}

void Check_Player1(char a[3][3])
{
	int i;
	for(i=0;i<3;i++)
	{
		if((a[i][0]=='X' && a[i][1]=='X' && a[i][2]=='X') || (a[0][i]=='X' && a[1][i]=='X'&& a[2][i]=='X'))
		{
			printf("\nPLAYER 1 WIN");
		}
	}
	if ((a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X'))
	{
		printf("\nPLAYER 1 WIN");
	}
}

void Check_Player2(char a[3][3])
{
	int i;
	for(i=0;i<3;i++)
	{
		if((a[i][0]=='X' && a[i][1]=='X' && a[i][2]=='X') || (a[0][i]=='X' && a[1][i]=='X'&& a[2][i]=='X'))
		{
			printf("\nPLAYER 2 WIN");
		}
	}
	if ((a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X'))
	{
		printf("\nPLAYER 2 WIN");
	}
}


int main()
{
printf("Ex 1: Selection Sort");
	int a[100], n1;
	do
	{
		printf("\nNhap vao kich thuoc cua mang: ");
		scanf("%d", &n1);	
	}while(n1<1);
	
	printf("Nhap cac gia tri cua mang:\n");
	Nhap_mang(a, n1);
	
	printf("Mang ban dau: ");
	Xuat_mang(a, n1);

	printf("\nMang sau khi sap xem theo thu tu tang dan: ");
	Sap_xep_tang_dan(a, n1);
	Xuat_mang(a, n1);



printf("\n\nEx 3: ");
	int c[100], n3;
	do
	{
		printf("\nNhap vao kich thuoc cua mang: ");
		scanf("%d", &n3);	
	}while(n3<1);

	printf("Nhap cac gia tri cua mang:\n");
	Nhap_mang(c, n3);
	
	printf("Mang truoc khi dao nguoc: ");
	Xuat_mang(c, n3);
	
	printf("\nMang sau khi dao nguoc: ");
	Dao_nguoc_mang(c, n3);
	Xuat_mang(c, n3);



printf("\n\nEx 4: ");
	int d[100], n4;
	do
	{
		printf("\nNhap vao kich thuoc cua mang: ");
		scanf("%d", &n4);
	}while(n4<1);
	
	printf("Nhap cac gia tri cua mang:\n");
	Nhap_mang(d, n4);
	
	printf("Mang ban dau: ");
	Xuat_mang(d, n4);

	Tach_mang(d, n4);


printf("\n\nEx 2: TIC TAC TOE");
	printf("\nPlayer 1: X - first player");
	printf("\nPlayer 2: O - second player\n\n");
	
	char b[3][3];
	int i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]= ' ';
		}
	}
	
	Xuat_bang(b);

	int i1, i2, j1, j2;
	while(i>0)
	{	
		printf("\nPlayer 1 enter (x y): ");
		scanf("%d %d", &i1, &j1);
		if(i1<3 && j1<3)
		{
			b[i1][j1] = 'X';
			Xuat_bang(b);
			Check_Player1(b);
	
			printf("\nPlayer 2 enter (x y): ");
			scanf("%d %d", &i2, &j2);
			b[i2][j2] = 'O';
			Xuat_bang(b);
			Check_Player2(b);
		}
	}

return 0; 
}
