#pragma once

//#define USING_FORWARD_DECLARATION_IN_CIRCLE

#ifdef USING_FORWARD_DECLARATION_IN_CIRCLE

class OtherDeps;

class Circle
{
public:
    int radius_;
    void IrrelevantFunc(OtherDeps od_);
};

#else

#include "OtherDeps.h"

class Circle
{
public:
    int radius_;
    void IrrelevantFunc(OtherDeps od_);
};

#endif
