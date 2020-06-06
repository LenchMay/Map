#include <iostream>
#include <map>
#include <cstring>

using namespace std;

map<char, int> name(string word) {
	std::map<char, int> check; //char - буква, int - сколько раз она встретилась в слове
	for (int i = 0; i < word.length(); ++i) {
		++check[word[i]];
	}
	return check;
}

int main() {
	string word1, word2;
	cin >> word1 >> word2;

	cout << ((name(word1) == name(word2)) ? "YES" : "NO" )<<endl;

	return 0;
}