#include <iostream>
using namespace std;

int main() {
	int number=0;
	int sum=0;
do{
	sum +=number;
cout << "Digitar numero*(SI ES NEGATIVO TERMINA): ";
cin>>number;
}
while (number >= 0);
cout << "\n La suma es " << sum << endl;
return 0;
}
