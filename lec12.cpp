#include<iostream>
using namespace std;
int main(){
//	int psd;
//	cout<<"Enter the password and it must be greatter than 6 numbers=";
//	cin>>psd;
//	while(psd<999999){
//		cout<<"you Enterded the wrong Psd,re enter it=";
//		cin>>psd;
//		
//	}
//	cout<<"PSD is correct";
	int password=0;
	
	do{
		cout<<"Enter the psd=";
		cin>>password;
	}
	while(password<999999);
	cout<<"Psd is correct";
}

