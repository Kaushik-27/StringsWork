#include "class.h"
#include <malloc.h>
#include <cstring>
#include <stdlib.h>
#include <string.h>

using namespace std;

CClass::CClass()
{
}

CClass::~CClass()
{
}

int CClass::Execute(char **strList, int nItems)
{
    sort(strList,nItems);
    return 0;
}

int CClass::comparefn(const void *str1, const void *str2)
{
    //tried to use c++ style cast but seems double pointer cast is not supported.. will check again later.
    const char *str1ctd = *(const char **)str1;
    const char *str2ctd = *(const char **)str2;

    //printf("%s , %s \n", str1ctd,str2ctd);

    return strcmp(str1ctd, str2ctd);
}

int CClass::comparefnbyascii(const void *str1, const void *str2)
{
    int nStr1, nStr2 = 0;

    const char *str1ctd = *(const char **)str1;
    const char *str2ctd = *(const char **)str2;

    int n1 = strlen(str1ctd);
    int n2 = strlen(str2ctd);

    for (int n = 0; n < n1; n++)
    {
        nStr1 += str1ctd[n];
    }

    for (int n = 0; n < n1; n++)
    {
        nStr2 += str2ctd[n];
    }

    return nStr1 < nStr2;
}

void CClass::sort(char **strArr, int n)
{
    // base
    // Pointer to the first object of the array to be sorted, converted to a void*.
    // num
    // Number of elements in the array pointed to by base.
    // size_t is an unsigned integral type.
    // size
    // Size in bytes of each element in the array.
    // size_t is an unsigned integral type.
    // compar
    // Pointer to a function that compares two elements.
    // This function is called repeatedly by qsort to compare two elements. It shall follow the following prototype:

    // int compar (const void* p1, const void* p2);

    qsort(strArr, n, sizeof(const char *), comparefnbyascii);
}