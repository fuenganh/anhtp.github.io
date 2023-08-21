#include <stdio.h>
#include <string.h>
#include <math.h>

//Ex1
typedef struct{
	int hour;
	int minute;
	int second;
}time;

time enterTime(time *S)
{
	scanf("%d %d %d", &(*S).hour, &(*S).minute, &(*S).second);
	printf("a. %d gio %d phut %d giay", (*S).hour, (*S).minute, (*S).second);
}

time changeToSecond(time S)
{
	int total;
	total = S.hour*3600 + S.minute*60 + S.second;
	printf("\nb. %d gio %d phut %d giay tuong ung voi: %d giay", S.hour, S.minute, S.second, total);
}

time difference(time S1, time S2)
{
	int minusSecond;
	time S;
	minusSecond = (S2.hour*3600 + S2.minute*60 + S2.second) - (S1.hour*3600 + S1.minute*60 + S1.second);
	S.hour = minusSecond/3600;
	S.minute = (minusSecond%3600)/60;
	S.second = (minusSecond%3600)%60;
	printf("\nc. Chenh lech giua hai khoang thoi gian la: %d gio %d phut %d giay", S.hour, S.minute, S.second);
}

//Ex3


//Ex4
int Fibonacci(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}

int main(){
printf("Ex1:");
	time T1, T2;
	printf("\nNhap khoang thoi gian 1: ");
	enterTime(&T1);
	
	printf("\nNhap khoang thoi gian 2: ");
	enterTime(&T2);
	
	changeToSecond(T1);
	difference(T1, T2);
	
printf("\n\nEx2:");
	int a[50], n1, i, j;
	printf("\nNhap kich thuoc cua chuoi: ");
	scanf("%d", &n1);
	for(i=0; i<n1; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Chuoi nhap vao: ");
	for(i=0; i<n1; i++)
	{
		printf("%d ", a[i]);
	}
	
	for(i=0; i<n1; i++)
	{
		for(j=i+1; j<n1; j++)
		{
			if(a[i]<a[j])
			{
				int temp;
				temp = a[i]; 
				a[i] = a[j];
				a[j] = temp;
			}
		}		
	}
	
	printf("\nChuoi sau khi sap xep: ");
	for(i=0; i<n1; i++)
	{
		printf("%d ", a[i]);
	}
	
printf("\n\nEx3:");
	char str[50];;
	printf("\nNhap mat khau: ");
	fgets(str, sizeof(str), stdin);
	
	
printf("\n\nEx4:");	
	int n2;
	printf("\nNhap n: ");
	scanf("%d", &n2);
	printf("Fibonacci(%d) = %d", n2, Fibonacci(n2));
			
	
	
	
return 0;
}
