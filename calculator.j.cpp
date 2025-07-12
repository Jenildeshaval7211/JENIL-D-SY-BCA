#include <iostream>
using namespace std;

int main() {
    int x, y;
    char op;

    cout << "Enter First Number: ";
    cin >> x;
    cout << "Enter Second Number: ";
    cin >> y;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

if(op == '+')
{
   cout<<x+y;	
}
else if(op == '-')
{
	cout<<x-y;
}
else if(op == '*')
{
	cout<<x*y;
}
else if(op == '/')
{
	if(y!=0){
	cout<<x/y;
	}
	else{cout<<"error";}
}
 return 0;
}




