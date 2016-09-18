#include "iostream"
using namespace std;
void nhapso(int &a);
int ktsongto(int b);
void in_songuyento(int b);
int tongsongto(int b);
void liekesodautien(int b);
void main()
{
	int n;
	nhapso(n);
	cout<<"\nCac so nguyen to nho hon "<<n<<" la: ";
	in_songuyento(n);
	cout<<"\nTong so nguyen to: "<<tongsonguyento(n);
	cout<<"\nSo nguyen to dau tien : ";
	liekesodautien(n);
}
void nhapso(int &a)
{
	do{
		cout<<"\nNhap vao mot so nguyen : ";
		cin>>a;
	}while(n<0);
}
int ktsongto(int b)
{
	if(b<2)
		return 0;
	for(int i=2;i<b;i++)
		if(b%i==0)
			return 0;
	return 1;
}
void in_songuyento(int b)
{
	for(int i=1;i<n;i++){
		if(ktsongto(i) ==1)
			cout<<i<<"\t";
	}
		cout<<endl;
}
int tongsongto(int b)
{
	int tong=0;
	for(int i=1;i<n;i++)
	{
		if(ktsongto(i) ==1)
			tong+=i;
	}
		cout<<endl;
		return tong;
}
void liekesodautien(int b)
{
	int dem=0;
	int i=1;
	while(dem<n)
	{
		if(ktsongto(i))
			cout<<i<<"\t";
	}
	i++;
}

