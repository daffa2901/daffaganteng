#include <iostream>
using namespace std;
const double phi=3.14;
void ulangi();
	

void luas() {
	int x;
	cout<<"jari-jari: ";
	cin>>x;
	cout<<"---------------------------------------------\n";
	double luas;
	luas=phi*x*x;
	cout<<""<<endl;
	    
	cout<<"Luas Lingkaran Adalah : "<<luas;
	cout<<endl;
	cout<<"---------------------------------------------\n";
	ulangi();
}
void keliling() {
	int x;
	cout<<"jari-jari: ";
	cin>>x;
	cout<<"---------------------------------------------\n";
	double keliling;
	keliling=phi*x*x;
	cout<<""<<endl;
	    
	cout<<"keliling Lingkaran Adalah : "<<keliling;
	cout<<endl;
	cout<<"---------------------------------------------\n";
	ulangi();
}
void volume() {
	double volume1,y,x;
	cout<<"jari-jari: ";
	cin>>x;
	cout<<"tinggi:	";
	cin>>y;
	cout<<"---------------------------------------------\n";
	
	volume1=phi*x*x*y;
	cout<<""<<endl;
	    
	cout<<"volume tabung  Adalah : "<<volume1;
	cout<<endl;
	cout<<"---------------------------------------------\n";
	ulangi();
}
int main(){
	int pilih;
cout<<"Hitung lingkaran========	"<<endl;
cout<<"1. Luas lingkaran		"<<endl;
cout<<"2. Keliling lingkaran	"<<endl;
cout<<"3. Volume tabung			"<<endl;
cout<<"pilih:					";
cin>>pilih;

switch (pilih){
	case 1: 
	luas();
	break;
	
	case 2:
	keliling();
	break;
	
	case 3:
	volume();
	break;
	
	default:;
	
	}
	}
	void ulangi(){
	char u;
	cout<<"ulangi program? (y/n) "<<endl;
	cin>>u;
	if (u=='y')
	{
		cout<<endl;
		main();
	 }} 












