#include "class.h"
#include <string.h>
#include <stdio.h>

using namespace std;

int main (int argc, char* argv[])
{
    CClass objLocal;
    char string[225];
    memset(string,0,225);

    printf("Enter the string: \n");
    scanf("%s", &string);
    objLocal.Execute(string);
}