#include<iostream>
using namespace std;

int addition(int a, int b) {
	return a + b;
}

int subtraction(int a, int b) {
	return a - b;
}

int multiplication(int a, int b) {
	int c;
	c = a * b;
		return c;
}

int division(int a, int b) {

	int ans;
	ans = a / b;
	return ans;
}

void testA() {
	cout<<3+3+4<<endl;
	return;
}

void testB() {
	string B;
	cin >> B;
	return B;
}

void testC() {

}

void testD() {
	cout << "testD" << endl;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << addition(x, y) << subtraction(x, y) << multiplication(x, y) << endl;
}