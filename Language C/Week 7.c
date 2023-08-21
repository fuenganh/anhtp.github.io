#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// HAM SU DUNG CHO EX2
// Xoa tat ca khoang trang thua o dau, cuoi va giua xau
void xoa_khoang_trang(char str[])
{
    int size, i;
    size = strlen(str);
    
	// Xoa khoang trang o dau
    while(str[0] == ' ')
    {
        strcpy(&str[0], &str[1]);
    }
    
    // Xoa khoang trang o giua
    for(i = 0 ; i < size ; i++)
    {
        if(str[i] == ' ' && str[i+1] == ' ')
        {
            strcpy(&str[i], &str[i+1]);
            i--;
        }
    }
        
    // Xoa khoang trang o cuoi
    while(str[size] == ' ')
    {
        strcpy(&str[size-1], &str[size]);
    }
    
}

// Cac ky tu dac biet
bool dau_hieu_viet_hoa(char a)
{
	if(a == '.' || a == '!' || a == '?' || a == '-')
	{
		return true;
	}
	return false;
}

bool ky_tu_dac_biet(char a)
{
	if(a == '?' || a == '!' || a == ',' || a == '.' || a == ':'|| a == '-' || a == '|' || a == '(' || a == ')')
	{
		return true;
	}
	return false;
}

// Them dau cach vao sau moi dau cau
void them_khoang_trang(char str[])
{
    int size, i;
    size = strlen(str);
    for(i = 0 ; i < size ; i++) 
    {  
        if(ky_tu_dac_biet(str[i] == true))
        {
			strcpy(str[i], str[i+1]);
        }
    }
}


// Viet hoa ki tu dau va sau dau cau thich hop
void viet_hoa_ky_tu(char str[])
{
    int size, i;
    size = strlen(str);
    for(i=0 ; i < size ; i++)
    {
    	 if(i == 0 || dau_hieu_viet_hoa(str[i-1]) == true)
        {
        	if(str[i] >= 97 && str[i] <= 122)
        	{
        		str[i] = str[i] - 32;
			}
    	}
    }
}


// HAM SU DUNG CHO EX3
bool check(char str[])
{
    int size, i;
    size = strlen(str);
    for( i = 0 ; i < size/2 ; i++)
    {
        if(str[i] != str[size-i-1])
        {
            return false;
        }
    }
return true;
}


// HAM SU DUNG CHO EX4
int space1(char *str)
{
	int i, size;
	size = strlen(str);
	for(i = 0; i < size; i++)
	{
		if(str[i] == ' ')
		{
			return i;
		}
	}
	return -1;
}

int space2(char *str)
{
	int j, size;
	size = strlen(str);
	for(j = size; j >= 0; j--)
	{
		if(str[j] == ' ')
		{
			return j;
		}
	}
	return -1;
}

void result(char *str)
{
	int temp1, temp2, size, i;
	size = strlen(str);
	temp1 = space1(str);
	temp2 = space2(str);
	
	if(space1 != -1 && space2 != -1)
	{
		// in ten
		for(i = temp2 + 1; i <= size; i++)
		{
			printf("%c", str[i]);
		}
		
		// in ho
		for(i = 0; i <= temp1; i++)
		{
			printf("%c", str[i]);
		}
		
		// in dem
		for(i = temp1 + 1; i < temp2; i++)
		{
			printf("%c", str[i]);
		}
	}
}


int main()
{
printf("Ex1: ");

	char str1[50];
	printf("\nNhap xau: ");
	scanf("%s", str1);
	getchar();

	printf("Xau truoc khi sap xep: %s", str1);
	
	int i, j;
	for(i = 0 ; i< strlen(str1) ; i++)
	{
		int j, temp;
		for(j = i + 1 ; j < strlen(str1) ; j++)
		{
			if(str1[i] > str1[j])
			{
				temp = str1[i];
				str1[i] = str1[j];
				str1[j] = temp;
			}	
		}	
	}
	printf("\nXau sau khi sap xep: %s", str1);


printf("\n\nEx2: ");
	
	char str[150];
	printf("\nNhap xau: ");
	fflush(stdin);
	gets(str);
	printf("Xau truoc khi chuan hoa: %s", str);
	
	xoa_khoang_trang(str);
	them_khoang_trang(str);
	viet_hoa_ky_tu(str);
	printf("\nXau chuan hoa: %s", str);
	
	
printf("\n\nEx3: ");

    char str3[50];
    printf("\nNhap xau: ");
    gets(str3);
    
    int Kiem_tra = check(str3);
    if( Kiem_tra ==  true)
    {
        printf("Xau da nhap la mot xau dao nguoc");
    }
    else
    {
        printf("Xau da nhap khong phai la mot xau dao nguoc");
    }
    

printf("\n\nEx4: ");
    char str4[50];
    printf("\nNhap xau: ");
  	gets(str4);
    printf("Xau truoc khi chuyen doi: %s", str4);
	
	printf("\nXau sau khi chuyen doi: ");
	result(str4);
	
return 0;
}
