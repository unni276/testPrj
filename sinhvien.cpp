#include <iostream>
using namespace std;
struct sinhvien
{
	int mssv;
	char tsv[30];
	float dm1, dm2, dm3, DTB;
}
#define max 100
void nhapsinhvien (sinhvien a[]; int &n);
void xuatsinhvien (sinhvien a[]; int n);
void xuat_DTBmax (sinhvien a[]; int n); 
int main()
{
	int n;
    sinhvien a[100];
    nhapsinhvien (a,n);
    insinhvien (a,n);
    xuat_DTBmax;
	return 0;
} 
void nhapsinhvien (sinhvien a[], int &n)
{
	cout<<"nhap slvs";
	cin>>n;
	for (int i=0, i<n, i++)
	{
		cout << "nhap mssv";
		cin >> a[i].mssv;
		cout << "nhap tsv";
		cin >> a[i].tsv;
		cout << "nhap d1";
		cin >> a[i].d1;
		cout << "nhap d2";
		cin >> a[i].d2;
		cout << "nhap d3";
		cin >> a[i].d3;
		a[i].TB= (a[i].d1*2+a[i].d2+a[i].d3)/4;
	}
}
void xuatsinhvien (sinhvien a[i], int n)
{
	cout << "mssv" << "tsv" << "diem 1" << "diem 2" << "diem 3" << "diem TB";
	for ( i=0, i<n,i++)
	{
		cout << a[i].mssv << "  ";
		cout << a[i].tsv << "  ";
		cout << a[i].d1 << "  ";
		cout << a[i].d2 << "  ";
		cout << a[i].d3 << "  ";
		cout << a[i].TB;
	}
}
void xuatDTB ( sinhvien a[], int n)
{
	if (n<=0)
	{ 
	    cout << "so phan tu khong hop  le";
	    float max=a[0].DTB;
		return ; 
	}
	for (int i=0, i<n, i++)
	{
		if (max < a[i].DTB)
		{
			max=a[i].DTB;
		}
		cout << "xuat diem cao nhat" << endl;
		for (int j=1; j<n, j++)
		{
			if ( a[j].DTB==max )
			cout << a[j].mssv << "  ";
		cout << a[j].tsv << "  ";
		cout << a[j].d1 << "  ";
		cout << a[j].d2 << "  ";
		cout << a[j].d3 << "  ";
		cout << a[j].TB;
		}
	}
}
