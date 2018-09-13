#include <iostream>
using namespace std;

int Gcd (int y, int z)

{
if (z==0)
	return y;
else
	return (Gcd(z,y%z));
}

int main(){
int y,z;

cout<<"enter number:"<< endl;
cin>>y;

cout<<"enter another number:"<< endl;
cin>>z;

cout<<"the greatest common divisor is:"<< Gcd(y,z)<< endl;
}

