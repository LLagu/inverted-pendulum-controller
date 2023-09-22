#ifndef ANGLE_SENSOR_H
#define ANGLE_SENSOR_H

#include "SensorInterface.h"

namespace Hal {

// int is just a placeholder
class AngleSensor : public SensorInterface<double, int> {
public:
    explicit AngleSensor(double initialAngle);
    [[nodiscard]] double GetValue(int gpio) override;

private:
    const double kMinAngle;
    const double kMaxAngle;
    double angle_;
};

}
#endif // ANGLE_SENSOR_H