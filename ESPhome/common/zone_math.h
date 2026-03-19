#pragma once
#include <cmath>

namespace zone_math {
    // Helper function to check if a single target is inside the boundaries
    inline bool is_in_zone(float x, float y, float min_x, float max_x, float min_y, float max_y) {
        if (std::isnan(x) || std::isnan(y)) return false;
        return (x >= min_x && x <= max_x && y >= min_y && y <= max_y);
    }

    // Master function to check all three targets at once
    inline bool any_target_in_zone(
        float t1_x, float t1_y, 
        float t2_x, float t2_y, 
        float t3_x, float t3_y, 
        float min_x, float max_x, float min_y, float max_y) {

        if (min_x == 0 && max_x == 0 && min_y == 0 && max_y == 0) return false;
        
        return is_in_zone(t1_x, t1_y, min_x, max_x, min_y, max_y) ||
               is_in_zone(t2_x, t2_y, min_x, max_x, min_y, max_y) ||
               is_in_zone(t3_x, t3_y, min_x, max_x, min_y, max_y);
    }
}