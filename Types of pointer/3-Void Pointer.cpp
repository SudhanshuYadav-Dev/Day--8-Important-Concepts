#include<iostream>
using namespace std;

int main(){
	int i=5;
	void *iptr=&i;
	cout<<"Address of i-> "<<&i<<endl;
	cout<<"Address of i-> "<<iptr<<endl;
	char ch='b';
	void *chptr=&ch;
	cout<<"Address of ch-> "<<chptr<<endl;
}