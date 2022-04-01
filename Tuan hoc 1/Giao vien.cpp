//Giao vien
#include<iostream.h>
using namespace std;
class GV
{
	private:
	char ho_ten[30];
	int tuoi;
	char bang_cap[15];
	char chuyen_nganh[20];
	float bl;
	public:
	void nhap()
	{
		cout<<"\nNhap hoten la :";cin.getline(ho_ten,30);
		cout<<"\nNhap tuoi la :";cin>>tuoi;
		fflush(stdin);
		cout<<"\nBang cap la :";cin.getline(bang_cap,15);
		cout<<"\nNhap chuyen nganh la :";cin.getline(chuyen_nganh,20);
		cout<<"\nNhap bac luong la :";cin>>bl;
	}
	void xuat()
	{
		cout<<"\n\t Thong Tin Giao Vien la :";
		cout<<"\nHo ten :"<<ho_ten;
		cout<<"\n Tuoi giao vien :"<<tuoi<<" tuoi .";
		cout<<"\nBang cap la :"<<bang_cap;
		cout<<"\nChuyen nganh la :"<<chuyen_nganh;
		cout<<"\nBac luong la :"<<bl;
	}
	long int tienLuong()
	{
		return size_t(bl * 1490);
	}
};
int main()
{
	GV gv;
	gv.nhap();
	gv.xuat();
	cout<<"\nTien luong cua Gv la :"<<gv.tienLuong();
}