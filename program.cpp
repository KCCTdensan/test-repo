#include<iostream>
using namespace std;

int addition(int a, int b) {
	return a + b  ;
}

int subtraction(int a, int b) {
	return;
}

int multiplication(int a, int b) {
	return;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << addition(x, y) << subtraction(x, y) << multiplication(x, y) << endl;
}