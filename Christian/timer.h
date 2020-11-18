#pragma once
#include <iostream>
#include <ctime>

static double accumulatedRuntime = 0;

template <typename F, typename ... Ts>
// Variadic function templates are functions which can take multiple number of arguments.
double track_time(F&& f, Ts&&...args)
{
    std::clock_t start = std::clock();
    f(std::forward<Ts>(args)...);
    double runtime = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC);

    accumulatedRuntime += runtime;
    std::cout << "call took: " << runtime << "s, accumulated: " << accumulatedRuntime << std::endl;
    
    return runtime;
}