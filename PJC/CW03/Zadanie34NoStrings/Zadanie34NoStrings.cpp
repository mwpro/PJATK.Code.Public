#include "stdafx.h"
#include <iostream>
using namespace std;

char getKeyForNthChar(char* key, int keyLength, int charNumber)
{
	if (charNumber < keyLength)
		return key[charNumber];

	do
	{
		charNumber -= keyLength;
	} while (charNumber >= keyLength);

	return key[charNumber];
}

char* xorEncrypt(char* input, int inputLength, char* key, int keyLength)
{
	char* output = new char[inputLength]();
	
	for (int i = 0; i < inputLength; i++)
	{
		output[i] = input[i] ^ getKeyForNthChar(key, keyLength, i);
	}

	return output;
}

char* xorDecrypt(char* input, int inputLength, char* key, int keyLength)
{
	return xorEncrypt(input, inputLength, key, keyLength); // :-)
}

int main(int argc, char *args[])
{
	char* key = (argc > 2) ? args[1] : "kotyToZlo"; // get key from args or use hardcoded one if not present
	int keyLength = (argc > 2) ? args[2][0] - '0' : 9;

	char* input = "Ala ma kota";
	int inputLength = 11;

	char* encrypted = xorEncrypt(input, inputLength, key, keyLength);

	cout << encrypted << " " << xorDecrypt(encrypted, inputLength, key, keyLength) << endl;

	return 0;
}

