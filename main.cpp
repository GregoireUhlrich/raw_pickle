#include "raw_pickle/traits/numeric.hpp"
#include <iostream>

int main()
{

    pickle::PickableNumeric<float> number{5.5};
    std::cout << number.get() << std::endl;

    pickle::PickableNumeric<long int> number2{4381058432342154};
    std::cout << number2.get() << std::endl;

    // pickle::PickableNumeric<const char *> compile_error{"Not numeric!"};
    // std::cout << compile_error.get() << std::endl;

    return 0;
}
