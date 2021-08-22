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

int CClass::Execute(char *str1, char *str2)
{
    string st1 = str1;
    string st2 = str2;

    sort(st1.begin(),st1.end());
    sort(st2.begin(),st2.end());

    if(st1 == st2)
    {
        printf("Its anagram...\n");
    }
    else
    {
        printf("Its NOT anagram...\n");   
    }
    return 0;
}