#include <iostream>
#include<string>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin >> n;
	string words[n];
	unordered_map<char, bool> map;

	for (int i = 0; i < n; i++) {
		cin >> words[i];
		map.insert({ words[i][0], true });
	}

	bool find = false;
	for (int i = 0; i < n; i++) {
		string word = words[i];
		int count = 0, length = word.size();
		for (int j = 0;j < length;j++)
			count += map[word[j]] ? 1 : 0;
		if (count == length) {
			find = true;
			break;
		}
	}
	if (find)
		cout << "Y\n";
	else	
		cout << "N\n";
	return 0;
}

