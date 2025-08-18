#include<iostream>
#include<string>
#include<cmath>
using namespace std;

/**
 *	Using LCG(Linear Congruential generators) to generate psuodo-random number
 *	(X subscrpt n + 1 = (aX subscript n + c) (mod m)
 *
 *	Def.
 *	X subcript n + 1 = next pseudo random number in seq
 *	X subscript n = current rand number (seed for the first number)		
 *	a = multiplier
 *	c = inc
 *	m = modulus
 *
 */

unsigned long long state =time(nullptr); //seed with current time

//generate next rand Num
 int randNum(){
	  state = (10 * state);
	  return static_cast<unsigned int>(state >>32) ; //bitwise shift by 16 
				 //Note: Try adding it with (state << 8) 
}
// Generates [0, max] numbers
double randFloat(int max){

	return randNum() % (max + 1);
}

int main(){

	cout << "This program generate seed for Rand Number" << endl;
	for(int i= 0; i < 10; i++){
	  cout << randNum() << endl;
	 }

	cout << endl;
	cout << "Max number is 100 for double number" << endl;
	int maxVal = 100;
	for(int i=0; i < 10;i++){
			double newRandVal = abs( randFloat(100));
			cout<< newRandVal<< endl;
	}
	return 0;
}
