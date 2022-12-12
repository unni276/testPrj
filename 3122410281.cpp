#include <iostream>
#include <cstring>
#define MAX 1000
using namespace std;
struct sinhvien
{
    int msv;
    char tsv[30];
    char tuoi[30];
    char gt[30];
    char HL[30];
    float T, L, H, TB;
};
void nhapsinhvien(sinhvien a[], int n);
void themsinhvien(sinhvien a[], int &n);
void capnhatthongtinsinhvien(sinhvien &sv);
void sapxepTheoDTB(sinhvien a[], int n);
void timKiemTheoTen(sinhvien a[], char ten[], int n);
void xoatheomasinhvien(sinhvien a[], int ma, int &n);
void hienthidanhsachsinhvien(sinhvien a[], int n);
int main()
{
    sinhvien a[MAX];
    int n;
    while (true)
    {
        cout << "1. Nhap danh sach sinh vien" << endl;
        cout << "2. Them sinh vien" << endl;
        cout << "3. Cap nhat thong tin sinh vien boi ID" << endl;
        cout << "4. Xoa sinh vien theo ID" << endl;
        cout << "5. Tim kiem sinh vien theo ten" << endl;
        cout << "6. Sap xep sinh vien theo diem trung binh" << endl;
        cout << "7. Hien thi danh sach sinh vien" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap tuy chon ";
        int chon;
        cin >> chon;
        int ma;
        switch (chon)
        {
        case 1:
            cout << "Nhap n ";
            cin >> n;
            nhapsinhvien(a, n);
            break;
        case 2:
            themsinhvien(a, n);
            break;
        case 3:;
            cout << "Nhap ma ";
            cin >> ma;
            capnhatthongtinsinhvien(a[ma]);
            break;
        case 4:
            cout << "Nhap ma ";
            cin >> ma;
            xoatheomasinhvien(a, ma, n);
            break;
        case 5:
            char ten[30];
            cout << "Nhap ten ";
            cin >> ten;
            timKiemTheoTen(a, ten, n);
            break;
        case 6:
            sapxepTheoDTB(a, n);
        case 7:
            hienthidanhsachsinhvien(a, n);
        case 0:
            cout << "ket thuc chuong trinh" << endl;
            exit(0);
            break;
        default:
            cout << "Nhap khong hop le" << endl;
        }
    }
}
void nhapsinhvien(sinhvien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ma ";
        cin >> a[i].msv;
        cout << "nhap tsv";
        cin >> a[i].tsv;
        cout << "nhap tuoi";
        cin >> a[i].tuoi;
        cout << "nhap gt ";
        cin >> a[i].gt;
        cout << "nhap diem toan";
        cin >> a[i].T;
        cout << "nhap diem ly ";
        cin >> a[i].L;
        cout << "nhap diem hoa";
        cin >> a[i].H;
        a[i].TB = (a[i].T + a[i].L + a[i].H) / 3;
        if (a[i].TB >= 8)
            strcpy(a[i].HL, "Gioi");
        else if (a[i].TB >= 6.5)
            strcpy(a[i].HL, "Kha");
        else if (a[i].TB >= 5)
            strcpy(a[i].HL, "Trung Binh");
        else
            strcpy(a[i].HL, "Yeu");
    }
}

void themsinhvien(sinhvien a[], int &n)
{
    cout << "Nhap ma ";
    cin >> a[n].msv;
    cout << "nhap tsv";
    cin >> a[n].tsv;
    cout << "nhap tuoi";
    cin >> a[n].tuoi;
    cout << "nhap gt ";
    cin >> a[n].gt;
    cout << "nhap diem toan";
    cin >> a[n].T;
    cout << "nhap diem ly ";
    cin >> a[n].L;
    cout << "nhap diem hoa";
    cin >> a[n].H;
    a[n].TB = (a[n].T + a[n].L + a[n].H) / 3;
    if (a[n].TB >= 8)
        strcpy(a[n].HL, "Gioi");
    else if (a[n].TB >= 6.5)
        strcpy(a[n].HL, "Kha");
    else if (a[n].TB >= 5)
        strcpy(a[n].HL, "Trung Binh");
    else
        strcpy(a[n].HL, "Yeu");
    n++;
}
void capnhatthongtinsinhvien(sinhvien &sv)
{
    cout << "Nhap ma ";
    cin >> sv.msv;
    cout << "nhap tsv";
    cin >> sv.tsv;
    cout << "nhap tuoi";
    cin >> sv.tuoi;
    cout << "nhap gt ";
    cin >> sv.gt;
    cout << "nhap diem toan ";
    cin >> sv.T;
    cout << "nhap diem ly ";
    cin >> sv.L;
    cout << "nhap diem hoa ";
    cin >> sv.H;
    sv.TB = (sv.T + sv.L + sv.H) / 3;
    if (sv.TB >= 8)
        strcpy(sv.HL, "Gioi");
    else if (sv.TB >= 6.5)
        strcpy(sv.HL, "Kha");
    else if (sv.TB >= 5)
        strcpy(sv.HL, "Trung Binh");
    else
        strcpy(sv.HL, "Yeu");
}
void xoatheomasinhvien(sinhvien a[], int ma, int &n)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].msv == ma)
        {
            found = 1;
            for (int j = i; j < n; j++)
                a[j] = a[j + 1];
            cout << "\n Da xoa SV co ma = " << ma;
            n--;
            break;
        }
    }
    if (found == 0)
        cout << "Sinh vien co ID = " << ma << "khong ton tai." << endl;
}
void sapxepTheoDTB(sinhvien a[], int n)
{
    // Sap xep theo DTB tang dan
    sinhvien tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].TB > a[j].TB)
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void timKiemTheoTen(sinhvien a[], char ten[], int n)
{
    char tenSV[30];
    for (int i = 0; i < n; i++)
    {
        strcpy(tenSV, a[i].tsv);
        if (strcmp(tenSV, ten))
        {
            cout << a[i].msv << " " << a[i].tsv << " " << a[i].gt << " " << a[i].tuoi
                 << " " << a[i].T << " " << a[i].L << " " << a[i].H << " " << a[i].TB
                 << " " << a[i].HL << endl;
        }
    }
}
void hienthidanhsachsinhvien(sinhvien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].msv << " " << a[i].tsv << " " << a[i].gt << " " << a[i].tuoi
             << " " << a[i].T << " " << a[i].L << " " << a[i].H << " " << a[i].TB
             << " " << a[i].HL << endl;
    }
}