#include <iostream>
using namespace std;

int main() {
	int pan[12][24] = { 0 };
	int inputx, inputy;
	for (int i = 0; i < 24; ++i) {
		for (int j = 0; j < 12; ++j) {
			if ((i == 0) || (i == 23)) {
				pan[j][i] == 1;
			}
			else if ((j == 0) || (j == 11)) {
				pan[j][i] = 1;
			}
			else pan[j][i] = 0;
		}
	}
	while (1) {
		cin >> inputx >> inputy;
		pan[inputx][inputy] = 1;
		for (int y = 0; y < 24; ++y) {
			for (int x = 0; x < 12; ++x) {
				if (pan[x][y] == 1)
				{
					cout << "¡à";
				}
				else cout << "  ";
				//cout << endl;  - ½Ç¼ö
			}
			cout << endl;
		}
	}
	
	return 0;
}