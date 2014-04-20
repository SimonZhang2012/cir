//
//  main.cpp
//  CIR1-1
//
//  Created by Yixiang Zhang on 20/04/2014.
//  Copyright (c) 2014 Yixiang Zhang. All rights reserved.
//

#include <iostream>

using namespace std;

bool isUnique(const string& aString)
{
    const int MAX_STRING = 256;
    bool char_used[MAX_STRING];
    
    for (int i =0; i< MAX_STRING; i++)
        char_used[i]= false;
    
    for (int i =0; i < aString.length(); i++)
        if (char_used[aString[i]])
            return false;
        else
            char_used[aString[i]] = true;
    

    
    return true;
}

bool isUniqueNoExtraMemory(const string& aString)
{
    for (int i = 0; i < aString.length() -1; i++)
        for (int j = i+1; j < aString.length(); j++)
            if (aString[i] == aString[j])
                return false;
    
    return true;
}

int main(int argc, const char * argv[])
{

    
    cout << isUnique("abcdefg") << endl;
    cout << isUnique("abcdeafg") << endl;
    cout << isUnique("aabcdeafg") << endl;
    
    std::cout << isUniqueNoExtraMemory("abcdefg") << endl;
    std::cout << isUniqueNoExtraMemory("abcdeafg") << endl;
    std::cout << isUniqueNoExtraMemory("aabcdeafg") << endl;
    
    return 0;
}


