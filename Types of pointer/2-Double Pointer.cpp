#include<iostream>
using namespace std;

int main(){
	int i=5;
	int *p=&i;//Single Pointer
	int **p2=&p;//Double Pointer
	cout<<"Address of Single Pointer-> "<<&p<<endl;
	cout<<"Address that Double Pointer Contains-> "<<p2<<endl;
}