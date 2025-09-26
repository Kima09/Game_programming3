#pragma once
class Resource
{
private:
	shared_ptr<Resource> resource;
public:
	Resource();

	void Share(const shared_ptr<Resource>& reference);

	~Resource();
};

