#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <tuple>
#include <climits>
#include <functional>
#include <future>
#include <list>
#include <forward_list>
#include <limits>
#include <mutex>
#include <thread>
#include <any>
#include <iterator>
using namespace std;

template <typename T>
void print(T t) {
	for (auto i : t) {
		cout << i << ' ';
	}
	cout << '\n';
}

int last_digit(unsigned long long n) {
	while (n % 10 == 0) {
		n /= 10;
	}
	return n % 10;
}

unsigned long long simplify(unsigned long long n) {
	while (n % 10 == 0) {
		n /= 10;
	}
	return n % 10000;
}

int main()
{
	unsigned long long ans = 1;
	int* all = (int*) malloc(1000001 * sizeof(int));
	all[0] = 1;
	all[1] = 1;
	for (int i = 2; i <= 1e6; i++) {
		ans *= i;
		ans = simplify(ans);
		all[i] = last_digit(ans);
	}
	
	int input;
	while (cin >> input) {
		if (input == 0) {
			break;
		}
		cout << all[input] << '\n';
	}
}