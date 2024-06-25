#include <iostream>
#include <cstring>

/**
 * @brief class car
 * @details nothing
 * @author Lee
 * @date 2024.03.21
 * @version 0.0.1
 * 
*/

class Car
{
private:
    int sale;
/**
 * @brief calculate sale
 * @param int fuel is fuel
 * @param int size is size
 * @return sale
 * @throws nothing
*/
public:
    void Character(int fuel, int size);
};

void Car::Character(int fuel, int size){
    sale = fuel + size;
}
