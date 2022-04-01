#include<iostream.h>
#include<string.h>
using namespace std;
struct date
{
	int day, month ,year;
};
class KH
{
	private:
	char ht[30];
	date ns;
	char ID[10];
	char ho_khau[50];
	public:
	KH(char *ho_ten ,int ng ,int th ,int n,char *CMT ,char *hk)
	{
		strcpy(ht,ho_ten);
		ns.day=ng;
		ns.month=th;
		ns.year=n;
		strcpy(ID,CMT);
		strcpy(ho_khau, hk);
	}
	KH()
	{
		strcpy(ht," ");
		ns.day=0;
		ns.month=0;
		ns.year=2010;
		strcpy(ID," ");
		strcpy(ho_khau," ");
	}
	~KH(){}
	void xuat()
	{
		cout<<"\nHo ten KH la :"<<ht;
		cout<<"\nNgay sinh la :"<<ns.day<<"-"<<ns.month<<"-"<<ns.year;
		cout<<"\nCMT la :"<<ID;
		cout<<"\nHo khau la :"<<ho_khau<<endl;
	}
};
int main()
{
	KH kh("Le manh duy",24,12,2002,"201033224","Thanh Ha - Hai Duong");
	kh.xuat();
}