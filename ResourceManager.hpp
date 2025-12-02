#pragma once

#include "Resource.hpp"
class ResourceManager
{
public:

    ResourceManager()
        : res(new Resource()) {
    }

    ~ResourceManager()
    {
        delete res;
    }

    ResourceManager(const ResourceManager& other)
        : res(new Resource(*other.res))
    {
    }

    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other)
        {
            Resource* newRes = new Resource(*other.res);
            delete res;
            res = newRes;
        }
        return *this;
    }

    ResourceManager(ResourceManager&& other) noexcept
        : res(other.res)
    {
        other.res = nullptr;
    }

    ResourceManager& operator=(ResourceManager&& other) noexcept
    {
        if (this != &other)
        {
            delete res;
            res = other.res;
            other.res = nullptr;
        }
        return *this;
    }

    double get()
    {
        return res->get();
    }

private:
    Resource* res;
};