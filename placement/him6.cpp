// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
using namespace std;

// This function receives text and shift and
// returns the encrypted text
string CaesarCipher(string str, int num)
{
	string result = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			result += char(int(str[i] + num- 65) % 26 + 65);
		else if(str[i] >= 'a' && str[i] <= 'z')
			result += char(int(str[i] + num- 97) % 26 + 97);
        else
            result += str[i];
	}
	return result;
}

// Driver program to test the above function
int main()
{
	string text = "Jay Nen dra Shar%ma";
	int s = 4;
	cout << "Text : " << text;
	cout << "\nShift: " << s;
	cout << "\nCipher: " << CaesarCipher(text, s);
	return 0;
}
