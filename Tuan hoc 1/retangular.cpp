// Dinh nghia lop hinh chu nhat gom co 2 thanh phan du lieu la chieu dai
// va chieu rong r ,cac phuong thuc gom nhap ,in , tinh chu vi, tinh dien
// tich cua hinh chu nhat .
// Viet chuong trinh nhap vao kich thuoc mot hcn, in ra man hinh chu vi
// dien tich hinh chu nhat do .
#include<iostream.h>
using namespace std;
class HCN
{
	private:
	float dai ,rong;
	public:
	void nhap()
	{
		cout<<"\nNhap chieu dai cua HCN la :";cin>>dai;
		cout<<"\nNhap chieu rong cua HCN la :";cin>>rong;
	}
	void in()
	{
		cout<<"\nDo dai 2 canh HCN la : ("<<dai<<","<<rong<<")";
	}
	float chuvi()
	{
		return (dai+rong)*2;
	}
	float dientich()
	{
		return dai*rong;
	}
};
int main()
{
	HCN h;
	h.nhap();
	h.in();
	cout<<"\nChu vi Hinh Chu Nhat la :"<<h.chuvi();
	cout<<"\nDien tich Hinh Chu Nhat la :"<<h.dientich();
	return 0;
}