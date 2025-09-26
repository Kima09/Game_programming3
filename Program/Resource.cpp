#include "stdafx.h"
#include "Resource.h"

Resource::Resource()
{
	cout << "Resource Created" << endl;
}

void Resource::Share(const shared_ptr<Resource>& reference)
{
	resource = reference;
}

Resource::~Resource()
{
	cout << "Resource Destroyed" << endl;
}
