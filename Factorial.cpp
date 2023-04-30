#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b=1;
	cout<<"Enter number: ";
	cin>>a;
	for(int i=a;i>=1;i--){
		b = b*i;
	}
	cout<<a<<"! = "<<b;
	getch();
}
