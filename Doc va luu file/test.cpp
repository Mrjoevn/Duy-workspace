#include<iostream.h>
#include<fstream.h>

using namespace std;
int main()
{
	int a[20];
	int n;
	ifstream infile;
	infile.open("C:\\Users\\ACER\\OneDrive\\Desktop\\casetest.txt");
	infile>>n;
	cout<<"\nSo luong phan tu trong mang la :"<<n<<endl;
	for(int i=0 ;i<n ;i++)
	{
		infile>>a[i];
	}
	for(int i=0 ;i<n ;i++)
	{
		cout<<a[i]<<" ";
	}
	infile.close();
	
	
	ofstream outfile;
	outfile.open("C:\\Users\\ACER\\OneDrive\\Desktop\\Testcase.txt");
	outfile <<"\nSo luong phan tu trong mang la :"<<n;
	cout<<endl;
	for(int i=0 ;i<n ;i++)
	{
		outfile<<a[i]<<" ";
	}
	cout<<"\nDa luu file thanh cong .";
	outfile.close();
	return 0;
}