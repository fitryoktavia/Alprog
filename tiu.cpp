 #include <iostream>
 #include <math.h>
using namespace std;
int main(){
	int TKP;
	int TWK;
	int TIU;
	int total_minimal;
	cout<<"masukan nilai TKP : ";cin>>TKP;
	cout<<"masukan nilai TWK : ";cin>>TWK;
	cout<<"masukan nilai TIU : ";cin>>TIU;
	cout<<"total minimal : ";cin>>total_minimal;
	cout<<"\n";
	
	if (TKP>=140, TWK>=100, TIU>=80, total_minimal>=320){
		cout<<"SELAMAT ANDA LULUS";
	}else{
	cout<<" ANDA TIDAK LULUS ";
	}
}
