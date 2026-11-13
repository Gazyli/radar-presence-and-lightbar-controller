#pragma once
#include <cmath>

namespace radar_math {
    // Calculates the global X coordinate
    inline float get_global_x(float x_mm, float y_mm, float angle_deg) {
        if (x_mm == 0.0f && y_mm == 0.0f) return NAN;
        
        float rad = angle_deg * (M_PI / 180.0f);
        float x_cm = x_mm / 10.0f;
        float y_cm = y_mm / 10.0f;
        
        return x_cm * cos(rad) - y_cm * sin(rad);
    }

    // Calculates the global Y coordinate
    inline float get_global_y(float x_mm, float y_mm, float angle_deg) {
        if (x_mm == 0.0f && y_mm == 0.0f) return NAN;
        
        float rad = angle_deg * (M_PI / 180.0f);
        float x_cm = x_mm / 10.0f;
        float y_cm = y_mm / 10.0f;
        
        return x_cm * sin(rad) + y_cm * cos(rad);
    }
}
