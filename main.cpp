#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> msg = {"Hello", "world!", "from", "main.cpp", "in", "VsCode", "C++"};
	cout << "hello world!\n";

	for (const string& s : msg) {
		cout << s << "\n";
	}

	cout << endl;

	return 0;
}

