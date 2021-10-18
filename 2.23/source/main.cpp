#include <iostream>
using namespace std;

int main()
{
	int a, c, b,max,min;
	cin >> a >> b >> c;

	max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	 min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}

	cout << "MAX¡G" << max << endl<<"MIN¡G"<<min<<endl;
	
	return 0;
}