#include <iostream>
using namespace std;

int main(){
	
	/*
	Muhammad Zidan Pasya
	2117051070
	*/
	
	//tipe data
	int Nilai;
	
	//input
	cin >> Nilai;
	
	if (Nilai < 50){
		cout << "F" << endl;
	}
	else if (Nilai < 56){
		cout << "E" << endl;
	}
	else if (Nilai < 61){
		cout << "D" << endl;
	}
	else if (Nilai < 66){
		cout << "C" << endl;
	}
	else if (Nilai < 71){
		cout << "B" << endl;
	}
	else if (Nilai < 76){
		cout << "B+" << endl;
	}
	else {
		cout << "A" << endl;
	}
	return 0;
}
