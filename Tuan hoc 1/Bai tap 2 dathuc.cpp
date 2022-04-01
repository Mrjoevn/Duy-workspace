// Xay dung lop da tuc bac 2 Dathuc3 gom cac thuoc tinh he so , bac 2 ,bac 1
// va bac 0 lan luot la a,b,c,d(a,b,c nguyen) .Trong lop co dinh nghia sau :
// -Ham khoi tao voi cac tham so co gia tri ngam dinh bang 0
// -Ham huy
// -Ham hien thi da thuc ra man hinh o dang (ax^2 + bx +c)
// -Ham tinh tong 2 da thuc 
// -Viet chuong trinh tao 2 da thuc va in ra man hinh tong 2 da thuc do.
#include<iostream.h>
using namespace std;
class Dathuc3
{
	private:
	int hsbac2, hsbac1 ,hsbac0;
	public:
	Dathuc3()
	{
		hsbac2=0;
		hsbac1=0;
		hsbac0=0;
	}
	Dathuc3(int bac2 ,int bac1 ,int bac0)
	{
		hsbac2=bac2;
		hsbac1=bac1;
		hsbac0=bac0;	
	}
	~Dathuc3(){};
	void hienthi()
	{
		cout<<"( "<<hsbac2<<"x^2 + "<<hsbac1<<"x +"<<hsbac0<<" )";
	}
	Dathuc3 tong(Dathuc3 dt)
	{
		Dathuc3 d;
		d.hsbac2=hsbac2 + dt.hsbac2;
		d.hsbac1=hsbac1 + dt.hsbac1;
		d.hsbac0=hsbac0 + dt.hsbac0;
		return d;	
	}
};
int main()
{
	Dathuc3 dt(5,3,2);
	Dathuc3 dt1(4,2,3);
	cout<<"\nDa thuc thu nhat la :";
	dt.hienthi();
	cout<<"\nDa thuc thu hai la :";
	dt1.hienthi();
	cout<<"\nTong 2 da thuc bac 2 o tren la :";
	dt.tong(dt1).hienthi();
	return 0;
}