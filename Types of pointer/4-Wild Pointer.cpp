#include<iostream>
using namespace std;

int main(){
	int *ptr;//Wild Pointer
	int a=5;
	ptr=&a;
	cout<<*ptr<<endl;
	*ptr=4;
	cout<<*ptr<<endl;
}