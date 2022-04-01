//Xay dung lop cong nhan CN gom cac thuoc tinh ho ten ht(kieu char), tuoi t
//(kieu so nguyen), que quan(kieu char), bac luong bl(kieu float).Trong lop co
//dinh nghia cac ham sau:
// -Ham khoi tao cac thong tin tren cho 1 cong nhan.
// -Ham xuat cac thong tin tren cua cong nhan ra man hinh .
// -Ham tinh tien luong cho cong nhan ra biet rang luong = bac luong *2500 +phu cap
// (tien phu cap cong nhan la 20% luong)
//Viet chuong trinh nhap vao thong tin 1 cong nhan. In ra man hinh tien luong cong nhan do.
#include<iostream.h>
#include<string.h>
using namespace std;
class CongNhan
{
	private:
	char ho_ten[25];
	int tuoi;
	char que_quan[30];
	float bac_luong;
	public:
	CongNhan(char *ho_ten="" ,int tuoi=0 ,char *que_quan="" ,float bl=0)
	{
		strcpy(this->ho_ten,ho_ten);
		this->tuoi= tuoi;
		strcpy(this->que_quan,que_quan);
		bac_luong=bl;
	}
	long int tienluong()
	{
		return size_t(bac_luong* 2500 +(bac_luong*0.2));
	}
	void nhap()
	{
		cout<<"\nNhap ten Cong Nhan la :";cin.getline(ho_ten,25);
		cout<<"\nNhap Tuoi Cong Nhan la :";cin>>tuoi;
		cin.ignore();
		cout<<"\nNhap Que Quan la :";cin.getline(que_quan,30);
		cout<<"\nNhap Bac Luong la :";cin>>bac_luong;
	}
		void xuat()
	{
		cout<<"\nHo ten Cong nhan la :"<<ho_ten;
		cout<<"\nTuoi Cong Nhan la :"<<tuoi;
		cout<<"\nQue Quan Cong Nhan la :"<<que_quan;
		cout<<"\nBac luong la :"<<size_t(bac_luong);
	}
};
int main()
{
	CongNhan cn;
	cn.nhap();
	cn.xuat();
	cout<<"\nTien luong cua Cong nhan la :"<<cn.tienluong();
	return 0;
}