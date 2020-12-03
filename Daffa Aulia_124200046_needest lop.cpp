#include <iostream>
using namespace std;
int main()
	{
	int p,l,i,j,tinggi,bilangan;
	int menu;
	cout<<"Gambar Bangun Datar======="<<endl
	;cout<<"1. Kotak bolong "<<endl
	;cout<<"2. segitiga     "<<endl
	;cout<<"Pilih : 	       "<<endl 
	;cin>>menu;
	switch (menu) {
	
		case 1:
		
	
		cout<<"masukkan panjang= 	";
		;cin>>p;
		;cout<<"masukkan lebar=		";
		;cin>>l;
	
		for (i=1;i<=p;i++){
		for (j=1;j<=l;j++){
			if (i==1||i==p||j==1||j==l)
			cout<<" *";
		else cout<<"  ";
	
		}
		cout<<""<<endl 
		;}
	break;

		case 2:
			int i,j;
 
    	cout << "Masukkan tinggi= ";
    	cin >> tinggi;
 
    	for (i=1;i<=tinggi;i++) {
        	bilangan=i;
		for (j=1;j<=i;j++) {
            cout << " "<<bilangan;
        	bilangan= bilangan+tinggi-j;
			;}
        	cout << endl;
    	}
  
    	return 0;
}

















}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
























