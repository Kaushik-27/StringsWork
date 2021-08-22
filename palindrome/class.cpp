#include "class.h"
#include <malloc.h>
#include <cstring>

using namespace std;

CClass::CClass()
{

}

CClass::~CClass()
{

}

int CClass::Execute(char *str)
{
    int nLen = strlen(str);
    nLen --;
    int nStart = 0;

    while(nStart <= nLen)
    {
        if(str[nStart] != str[nLen])
        {
            printf("Not palindrome...\n");
            return 0;
        }
        nStart++;
        nLen --;
    }
    printf("Palindrome...\n");
    return 0;
}