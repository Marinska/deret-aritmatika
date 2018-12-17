#include <iostream> //Nama : Umar Ibnu Zainal Muttaqin
using namespace std; //NIM : 311810909
void logika(float a,float b,float n,float sn)
{
	sn=((n-1)*b+(a*2))*(n/2);
	for(int i=1;i<=n;i=i+1)
	{
		cout<<a<<"+";
		a=a+b;
	}
	cout<<"\nJumlah deret ke-n adalah : "<<sn;
}

int main()
{
	int a,b,n,hasil;
	cout<<"Masukan nilai suku kesatu (a) :";
	cin>>a;
	cout<<"Masukan nilai beda tiap suku (b) : ";
	cin>>b;
	cout<<"Masukan jumlah deret (n) : ";
	cin>>n;
	logika(a,b,n,hasil);
}
