#include<iostream>
using namespace std;
int getSum(int *arr, int n,int start=0){
	int sum=0;
	for(int i=start; i<n; i++){
		sum+=arr[i];
	}
	return sum;
}
int main(){
	int arr[5]={1,2,3,4,5};
	cout<<getSum(arr,5)<<endl;
	cout<<getSum(arr,5,3)<<endl;
}