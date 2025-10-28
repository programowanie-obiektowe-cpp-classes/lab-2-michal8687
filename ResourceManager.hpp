#pragma once

#include "Resource.hpp"

class ResourceManager
{
    // Twoja implementacja tutaj
public:
	ResourceManager()
	{
		zasob;
	}
	//~ResourceManager()
	//{
		//zasob.destr;
	//}
	//ResourceManager(const ResourceManager& t) : zasob{ t.zasob } {}
	double get()
	{
		return zasob.get();
	}
private:
	Resource zasob;
};