#include<iostream>
#include<windows.h>
using namespace std;

int main() {
	char choice = 'e';
	while (choice != 'q') {
		Beep(rand() % 1000, rand() % 1000);
		cout << "press any key, q to quit" << endl;
		cin >> choice;
		cout << "you typed " << choice << endl;

	}cout << endl;
	int num = 6;
		while (num < 36) {
			cout << num << " ";
			num+=3;
		}
}
