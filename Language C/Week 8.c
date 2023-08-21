#include <stdio.h>
#include <math.h>

//Ex1
int power(int a, int b)
{
	if(b==1)
	{
		return a;
	}
	else
	{
		return a * pow(a, b-1);
	}
}

//Ex2
double harmonic(double n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return 1/n + harmonic(n - 1);
	}
	
}

//Ex3
int a[10], n;
void xuat(int a[], int n)
{
	int i;
    for(i = 1; i <= n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

void nhiphan(int j)
{  
	int i;
    for(i = 0; i <= 1; i++)        
    {
        a[j] = i;
        if(j == n)
        {
            xuat(a, n);   
        }
        else
        {
            nhiphan(j + 1);
        }
    } 
}

//Ex4
void ket_qua(int n, char a, char b)
{
    printf("Di chuyen dia %d tu cot %c sang cot %c\n", n, a, b);
}

void dich_chuyen(int n, char cotA, char cotB, char cotC)
{
    if(n==1)
    {
        ket_qua(n, cotA, cotC);
    }
    else
    {
        dich_chuyen(n-1, cotA, cotC, cotB);
        ket_qua(n, cotA, cotC);
        dich_chuyen(n-1, cotB, cotA, cotC);
    }
}



int main()
{
printf("Ex1:");
//1A	
	int a, b;
	printf("\nEnter a, b: ");
	scanf("%d %d", &a, &b);
	
	printf("Power(%d, %d) = %d", a, b, power(a ,b));

//1B	
/*
	Gia su a=2    b=5
	Xet if(b==1), ta thay b khac 1 => thuc hien else
	Xet else (return duoc thuc hien), cu the:
			pow(2, 5) = 2 * pow(2, 5-1)
										= 2 * 2 * pow(2, 4-1)
											= 2 * 2 * 2 * pow(2, 3-1)
												= 2 * 2 * 2 * 2 * pow(2, 2-1)	=> b=1
			ket qua tra ve: 2 * 2 * 2 * 2 * 2 = 32
																											
*/
	
printf("\n\nEx2:");
	double p;
	printf("\nEnter n: ");
	scanf("%lf", &p);
	
	printf("Harmonic(%.0lf) = %.2lf", p, harmonic(p));
	
printf("\n\nEx3:");
	printf("\nNhap n: ");
    scanf("%d", &n);
   
    nhiphan(1);
		
printf("\n\nEx4:");
    int m;
    printf("\nNhap so dia: ");
    scanf("%d", &m);
    
    char cotA = 'A', cotB = 'B', cotC = 'C';
    dich_chuyen(m, cotA, cotB, cotC);
		
	
	
return 0;
}
