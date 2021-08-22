#pragma once

#ifndef __TEST__
#define __TEST__


class CClass
{

public:
    CClass();

    //Big5
    virtual  ~CClass();
    CClass(const CClass&) = delete;
    CClass(const CClass&&) = delete;

    CClass& operator = (const CClass& ) = delete;
    CClass& operator = (const CClass&& ) = delete;

    int Execute();
    
};
#endif