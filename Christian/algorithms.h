#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <numeric>

// print container elements
template <typename C> 
auto print(const std::string &text, const C &ctnr) {
  auto func = [](const typename C::value_type &item) {
    std::cout << item << "|";
  }; // function object from lambda expression
  std::cout << std::setw(23) << text << ": ";
  std::for_each(ctnr.begin(), ctnr. end(), func); // for_each from <algorithm>
  std::cout << std::endl;
};

// populate container with constant value
template <typename C> 
auto populate_with_value(C &ctnr, typename C::value_type value) {
  std::fill(ctnr.begin(), ctnr.end(), value);
};

// populate container sequence of values
template <typename C>
auto populate_with_sequence(C &ctnr, typename C::value_type start) {
    // The mutable specification enables the body of a lambda expression 
    // to modify variables that are captured by value
    auto func = [start](typename C::value_type &item) mutable {
        item = start++;
    };
  std::for_each(ctnr.begin(), ctnr.end(), func);
};

// multiply each element in container by value
template <typename C>
auto multiply_with_value(C &ctnr, typename C::value_type value) {
  // The mutable specification enables the body of a lambda expression 
    // to modify variables that are captured by value
    auto func = [value](typename C::value_type &item) {
        item *= value;
    };
  std::for_each(ctnr.begin(), ctnr.end(), func);
};

// reverse order of elements
template <typename C> auto 
sort_descending(C &ctnr) {
  std::reverse(ctnr.begin(), ctnr.end());
};

// check how many elements fullfill a condition
template <typename C>
auto count_fullfills_cond(
    C &ctnr, bool (*condition)(const typename C::value_type &value)) {
        std::size_t count = std::count_if(ctnr.begin(), ctnr.end(), condition);
        return count;
};

// check if two containers are equal in length and content
template <typename C> auto check_are_equal(const C &a, const C &b) {
  return std::equal(a.begin(), a.end(), b.begin());
};

// sum all elements in the container
template <typename C> auto sum_of_elements(const C &ctnr) {
  return std::accumulate(ctnr.begin(), ctnr.end(), 0);
};

// sum of absolute values of elements in the container
template <typename C> auto abssum_of_elements(C &ctnr) {
    auto abs = [](const typename C::value_type &a, const typename C::value_type &b) {
        return a + std::abs(b);
    };
    return std::accumulate(ctnr.begin(), ctnr.end(), 0, abs);
};