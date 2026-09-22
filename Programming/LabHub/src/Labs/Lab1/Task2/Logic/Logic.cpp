#include "Labs/Lab1/Task2/Logic/Logic.h"
#include <cmath>

using std::pow;

namespace Labs::Lab1::Task2
{
    bool Logic::Calculate(float x, float c) {
        float inverseX = pow(x, -1);
    
        return (3 * x <= 0) ||
               (5 < inverseX && inverseX < c);
    }
}