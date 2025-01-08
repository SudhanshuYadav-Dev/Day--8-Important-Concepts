#include<iostream>
using namespace std;
inline int Sum(int a, int b){
	return a+b;
}
int main(){
	int a=10, b=20;
	int ans=0;
	
	ans=Sum(a,b);
	cout<<ans<<endl;
	
	a=a+10;
	b=a+20;
	ans=Sum(a,b);
	cout<<ans<<endl;
	
}