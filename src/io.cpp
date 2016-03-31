// my 1st program in C++

#include "io.hpp"

int readFile(string inFile) // reading a text file
{
	cout << "STARTED READING FILE" << endl;
	string line;
	ifstream fin(inFile);
	if (fin.is_open())
	{
		while (getline(fin, line))
		{
			cout << line << endl;
		}
		fin.close();
	}
	else cout << "Unable to open file" << endl;

	cout << "STOPPED READING FILE" << endl;
	getchar();
	return 0;
}

int copyFile(string inFile, string outFile) // copying a text file
{
	cout << "STARTED COPYING FILE" << endl;
	string line;
	ifstream fin(inFile);
	ofstream wout(outFile);
	if (fin.is_open() && wout.is_open())
	{
		while (getline(fin, line))
		{
			cout << line << endl;
			wout << line << endl;
		}
		wout.close();
		fin.close();
	}

	else cout << "Unable to open file" << endl;

	cout << "STOPPED COPYING FILE" << endl;
	getchar();
	return 0;
}

int writeFile(string outFile, string line) // writing a text file
{
	cout << "STARTED WRITTING FILE" << endl;
	ofstream wout(outFile);
	if (wout.is_open())
	{
		cout << line << endl;
		wout << line << endl;
		wout.close();
	}

	else cout << "Unable to open file" << endl;

	cout << "STOPPED WRITTING FILE" << endl;
	getchar();
	return 0;
}

int editFile(string inFile, string outFile, string find, string replace, bool IsReplacing) // editing a text file
{
	cout << "STARTED EDITING FILE" << endl;
	string line;
	ifstream fin(inFile);
	ofstream wout(outFile);
	if (fin.is_open() && wout.is_open())
	{
		while (getline(fin, line))
		{
			if (line == find && IsReplacing == true)
			{
				cout << "(EDITED) [" << line << "] to [" << replace << "]" << endl;
				wout << replace << endl;
			}
			else if (line == find && IsReplacing == false) {
				cout << "(EDITED) [" << line << "] to [" << replace << endl << replace << "]" << endl;
				wout << line << endl << replace << endl;
			}
			else
			{
				cout << line << endl;
				wout << line << endl;
			}
		}
		wout.close();
		fin.close();
	}

	else cout << "Unable to open file" << endl;

	cout << "STOPPED EDITING FILE" << endl;
	getchar();
	return 0;
}
