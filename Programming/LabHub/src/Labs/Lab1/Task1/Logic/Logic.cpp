#include "Labs/Lab1/Task1/Logic/Logic.h"
#include <cmath>

using std::tan;
using std::sqrt;
using std::abs;
using std::log;
using std::sin;
using std::pow;
using std::asin;
using std::exp;

namespace Labs::Lab1::Task1
{
    float Logic::Calculate(float x, float k) {
        float ctg_arg = (x + k) / (k + 1.0f);
        float numerator = (1.0f / tan(ctg_arg)) - sqrt(abs(log(x) - log(k) + 1.3f));
    
        float sin_val = sin(exp(-k));
        float sin4 = pow(sin_val, 4.0f);
    
        float asin_val = asin(1.0f / k);
        float asin2 = asin_val * asin_val;
    
        float denominator = sin4 + asin2;
    
        return numerator / denominator;
    }
}