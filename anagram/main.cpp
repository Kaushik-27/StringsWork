#include "class.h"
#include <string.h>
#include <stdio.h>

using namespace std;

int main (int argc, char* argv[])
{
    CClass objLocal;
    char string1[225];
    char string2[255];
    memset(string1,0,225);
    memset(string2,0,225);

    printf("Enter the 1st string: \n");
    scanf("%s", &string1);
    printf("\nEnter the 1st string: \n");
    scanf("%s", &string2);
    objLocal.Execute(string1,string2);
}