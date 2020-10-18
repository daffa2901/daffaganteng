#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int NIM,nilai_uts,nilai_uas,rata_rata;
	char  nama[25];
	cout<<"nama 	 = ";
	cin.getline (nama,sizeof(nama));
	cout<<"NIM	= ";
	cin>>NIM;
	cout<<"nilai uts = ";
	cin>>nilai_uts;
	cout<<"nilai uas = ";
	cin>>nilai_uas;
	
	rata_rata=(nilai_uts+nilai_uas)/2;
	cout<<fixed<<setprecision(2)<<"mahasiswa dengan nama "<<nama<<" ("<<NIM<<") mendapatkan rata rata ="<<rata_rata;
	
		
	return 0;
}
