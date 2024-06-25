#ifndef CARHEADER_HPP
#define CARHEADER_HPP

#include <iostream>
#include <cstring>

/**
 * @brief class car
 * @details car has characteristics about size, value, speed, and passenger
 * @author Lee
 * @date 2024.03.25
 * @version 0.0.1
*/

class Car{
    /**
     * @param CAR_SIZE is size of car
     * @param CAR_VALUE is value of car
     * @param CAR_ACC is amout of acceleration
     * @param CAR_BRK is amout of deacceleration
     * @param CAR_PASSENGER is capacity of car
     * @param int fuel is fuel
     * @param int speed is speed
    */
private:
    enum 
    {
        CAR_SIZE = 10
        CAR_VALUE = 100
        CAR_ACC = 10
        CAR_BRK = 10
        CAR_PASSENGER = 4
    };
    int fuel;
    int speed;

public:
    void Accel();
    void Break();
};

#endif