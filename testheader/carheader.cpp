#include <iostream>
#include <cstrting>
#include "carheader.hpp"

/**
 * @brief function of car
 * @details function of acceleation and break
 * @author Lee
 * @date 2024.03.37
 * @version 0.0.1
*/

void Car::Accel()
{
    /**
     * @details function of acceleration
     * @param int fuel is fuel
     * @param int speed is speed
     * @return nothing
    */
    if (fuel<=0)
        return;
    else
        speed += CAR_ACC;
        return;
}

void Car::Break()
{
    /**
     * @details function of break
     * @param int fuel is fuel
     * @param int speed is speed
     * @return nothing
    */
    speed -= CAR_BRK;
    return;
}