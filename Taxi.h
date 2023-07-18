#ifndef TAXI_BOOKING_SYSTEM_TAXI_H
#define TAXI_BOOKING_SYSTEM_TAXI_H
#include <string>
class Taxi {
private:
    std::string taxiNumber;
    std::string driverName;
    std::string status;
    std::string taxiClass;
public:
    Taxi(const std::string &taxiNumber, const std::string &driverName, const std::string &taxiClass)
            : taxiNumber(taxiNumber), driverName(driverName), status("Available"), taxiClass(taxiClass) {}

    const std::string &getTaxiNumber() const {
        return taxiNumber;
    }

    const std::string &getDriverName() const {
        return driverName;
    }

    const std::string &getStatus() const {
        return status;
    }

    void setStatus(const std::string &status) {
        this->status = status;
    }

    const std::string &getTaxiClass() const {
        return taxiClass;
    }
};

#endif //TAXI_BOOKING_SYSTEM_TAXI_H
