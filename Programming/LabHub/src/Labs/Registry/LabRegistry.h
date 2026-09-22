#pragma once

#include <vector>
#include "Labs/Lab/Lab.h"

namespace Labs
{
    class LabRegistry
    {
        public:
            void Register(Lab lab);

            const std::vector<Lab>& GetLabs() const;

            const Lab* Find(short number) const;

        private:
            std::vector<Lab> _labs;
    };
}