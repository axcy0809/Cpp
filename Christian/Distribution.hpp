#include <cmath>
#include <iostream>
#include <vector>

template <typename T> struct Distribution {
  using value_type = T;
  T mean;
  T stddev; 

  Distribution(T mean, T stddev) : mean(mean), stddev(stddev){};

  Distribution(std::vector<T> &dataset) : mean(0), stddev(0) {
    for (T item: dataset)
        mean = mean + item;
    mean = mean / dataset.size();

    for (T item: dataset)
        stddev = stddev + (item - mean) * (item - mean);
    stddev = sqrt(stddev / dataset.size());
  }

  template <template <typename, typename> class Cont>
  /*Distribution(const ContainerT &c, ContainerT& dataset) : mean(0), stddev(0) {
    for (T item: dataset)
            mean += item;
        mean = mean / dataset.size();

        for (T item: dataset)
            stddev += (item - mean) * (item - mean);
        stddev = sqrt(stddev / dataset.size());
  }*/
  Distribution(const Cont<T, std::allocator<T>>& dataset) 
  : mean(0), stddev(0) {
      for (T item: dataset)
        mean = mean + item;
    mean = mean / dataset.size();

    for (T item: dataset)
        stddev = stddev + (item - mean) * (item - mean);
    stddev = sqrt(stddev / dataset.size());
  }
  // (Task 2) missing functionality to 
  // construct a Distribution from other container types
};