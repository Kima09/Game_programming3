#pragma once
#include "Furniture.h"
class Wardrobe :
    public Furniture
{
public:
    virtual void Interact() override;
    Wardrobe();
    virtual ~Wardrobe() override;
};

