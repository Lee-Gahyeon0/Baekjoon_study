#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string a;
	int result = 0;
	cin >> n >> a;

	for (int i = 0; i < n; i++) {
		result += a[i]- '0';
	}
	cout << result;
}