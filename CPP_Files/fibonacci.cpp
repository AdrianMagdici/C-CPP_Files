#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	char alegere;
	cout << "alege-ti varianta\n";
	cout << "[1]   introduce-re numar de valori in sir\n";
	cout << "[2]   introduce-re cea mai apropiata valoare mai mica decat input\n";
	cin >> alegere;
	if (alegere == '1') {
		unsigned long long int x;
		unsigned long long int y = 0;
		unsigned long long int z = 1;
		int numarValori;
		cout << "cate valori din sir sa fie afisate:  ";
		cin >> numarValori;		//din cate valori sa fie sirul Fibonacci
		if (numarValori == 1) {
			cout << "0\n";
		}
		else if (numarValori == 2) {
			cout << "0\n1\n";
		}
		else {
			for (int i = 0; i < numarValori; ++i) {
				x = y;
				y = z;
				z = x+y;
				cout << x << endl;
			}
		}
	}
	else if (alegere == '2') {
		unsigned long long int x;
		unsigned long long int y = 0;
		unsigned long long int z = 1;
		int input;
		cout<< "input:   ";
		cin >> input;
			while (x <= input) {
				x = y;
				if (x > input) {
					break;
				}
				y = z;
				z = x+y;
				cout << x << endl;
			}
			
	}
}
