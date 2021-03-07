#include "Text.h"
#include "MyString.h"

Text::Text(int size) {
	_size = size;
	_text = new MyString[_size];
}

void Text::AddString(std::string string) {
	_text[_last_string].SetString(string);
	_last_string++;
}

void Text::RemoveString(int num) {
	for (int i = num; i < _size - 1; i++) {
		_text[i] = _text[i + 1];
	}
	_size--;
}

std::string Text::GetText() {
	std::string text;
	for (int i = 0; i < _size; i++) {
		text += _text[i].GetString();
		text += "\n";
	}
	return text;
}

void Text::FindAndRemoveString(std::string str) {
	for (int i = 0; i < _size; i++) {
		std::string current = _text[i].GetString();
		if (current.find(str) != -1) {
			RemoveString(i);
		}
	}
}

void Text::ClearText() {
	for (int i = 0; i < _size; i++) {
		_text[i].DeleteString();
	}
	_size = 0;
}

int Text::GetLengthOfLongest() {
	int len = 0;
	for (int i = 0; i < _size; i++) {
		if (_text[i].GetLength() > len) {
			len = _text[i].GetLength();
		}
	}
	return len;
}

void Text::SetUpperForFirstLetters() {
	for (int i = 0; i < _size; i++) {
		_text[i].SetUpperFirst();
	}
}