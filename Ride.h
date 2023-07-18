#ifndef TAXI_BOOKING_SYSTEM_RIDE_H
#define TAXI_BOOKING_SYSTEM_RIDE_H
#include "User.h"
#include "Taxi.h"
class Ride {
private:
    Taxi taxi;
    User user;
    double distance;
    double fare;
public:
    Ride(const Taxi &taxi, const User &user, double distance)
            : taxi(taxi), user(user), distance(distance), fare(0) {}

    const Taxi &getTaxi() const {
        return taxi;
    }

    const User &getUser() const {
        return user;
    }

    double getDistance() const {
        return distance;
    }

    double getFare() const {
        return fare;
    }

    void calculateFare() {
        if (taxi.getTaxiClass() == "start") {
            fare = distance * 1.0;
        } else if (taxi.getTaxiClass() == "comfort") {
            fare = distance * 1.8;
        } else if (taxi.getTaxiClass() == "business") {
            fare = distance * 3.0;
        }
    }
};

#endif //TAXI_BOOKING_SYSTEM_RIDE_H
