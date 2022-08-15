#include <stdio.h>
#include<conio.h>
#include<math.h>

void nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
{
	 printf( "a[%d]= ", i );
	 scanf("%d, &a[i]" );
}
}

void xuatmang(int a[], int n)

{
	for (int i = 0; i < n; i++)
 		printf("%d ", a[i]);
}

int KTSNT(int n);
	if (n < 2) { 
	return 0;
 } 
    if (n > 2){
    if (n % 2 == 0){
		return 0;
}
else return 1;
}
}

void lietkesonguyento(int a[], int n)

{
int dem = 0;
	for (int i = 0; i < n; i++)

{
	if (KTSNT(a[i]) == 1)
{
	dem = 1;
		printf ("%d", a[i]);
}
}
}

void main()

{
int a[100];
int n;
printf(Nhap so phan tu);
scanf ("%d", &n);
nhapmang (a, n);

xuatmang (a, n);

printf ("khong co so nguyen to: " );
geth();
}
