#include<iostream>
#include<conio.h>
#include <bits/stdc++.h>
using namespace std;

int getDigits(int n){
    int n1, num = 0;
    n1 = n;
    while (n != 0){
        n /= 10;
        num++; 
    }
    return num;
}

int firstDigit(int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}

void tokenize(string const &str, const char delim, vector<string> &out) 
{ 
    stringstream ss(str); 
    string s; 
    while (getline(ss, s, delim)) { 
        out.push_back(s); 
    } 
} 
 
int main()
{
	char keypad[10][4] = {
		{'0','+','!', '/'},
		{'1', 'a','b','c'},
		{'2', 'd','e','f'},
		{'3', 'g','h','i'},
		{'4', 'j','k','l'},
		{'5', 'm','n','o'},
		{'6', 'p', 'q', 'r'},
		{'7', 's', 't', 'u'},
		{'8', 'v', 'w', 'x'},
		{'9', 'y', 'z', ','},
	};
	
	int number;
	string input;
	cout << "Enter a positive integer :  ";
	getline(cin, input);
	
    const char delim = ' ';  
    vector<string> out; 
    tokenize(input, delim, out); 
 
    for (auto &s: out) { 
    	if(s.compare("01") == 0){
    		s="";
    		cout<<"";
		}
		if(s.compare("000") == 0){
			s="";
			cout<<"!";
		}
		if(s.compare("00") == 0){
			s="";
			cout<<"+";
		}
        stringstream integer(s);
		int x = 0;
		integer >> x;
        int a = firstDigit(x);
        int b = getDigits(x);
        
        cout<<keypad[a][b-1]<<"";
    } 
  
  // input 3 333 222 4444 4444 555 01 888 5555 6666 4444 22 000
  // output 3helln world!
    return 0;
}
