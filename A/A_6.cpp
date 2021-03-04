#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
	cout << "Number of command-line arguments: " << argc << endl;
	for (int i = 0; i < argc; i++) {
		cout << "Argument #" << i << ": _" << argv[i] << "_\n";
	}
	return 0;
//	Number of command-line arguments: 4
//	Argument #0: _A6.exe_
//	Argument #1: _first_
//	Argument #2: _second_
//	Argument #3: _3rd_
}
