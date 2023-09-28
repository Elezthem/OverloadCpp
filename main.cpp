#include <iostream>
#include <string>

using namespace std;

void print(string word) {
	cout << word << endl;
}

void print(int word) {
	cout << word << endl;
}

void myfunc(int a, int b) {
	int res1 = a + b;
	print(res1);
}

void myfunc(int a, int b, int y) {
	int res1 = a + b + y;
	print(res1);
}

int main() {
	setlocale(LC_ALL, "RU");
	
	print("youtube");
	myfunc(3, 3);
	myfunc(5, 5, 5);

	return 0;
}