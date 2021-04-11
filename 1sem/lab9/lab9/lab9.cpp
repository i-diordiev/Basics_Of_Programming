#include <iostream>
#include <string>
#include <vector>

using namespace std;

void FindAndRemoveWord(string& str, string word) {
	int PosOfWord = str.find(word);
	str.replace(PosOfWord, 0, "");
}

int main() {
	string string1, string2;
	cout << "Type first string:";
	cin >> string1;
	cin.ignore(32767, '\n');
	cout << "Type second string:";
	cin >> string2;
	vector<string> words;
	int WordCount = 0;
	string Word = "";
	for (int i = 0; i < string2.length(); i++) {
		if (string2[i] == ' ') {
			words[WordCount] = Word;
			Word = "";
			WordCount++;
		}
		else {
			Word += string2[i];
		}
	}
	for (int i = 0; i < WordCount; i++) {
		int PosOfWord = string1.find(words[i]);
		while (PosOfWord != 1) {
			FindAndRemoveWord(string1, words[i]);
		}
	}
	cout << "Final string: " << string1 << endl;
	return 0;
}