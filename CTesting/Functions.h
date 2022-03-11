#pragma once
void log(string message) {
	cout << message + "\n";
}

string format(int& number) {
	return "[" + to_string(number) + "]";
}

bool IsEven(int number) {
	if (number % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

// Python had too big of an influence on me...
string input(string message) {
	string Converter = "";
	cout << message;
	cin >> Converter;
	return Converter;
}
