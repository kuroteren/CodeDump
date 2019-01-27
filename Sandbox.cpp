// Sandbox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <bitset>
#include <fstream>
#include <stdio.h>
#include <cstdio>
#include <math.h>
#include <ctime>
#include <thread>
#include <chrono>
#include <float.h>
#include <filesystem>
#include <vector>

using namespace std;
using namespace std::experimental::filesystem;

//bool find_In_Directory(string in, vector<path> list, path * pathway);
//bool find_In_Directory(path in, path * pathway);

int main() {

	string message, input;

	do {
		input.clear();

		getline(cin, input, '\n');
		message.append(input + "\n");
	} while (!input.empty());

	cout << "\033[2J\033[1;1H";
	cout << "Message entered is:" << endl << message << endl;
	system("pause");
}
	/*
	path * pathTest, * newPath;
	string entry;
	vector<path> holder;

	pathTest = new path("C:/");

	do {
		entry.clear();
		cin.clear();
		cout << "Current directory path: " << (*pathTest) << endl;

		for (auto& f : directory_iterator((*pathTest))) {
			holder.push_back(f.path());
			cout << ((f.path().has_extension()) ? "FILE" : "DIR") << f.path().extension() << "\t|  " << f.path().stem() << "\t|root dir: " << f.path().root_directory() << "\t|root path: " << f.path().root_path() << "\t\t|root name: " << f.path().root_name() << endl;
		}

		cout << "To exit, press enter / .. to go back up a directory" << endl << "Please enter filename or directory path(Full or partial): ";
		getline(cin, entry);

		newPath = new path(entry);

		if (newPath->stem() == "..") {
			pathTest = new path(pathTest->parent_path());
		}
		else if (newPath->root_path() == (*pathTest).root_path()) {
			pathTest = new path((*newPath).relative_path());
		}
		else {
			for (vector<path>::iterator it = holder.begin(); it != holder.end(); it++) {
				if (it->stem() == newPath->relative_path().stem())
				{
					*pathTest /= it->stem();
					break;
				}
			}
		}

		cout << (*pathTest).relative_path() << endl;
		cout << (*newPath).relative_path() << endl;

		system("pause");
		
	} while (entry != "");
}
*/
/*
bool find_In_Directory(string in, vector<path> list, path * pathway) {
	path tempHold(in);
	path followOn;
	
	for (path::iterator itr = tempHold.begin(); itr != tempHold.end(); ++itr) {
		for (path::iterator pit = (*pathway).begin(); pit != (*pathway).end(); pit++, itr++) {
			if (pit == itr)
				continue;
			else
				return false;
		}
		for (vector<path>::iterator it = list.begin(); it != list.end(); it++) {
			if (itr == it && itr == --tempHold.end())
				return true;
			else if (itr == it) {
				for (path::iterator nxt = itr; nxt != tempHold.end(); nxt++) {
					//followOn /= (*nxt);
				}
				//*pathway /= (*it);
				//find_In_Directory(followOn, pathway);
			}
		}
	}
}
*/
/*
bool find_In_Directory(path in, path * pathway) {
	vector<path> list;
	path followOn;

	for (auto& f : directory_iterator(in)) {
		list.push_back(f.path());
		cout << ((f.path().has_extension()) ? "FILE" : "DIR") << "\t|  " << f.path().stem() << endl;
	}

	for (path::iterator pit = in.begin(); pit != in.end(); ++pit) {
		for (vector<path>::iterator it = list.begin(); it != list.end(); it++) {
			if (it == pit && pit != in.end())
				return true;
			else if (it == it) {
				for (path::iterator nxt = in.begin()++; nxt != in.end(); nxt++) {
					followOn /= *nxt;
				}
				*pathway /= it;
				find_In_Directory(followOn, pathway);
			}
		}
	}
}
*/

	/*
	Random Key Generator
	

	const char charTable[36] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	string keyList[10];
	int keyLengthList[10];

	for (int q = 0; q < 10; q++)
	{

		srand(clock() * 2);

		string key;
		int keyLength = 10 + (rand() % 91);
		int gen;

		for (int i = 0; i < keyLength; i++)
		{
			cout << "\033[2J\033[1;1H";
			cout << "Generating key item #" << i + 1 << "/" << keyLength << endl;
			cout << (float)((((float)i + 1) / (float)keyLength) * 100) << "% Complete." << endl;


			srand((int)clock());
			gen = rand() % 36;

			key += charTable[gen];

			this_thread::sleep_for(chrono::milliseconds(50));
		}

		cout << "Key Length is: " << keyLength << endl;
		cout << "Key:" << endl << key << endl;

		keyLengthList[q] = keyLength;
		keyList[q] = key;

		
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "Key " << i << ":" << endl << "Length: " << keyLengthList[i] << endl << "Key: " << keyList[i] << endl << endl;
	}

	system("pause");

	/*
	Math reversion test
	
	int w, x, y, z;
	int a, b, c, d;
	int s = 7;

	cout << "Enter an int: ";
	cin >> w;

	cout << "Enter another int: ";
	cin >> x;


	cout << "Enter another int: ";
	cin >> y;

	cout << "Enter another int: ";
	cin >> z;

	cout << "Enter 'x': ";
	cin >> s;

	a = (w*pow(s, 2));
	cout << "Phase 1: " << a << endl;
	a -= (x*s);
	cout << "Phase 2: " << a << endl;
	a += ((y*s)*(z*pow(s, 2)));
	cout << "Phase 3: " << a << endl;

	cout << "After equation value = " << a << endl;

	b = cbrt((a / (y*z)));
	c = (b / x);
	d = sqrt(c / w);

	cout << "Value b = " << b << endl;
	cout << "Value c = " << c << endl;
	cout << "Value d = " << d << endl;

	system("pause");

	*/

	/* 
	
	File Management and bitset saving test


	bitset<12> b, d, z;
	char a, c;
	char * q, * e, * y;
	char * w;
	streampos size;

	cout << "Enter a character: ";
	cin >> a;

	b = bitset<12>(a);

	cout << b.to_string() << " | " << b.to_ulong() << " | " << (char) b.to_ulong() << endl;

	cout << "Enter a character: ";
	cin >> c;

	d = bitset<12>(c);

	cout << d.to_string() << " | " << d.to_ulong() << " | " << (char) d.to_ulong() << endl;

	z = bitset<12>(b.to_ulong() + d.to_ulong());

	cout << z.to_string() << " | " << z.to_ulong() << " | " << (char)z.to_ulong() << endl;

	bitset<4> r;
	r[1] = 1;
	r[3] = 1;

	cout << z.to_string() << " | " << z.to_ulong() << " | " << (char)z.to_ulong() << endl;

	cout << r.to_string() << " | " << r.to_ulong() << " | " << (char)r.to_ulong() << endl;
	
	bitset<8> j = bitset<8>('q');

	cout << j.to_string() << " | " << j.to_ulong() << " | " << (char)j.to_ulong() << endl << endl;

	ofstream t;

	t.open("testFile.crypt", ios::binary);

	if (t.is_open())
	{
		t << r;
		t << z;
		t << j;
		t << "alpha";
		t << (char)r.to_ulong() << (char)z.to_ulong() << (char)j.to_ulong();

		t.close();
	}
	else {
		cout << "File could not be opened." << endl;
	}

	ifstream i;
	
	i.open("testFile.crypt", ios::binary);

	size = i.tellg();
	q = new char[12];
	e = new char[4];
	y = new char[8];
	i.seekg(0, ios::beg);
	i.read(e, 4);
	w = &e[3];
	bitset<4> p = bitset<4>(strtoul(e, &w, 2));
	i.read(q, 12);
	w = &q[11];
	bitset<12> o = bitset<12>(strtoul(q, &w, 2));
	i.read(y, 8);
	w = &y[7];
	bitset<8> l = bitset<8>(strtoul(y, &w, 2));
	
	i.close();

	cout << p.to_string() << " | " << p.to_ulong() << " | " << (char)p.to_ulong() << endl; 
	cout << o.to_string() << " | " << o.to_ulong() << " | " << (char)o.to_ulong() << endl;
	cout << q << endl;

	cout << l.to_string() << " | " << l.to_ulong() << " | " << (char)l.to_ulong() << endl;

	for (int v = 0; v < 12; v++)
	{
		cout << q[v] << " | ";
	}

	cout << endl;

	system("pause");

	ofstream f2;
	f2.open("testFile2.crypt");

	f2 << (char)r.to_ulong() << (char)z.to_ulong() << (char)j.to_ulong();

	f2.close();

	ifstream f3;
	f3.open("testFile2.crypt");

	char in;

	f3.get(in);
	p = bitset<4>(in);
	f3.get(in);
	o = bitset<12>(in);
	f3.get(in);
	l = bitset<8>(in);
	f3.close();

	cout << p.to_string() << " | " << p.to_ulong() << " | " << (char)p.to_ulong() << endl;
	cout << o.to_string() << " | " << o.to_ulong() << " | " << (char)o.to_ulong() << endl;
	cout << l.to_string() << " | " << l.to_ulong() << " | " << (char)l.to_ulong() << endl;

	system("pause");

	*/