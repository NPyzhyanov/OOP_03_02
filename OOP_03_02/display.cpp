#include <iostream>

#include "counter.h"

void Counter::display()
{
    std::cout << "Current value: " << this->current_value << std::endl;
}
