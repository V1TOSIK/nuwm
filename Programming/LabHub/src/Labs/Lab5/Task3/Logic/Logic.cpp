#include "Labs/Lab5/Task3/Logic/Logic.h"

#include <cmath>

using std::abs;
using std::pow;

namespace Labs::Lab5::Task3
{
    double Logic::CalculateSum(double z1, double deltaZ)
    {
        double result = 0.0;
        double zPrev = z1;

        for (int n = 2; n <= 15; ++n)
        {
            const double zCurr = zPrev * n - deltaZ;
            const double denominator = zPrev + zCurr;

            if (abs(denominator) < 1e-12)
            {
                zPrev = zCurr;
                continue;
            }

            const double numerator = pow(zPrev, 3.0) - pow(zCurr, 2.0);
            result += numerator / denominator;
            zPrev = zCurr;
        }

        return result;
    }
}
