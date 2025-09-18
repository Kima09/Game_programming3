#pragma once
#include "Monster.h"
class Skeleton :
    public Monster
{
public:
    Skeleton();
    virtual ~Skeleton() override;

    virtual void Describe() override;
};

