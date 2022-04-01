// Xay dung lop phan so PS gom cac thuoc tinh tu so va mau so la cac so nguyen.
// Trong lop cac dinh nghia cac ham sau :
// Ham khoi tao cac tham so co gia tri ngam dinh
// Ham huy
// Ham rut gon phan so
// Ham hien thi phan so ra man hinh o dang tu so / mau so
// Viet chuong trinh khoi tao 2 phan so. In ra man hinh tong, hieu 2 phan so do.
 #include<iostream.h>
 using namespace std;
 int UCLN(int a ,int b)
 {
 	while(a != b)
 	{
	 	if(a > b)
	 	{
	 		a= a-b;
	 	}
	 	else{
	 		b= b-a;
	 	}
	 }
	 return a;
 }
 class PS
 {
 	private:
	 int tuso, mauso;
	public:
	PS()
	{
		tuso=0;
		mauso=0;
	}
	PS(int a ,int b)
	{
		tuso=a;
		mauso=b;
	}
	~PS(){};
	int get_tuso()
	{
		return tuso;
	}
	int get_mauso()
	{
		return mauso;
	}
	PS hieu(PS pss)
	{
		PS ps;
		ps.tuso=(tuso *pss.mauso)-(pss.tuso *mauso);
		ps.mauso=(mauso * pss.mauso);
		int k= UCLN(ps.get_tuso(),ps.get_mauso());
		return ps;
	}
	PS cong(PS ps1)
	{
		PS ps;
		ps.tuso=(tuso *ps1.mauso)+(ps1.tuso *mauso);
		ps.mauso=(mauso * ps1.mauso);
		int k= UCLN(ps.get_tuso(),ps.get_mauso());
		ps.tuso =ps.tuso /k;
		ps.mauso=ps.mauso /k;
		return ps;
	}
	void hien_thi()
	{
		cout<<"("<<tuso<<"/"<<mauso<<")";
	}
 };
 int main()
 {
 	PS ps(1,2);
 	cout<<"\nPhan so thu nhat la :"; 
 	ps.hien_thi();
 	PS ps1(3,4);
 	cout<<"\nPhan so thu hai la :";
 	ps1.hien_thi();
	PS ps2=ps.cong(ps1);
 	cout<<"\nTong 2 phan so la :";
 	ps2.hien_thi();
 	cout<<"\nHieu 2 phan so la:";
 	ps.hieu(ps1).hien_thi();
 	return 0;
 }