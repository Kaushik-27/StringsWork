#pragma once

#ifndef __TEST__
#define __TEST__

#include<stdio.h>
#include <stdlib.h>

class CClass
{

public:
    CClass();

    //Big5
    virtual ~CClass();
    CClass(const CClass &) = delete;
    CClass(const CClass &&) = delete;

    CClass &operator=(const CClass &) = delete;
    CClass &operator=(const CClass &&) = delete;

    int Execute(char **strList, int nItems);

private:
    static int comparefn(const void *,const void *);
    static int comparefnbyascii(const void *,const void *);
    void sort(char **, int n);
};
#endif