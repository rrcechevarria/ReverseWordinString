// ReverseWordInStrting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	string str = "dfhks 23sdkhsh 23h2ksdf kfh d dfsdk 2d ";
	string::iterator it = str.begin();
	int first = 0, last;
	int i = 0, len = str.length();

	cout << str << endl;
	while (it!=str.end()) {
		if (str[i] != ' ') {
			last = i;
		}
		
		else{
			reverse_word(str, first, last);
			first = i + 1;
		}
		it++;
		i++;
	}
	reverse_word(str, first, last);

	cout << str;
	getchar();
	return 0;
}

void reverse_word(string& str, int first, int last) {
	char temp;
	int i, j;
	
	for (i = first, j = last; i < j; i++, j--){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

}