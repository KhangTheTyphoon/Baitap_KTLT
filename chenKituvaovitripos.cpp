#include "iostream"
#include <string.h>
using namespace std;
void chenkitu(char *s,char *sub, int pos);
void xuatchuoi(char *s);
int main()
{
	char r[100],subb[100];
	int vitri;
	cout<<"\nNhap chuoi vao:";
	cin.getline(r,100);
	cout<<"\nNhap chuoi muon chen vao:";
	cin.getline(subb,100);
	cout<<"\nNhap chuoi vao vi tri:";
	cin>>vitri;
	chenkitu(r,subb,vitri);
	cout<<r;
	return 0;

}
void chenkitu(char *s,char *sub, int pos)
{
	strcat(sub,s+pos);
	s[pos] = '\0';
	strcat(s,sub);
}
//void xuatchuoi(char *s)
//{
//	cout<<"\nxuat chuoi ra nha:";
//	cout<<s;
//}


