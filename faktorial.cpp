#include <iostream>
using namespace std;
int main(){
	int n=1, jumlah_faktorial;
	cout<<"masukan faktorial bilangan : ";
	cin>>jumlah_faktorial;
	cout<<jumlah_faktorial<<"!=";
	for(int i=jumlah_faktorial;i>=1;i--){
		n=n * i;
			
			if (i==1){
				cout<<i;
			}else{
				cout<<i<<"*";
			}
	}
		cout<<"="<<n;
}
