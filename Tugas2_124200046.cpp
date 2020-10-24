#include <iostream>

using namespace std ;
int main()
{
	int usia,usia2,usia3,usia4,bantuan,bantuan1,bantuan2,bantuan3,bantuan4,total;
	
	cout<<"Usia Ayah :" ; cin>>usia ;
	;if (usia<=12)
	{
		bantuan =15000*30;
	}
	else if (usia>12&&usia<=20)
	{
		bantuan =20000*30;
	}
	else if (usia>20)
	{
		bantuan =30000*30;
	}
	
	cout<<"bantuan yang didapat"<<bantuan<<endl;
	
	cout<<"Usia ibu " ; cin>>usia2 ;
	if (usia2<=12)
	{
		bantuan2 =15000*30;
	}
	else if (usia2>12&&usia2<=20)
	{
		bantuan2 =20000*30;
	}
	else if (usia2>20)
	{
		bantuan2 =30000*30;
	}
	
	cout<<"bantuan yang didapat"<<bantuan2<<endl;
	
	cout<<"Umur Anak 1 : " ; cin>>usia3 ;
	if (usia3<=12)
	{
		bantuan3 =15000*30;
	}
	else if (usia3>12&&usia3<=20)
	{
		bantuan3 =20000*30;
	}
	else if (usia3>20)
	{
		bantuan3 =30000*30;
	}
	
	cout<<"bantuan yang didapat"<<bantuan3<<endl;
	
	cout<<"Umur Anak 2 : " ; cin>>usia4 ;
	if (usia4<=12)
	{
		bantuan4 =15000*30;
	}
	else if (usia4>12&&usia4<=20)
	{
		bantuan4 =20000*30;
	}
	else if (usia4>20)
	{
		bantuan4 =30000*30;
	}
	
	cout<<"bantuan yang didapat"<<bantuan4<<endl;
	
	total= bantuan+bantuan2+bantuan3+bantuan4
	
	;cout<<"Bantuan untuk satu bulan = Rp."<<total<<endl ;
	
	return 0 ;
	
}
