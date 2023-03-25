#include <iostream>
using namespace std;
main() { 
	char jawab; 
	cout << "Yakin (y/t) : "; 
	cin >> jawab; 
	if (jawab=='Y' || jawab=='y') 
		cout <<" OK, anda yakin" << endl; 
	else 
		cout <<" Maaf, anda tidak yakin.."<<endl; 
} 
