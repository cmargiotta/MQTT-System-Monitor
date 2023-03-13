#ifndef SENSOR_sensor
#define SENSOR_sensor

#include <string>

#include <sol/sol.hpp>

#include "sensor.hpp"

namespace msm
{
    class sensor final
    {
        public:
            struct sensor_
            {
                    std::string name;
                    std::string id;
                    std::string class_;
                    std::string unit;

                    std::string value;
                    std::string debug_message;
            };

        private:
            std::string script = "sensor = sensor_.new()\n";
            sol::state  lua;

        public:
            explicit sensor(const std::string& path);
            ~sensor() = default;

            sensor_ get_data();
    };
}// namespace msm

#endif /* SENSOR_sensor */
