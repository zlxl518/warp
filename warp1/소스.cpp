#include <iostream>
using namespace std;

int main() {
	
	/*for (int x = 0; x < 12; ++x) { //원초적 방법
		cout << "□";
	}
	cout << endl;
	for (int a = 0; a < 22; ++a) {
		cout << "□";
		for (int b = 0; b < 10; ++b)
		{
			cout << "  ";
		}
		cout << "□"<<endl;
	}
	for (int x = 0; x < 12; ++x) {
		cout << "□";
	}*/

	for (int jul = 0; jul < 24; ++jul) {  //if문
		if ((jul == 0) || (jul == 23)) {
			for (int x = 0; x < 12; ++x) {
				cout << "□";
			}
			cout << endl;
		}
		else {
			for (int x = 0; x < 12; ++x) {
				if ((x == 0) || (x == 11))cout << "□";
				else cout << "  ";
			}cout << endl;
		}
	}
	return 0;
}