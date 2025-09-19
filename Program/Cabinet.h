#pragma once
#include "Furniture.h"
class Cabinet :
    public Furniture
{
public:
    Cabinet();
    virtual void Interact() override;
    virtual ~Cabinet() override;
};

