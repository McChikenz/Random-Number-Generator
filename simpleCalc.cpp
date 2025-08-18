#include<iostream>
using namespace std;

void myFunc(int sum);

int main() {
	int a;	
	cout << "Enter a value" << endl << endl;
	myFunc(&a);
	return 0;


}


int myFunc(int sum) {
        cout << "this is a func 1" << endl;
	cout << "this is a sum" + sum << end; 
}
