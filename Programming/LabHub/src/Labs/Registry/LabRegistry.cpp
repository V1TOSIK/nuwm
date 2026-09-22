#include "Labs/Registry/LabRegistry.h"

#include <utility>

namespace Labs
{
    void LabRegistry::Register(Lab lab)
    {
        _labs.push_back(std::move(lab));
    }

    const std::vector<Lab>& LabRegistry::GetLabs() const
    {
        return _labs;
    }

    const Lab* LabRegistry::Find(short number) const
    {
        for (const auto& lab : _labs)
        {
            if (lab.GetNumber() == number)
            {
                return &lab;
            }
        }

        return nullptr;
    }
}