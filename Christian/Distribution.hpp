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

  template <template <typename> class Cont>
  /* Recall that the standard containers actually have at least two parameters: 
     the element type and an allocator type. Containers use allocators to allocate 
     and free their working memory so that this behavior may be customized. In effect, 
     the allocator specifies a memory management policy for the container. 
     The allocator has a default so it's easy to forget it's there. However, when you 
     instantiate a standard container like vector<int>, you're actually 
     getting vector< int, std::allocator<int> >.*/
  Distribution(const Cont<T>& dataset) 
  : mean(0), stddev(0) {
      
      for (T item: dataset)
        mean = mean + item;
    mean = mean / dataset.size();

    for (T item: dataset)
        stddev = stddev + (item - mean) * (item - mean);
    stddev = sqrt(stddev / dataset.size());
  }
};