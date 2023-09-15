#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//Bai 1
	int n;
	printf("\nNhap so nguyen N = ");
	scanf("%d", &n);
	//kiem tra n la so chan hay le
	if (n % 2 == 0 )
	{
		printf("\nN la so chan");
	}
	else 
	{
		printf("\nN la so le");
	}
	//kiem tra n chia het cho 2 va 7 khong
	if (n % 14 == 0 )
	{
		printf("\nN chia het cho 2 va 7 ");
	}
	//Kiem tra n co phai so nguyen to khong
	int count,i ;
	count = 0;
	i = 2;
	for (; i<n; i++)
	{
		if(n % i == 0)
		{
			count = count +1 ;
		}
	}
	if (count == 0)
	{
		printf("\nN la so nguyen to");
	}
	
	else 
	{
		printf("\nN khong la so nguyen to");
	}
	
	//Bai 2
	int a,b,T,u;
	printf("\nNhap a = ");
	scanf("%d",&a);
	printf("\nNhap b = ");
	scanf("%d",&b);
	T = 0;
	if (a<b)
	{
		for (u=a+1; u<b; u++)
		{
			T = T + u;	
		}
	
	}
	else 
	{
		for (u=b+1; u<a; u++)
		{
			T = T + u;
		}
	}	
	printf("tong cac phan tu giua a va b = %d", T);	
	
	//Bai 3
	int y[10],k,T1,T2,T3;
	T1 = 0;
	T2 = 0;
	T3 = 0;
	//nhap cac phan tu trong mang
	for (k = 0; k<10; k++)
	{
		printf("\nNhap phan tu y[%d] = ", k);
		scanf("%d", &y[k]);
		T1 = T1 + y[k];
	}
	printf("\nTong cac phan tu trong mang = %d", T1);
	//tinh tong cac phan tu chia het cho 3 va 6
	for (k = 0; k<10; k++)
	{
		if(y[k] % 6 ==0)
		{
		T2 = T2 + y[k];
		}
	}
	printf("\nTong cac phan tu chia het cho 3 va 6 = %d", T2);
		//tinh tong cac phan tu chia het cho 3 va 7
	for (k = 0; k<10; k++)
	{
		if(y[k] % 21 ==0)
		{
		T3 = T3 + y[k];
		}
	}
	printf("\nTong cac phan tu chia het cho 3 va 7 = %d", T3);
	//luu cac so nguyen to vao mang moi k
	
	
	return 0;
}

