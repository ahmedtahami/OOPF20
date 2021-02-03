#pragma once
#include "B.h"
#include "C.h"
class D :
    public B, public C
{
public:
    D(int);
};

