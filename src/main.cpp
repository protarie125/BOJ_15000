#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto s = string{};
	cin >> s;

	transform(s.begin(), s.end(), s.begin(),
		[](const auto& c) { return toupper(c); });

	cout << s;

	return 0;
}