#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <cstring>

#include "macheps.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    struct fp32_params param;

    macheps_fp32_init(&param);

    bool done = false;
    size_t loopcnt = 0;

    while (!done)
    {
        macheps_fp32_compute(&param);

        done = (0 == std::memcmp(&param.value, &param.sum, sizeof(fp32_t)));

        ++loopcnt;
    }

    std::cout << "Machine epsilon (fp32): " << std::endl;
    std::cout << "    Loop counter: " << loopcnt << std::endl;
    std::cout << "    epsilon: << " << param.epsilon << std::endl;

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
