#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

struct data {
	int order;
	int num;

	data() : order(0), num(0) {}
};

bool CompareByOrder(data a, data b) { return a.order < b.order; }
bool CompareByNum(data a, data b) { return a.num < b.num; }

int main() {
	vector<data> arr;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		data d;
		cin >> d.num;
		d.order = i;
		arr.push_back(d);
	}

	std::sort(arr.begin(), arr.end(), CompareByNum);

	int now, index = 0;
	now = arr.begin()->num;

	for (vector<data>::iterator iter = arr.begin(); iter != arr.end(); iter++) {		
		if (iter->num > now) {
			index++;
			now = iter->num;
		}
		iter->num = index;
	}

	std::sort(arr.begin(), arr.end(), CompareByOrder);

	for (vector<data>::iterator iter = arr.begin(); iter != arr.end(); iter++) {
		cout << iter->num << " ";
	}
	
	return 0;
}