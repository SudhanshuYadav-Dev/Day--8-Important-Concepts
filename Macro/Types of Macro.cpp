#include<iostream>
using namespace std;

//1-Object-Like MACRO
#define PI 3.14 

//2-Function-Like MACRO
#define Sqrt(a)(a*a)

//3-Multiline MACRO
#define PRINT_RECTANGLE(width, height)                     \
    for (int i = 0; i < height; i++) {                     \
        for (int j = 0; j < width; j++) {                  \
            cout << "*"<<" ";                              \
        }  cout<<endl;                                                                                      \
    }  
    
//4-Chain MACRO
//parent Macro
#define student 25
//child Macro
#define present student
int main(){
	
	//1-Object-Like MACRO
	int r=5;
	double area=PI*r*r;
	cout<<"Area is-> "<<area<<endl;
	
	//2-Function-Like MACRO
	int M=10;
	cout<<"Sqrt is-> "<<Sqrt(M)<<endl;
 
    //3-Multiline MACRO
    PRINT_RECTANGLE(3,3);
	
	
	//4-Chain MACRO
	cout<<"Prensent Student is-> "<<present<<endl;
}