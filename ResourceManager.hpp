#pragma once

#include "Resource.hpp"

class ResourceManager
{
    // Twoja implementacja tutaj
public:
	ResourceManager()
	{
		zasob = new Resource;
	}
	~ResourceManager()
	{
		delete [] zasob;
	}
	//ResourceManager(const ResourceManager& t) : zasob{ t.zasob } {}
	double get()
	{
		return zasob[0].get();
	}
private:
	Resource* zasob;
};