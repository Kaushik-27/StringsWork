#include "class.h"
#include <malloc.h>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

CClass::CClass()
{

}

CClass::~CClass()
{

}

int CClass::Execute(char *str)
{
    map<char,int> freq;
    int nLen = strlen(str);
    for(int i =0; i < nLen; i++)
    {
        freq[str[i]] += 1;
    }

    for(map<char,int>::iterator it = freq.begin(); it != freq.end(); it++)
    {
        if(it->second == 1)
        {
            printf("1st repeated character is : %c\n",it->first);
            return 0;
        }
    }
    printf("All characters are repeative...\n");
    return 0;
}