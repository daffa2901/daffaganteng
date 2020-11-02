#include <iostream>
#include <string>
using namespace std ;
int main ()
{
		string name, pass;
		float nilaiharian,nilaiuts,nilaiuas ;
	 	int kalku, algo, z ;
	cout <<"Login Akun ==============="<<endl ;
	cout <<"Username		:  ";
	cin >>name ;
	cout <<"Password 		:  ";
	cin >>pass;
	cout <<"==========================="<<endl ;
	if ( name == "Daffaaulia" && pass == "124200046" ){
	cout <<" Login Sukses "<<endl ;
	cout<<"/n/"<<endl ;
	cout<<"Input Nilai Mata Kuliah"<<endl ;
	cout<<"1. Algoritma dan pemprograman  "<<endl ;
	cout<<"2. Kalkulus					  "<<endl ;
	cout<<"Pilihan : " ;
	cin>>z ;
	if (z == 1){
	
	cout<<"Pilih : 1"<<endl ;
	cout<<"Nilai Harian : " ;
	cin>>nilaiharian ;
	cout<<"Nilai UTS 	: " ;
	cin>>nilaiuts ;
	cout<<"Nilai UAS	: " ;
	cin>>nilaiuas;
	
	if ((nilaiharian+nilaiuts+nilaiuas)/3>=80){
		cout<<"anda Lulus Algoritma dan pemprograman dengan nilai "<<(nilaiharian+nilaiuts+nilaiuas)/3<<endl ;
	}
	else if ((nilaiharian+nilaiuts+nilaiuas)/3 <= nilaiuts){
		cout<<"anda Tidak Lulus Algoritma dan Pemprograman dengan nilai "<<(nilaiharian+nilaiuts+nilaiuas)/3<<endl ;
	}}
	else if (z == 2){
		cout<<"Pilih : 2"<<endl ;
	cout<<"Nilai Harian : " ;
	cin>>nilaiharian ;
	cout<<"Nilai UTS 	: " ;
	cin>>nilaiuts ;
	cout<<"Nilai UAS	: " ;
	cin>>nilaiuas ;
	
	if ((nilaiharian+nilaiuts+nilaiuas)/3>=80){
		cout<<"anda Lulus Kalkulus dengan nilai "<<(nilaiharian+nilaiuts+nilaiuas)/3<<endl ;
	}
	else if ((nilaiharian+nilaiuts+nilaiuas)/3 <= nilaiuts){
		cout<<"anda Tidak Lulus Kalkulus dengan nilai "<<(nilaiharian+nilaiuts+nilaiuas)/3<<endl ;
	}
	}
	
}
else if ( pass !="124200046" && name == "DAFFAAULIA")
{
	cout <<"password anda salah"<<endl ;
}
else if ( name !="daffaaulia" && pass == "124200046" )
{
	cout <<"Username anda salah"<<endl ;
}

else 
{
cout <<"Username dan Password Salah"<<endl ;
}
}
