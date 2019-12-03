#include <iostream>
#include <cmath>
using namespace std;  
float volumebalok (int p, int l, int t){
	int balok= p*l*t;
	return balok;
}
float volumekubus (int sisi){
	int kubus=pow(sisi,3);
	return kubus;
}
float volumekerucut (int r, int tinggi, float phi){
	float kerucut= 0.3 * pow(r,2) * phi *tinggi;
	return kerucut;

}
int main (){
	int p,l,t, balok;
	
	cout<<" \n VOLUME BALOK \n";
	cout<<"Masukkan P : ";cin>>p;
	cout<<"Masukkan L : ";cin>>l;
	cout<<"Masukkan T : ";cin>>t;
	balok=volumebalok (p, l, t);
	cout<<"Volume Persegi = "<<balok<<endl;
	
	int sisi, kubus;
	cout<<"\n VOLUME KUBUS \n";
	cout<<"Masukkan Panjang Sisi : ";cin>>sisi;
	kubus=volumekubus (sisi);
	cout<<"Volume Kubus = "<<kubus<<endl;


	int r,tinggi;
	float phi, kerucut;
	cout<<"\n  VOLUME KERUCUT \n";
	cout<<"Masukkan r : ";cin>>r;
	cout<<"Masukkan T : "; cin>>tinggi;
	phi=3.14;
	kerucut=volumekerucut (r,t,phi);
	cout<<"Volume Kubus = "<<kerucut<<endl;
		
}

