#pragma once
#include "Monster.h"
class Golem :
    public Monster
{
public:
    Golem();
    virtual ~Golem() override;

    virtual void Describe() override;
};

