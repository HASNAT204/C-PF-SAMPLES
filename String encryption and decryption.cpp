#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()

{	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };
	cout <<"alphabets length:"<<alphabet.length()<<endl;
	cout <<"key length:"<< key.length()<<endl;
	string secret_message{};
	cout << "enter your secret message" << endl;
	getline(cin, secret_message);
	string encrypted_message{};
	cout << ".....encrypted message......" << endl;
	for (char c : secret_message)
	{
		size_t position = alphabet.find(c);
		if (position != string::npos)
		{
			char new_char{ key.at(position) };
			encrypted_message += new_char;
		}
		else
		{

			encrypted_message += c;

		}
		

	}

	cout << " \nencrypted message :" << encrypted_message << endl;
	cout << endl;
	string decrypted_message{};
	cout << "....decrpyted message...." << endl;

	for (char c : encrypted_message)
	{
		size_t position = key.find(c);
		if (position != string::npos)
		{
			char new_char{ alphabet.at(position) };
			decrypted_message += new_char;
		}
		else
		{

			decrypted_message += c;

		}
	}

		cout << "decrypted message :" << decrypted_message << endl;
		cout << endl;

		system("pause");
	}