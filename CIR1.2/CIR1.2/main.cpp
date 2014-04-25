//
//  main.cpp
//  CIR1.2
//
//  Created by Yixiang Zhang on 25/04/2014.
//  Copyright (c) 2014 Yixiang Zhang. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

void reverse(char* str)
{
	for (int i = 0, j = strlen(str) -1; i < j; i++, j--) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}


int main(int argc, char* argv[])
{
	char c[100];
	strcpy(c, "This is a sentence.");
    
	reverse(c);
    cout << c << endl;
	return 0;
}
