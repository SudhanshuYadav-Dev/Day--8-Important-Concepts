#include<iostream>
using namespace std;

int G_Value=7;//Global Variable
void Afun(){
   cout<<G_Value<<" in Afun"<<endl;	
   G_Value++;
}
void Bfun(){
	cout<<G_Value<<" in Bfun"<<endl;	
}
int main(){
	Afun();
	Bfun();
	cout<<G_Value<<" in main fun"<<endl;
	int i=5;
	{
		int i=2;//Local Variable
		cout<<"Value of i-> "<<i<<endl;//2
	}
	cout<<"Value of i-> "<<i<<endl;//5
}