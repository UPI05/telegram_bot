#include <bits/stdc++.h>
using namespace std;
string tmp;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("list.txt", "r", stdin);
	freopen("list2.txt", "w", stdout);
	vector<string> dt;
	while (cin >> tmp) {
		dt.push_back(tmp);	
	}
	if (!dt.size()) {
		// Files run out!
		return 0;
	}
	srand(time(NULL));
	int imgId = rand() % dt.size();
	dt.erase(dt.begin() + imgId);	
	for (int i = 0; i < dt.size(); i++) cout << dt[i] << endl;
	system("mv list.txt list3.txt");
	system("mv list2.txt list.txt");
	system("mv list3.txt list2.txt");
	
	system(("./sendPhoto " + dt[imgId]).c_str());

	return 0;
}
