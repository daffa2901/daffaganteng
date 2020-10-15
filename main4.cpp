#include <iostream>
#include <iomanip>
using namespace std;


main() 
{	char nama [50], nim [50];
	int nilai1, jumlahsks1, nilai2, jumlahsks2, nilai3, jumlahsks3, jumlah_nilai, banyak_sks;
	float ipk;
	
	cout<<"input nilai mahasiswa"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"nim = "; cin>>nim ;
	cout<<"nama = "; cin.ignore();
	cin.getline(nama,sizeof(nama)) ;
	cout<< "" <<endl;
	
	cout<<"nilai MKA 1 (0-4) = " ; cin>>nilai1;
	cout<<"jumlah sks        = " ; cin>>jumlahsks1;
	cout<<"nilai MKA 2 (0-4) = " ; cin>>nilai2;
	cout<<"jumlah sks        = " ; cin>>jumlahsks2;
	cout<<"nilai MKA 3 (0-4) = " ; cin>>nilai3;
	cout<<"jumlah sks        = " ; cin>>jumlahsks3;
	
	cout<<"---------------------------------"<<endl;
	
	jumlah_nilai=(nilai1*jumlahsks1)+(nilai2*jumlahsks2)+(nilai3*jumlahsks3);
	banyak_sks=jumlahsks1+jumlahsks2+jumlahsks3;
	ipk=jumlah_nilai/banyak_sks;
	
	cout<<fixed<<setprecision(2)<<"mahasiswa dengan nama "<<nama<<" ("<<nim<<") mendapatkan ipk ="<<ipk;
	
	
	
	
	
	return 0;
}
