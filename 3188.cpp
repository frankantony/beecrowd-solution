#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

const int ALPHABET_SIZE = 10;

struct TrieNode
{
	struct TrieNode *children[ALPHABET_SIZE];
	bool isEndOfWord;
};

struct TrieNode *getNode(void)
{
	struct TrieNode *pNode = new TrieNode;

	pNode->isEndOfWord = false;

	for (int i = 0; i < ALPHABET_SIZE; i++)
		pNode->children[i] = NULL;

	return pNode;
}

void insert(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - '0';
		if (!pCrawl->children[index])
			pCrawl->children[index] = getNode();

		pCrawl = pCrawl->children[index];
	}

	pCrawl->isEndOfWord = true;
}

bool isPrefix (struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - '0';
		if (!pCrawl->children[index])
			return false;

		pCrawl = pCrawl->children[index];
	}

	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t) {
		int n;
		cin >> n;
		bool fail = false;
		struct TrieNode *root = getNode();
		string keys[n];
		for (int i = 0; i < n; i++)
			cin >> keys[i];	
		sort(keys, keys + n);

		for (int i = n-1; i >= 0; i--) {
			if (isPrefix (root, keys[i]))
				fail = true;
			insert(root, keys[i]);
		}

		if (fail)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		t--;
	}
	return 0;
}

