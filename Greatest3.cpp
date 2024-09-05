#include <iostream>
using namespace std;

int main(){
	int Num1, Num2;
	cout << "Enter Your First Number: ";
	cin >> Num1;
	cout << "Enter Your Second Number: ";
	cin >> Num2;
	
	if( Num1 > Num2 ){
		cout << "Greater Number Is: " << Num1 << "\n";
		cout << Num1 << " is Greater Than " << Num2;
	}
	else{
		cout << "Greater Number Is: " << Num2 << "\n";
		cout << Num2 << " is Greater Than " << Num1;
	}
	
	return 0;
}
