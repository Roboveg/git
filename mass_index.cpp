#include <math.h>
#include <iostream>
#include "mass_index.h"
namespace BMI
{

    float Mass_Index(float w, float h) {
        return w / pow(h, 2);
    }
}
