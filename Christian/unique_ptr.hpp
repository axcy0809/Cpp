#pragma once
#include <cstddef>
#include <functional>
#include <iostream>
#include <utility>


template <typename T> class unique_ptr {
  T *ptr;

public:
  // construction
  unique_ptr(T *p) : ptr(p) {}

  // delete copy constructor
  unique_ptr(const unique_ptr&) = delete;

  // delete copy assignment
  unique_ptr& operator=(const unique_ptr&) = delete;

  // move assign
  unique_ptr& operator=(unique_ptr&& other) {
      ptr = other.get();
      other.ptr = nullptr;
      return *this;
  }

  // move construction
  unique_ptr(unique_ptr&& other) {
      ptr = other.get();
      other.ptr = nullptr;
  }

  // destruction
  ~unique_ptr() { delete ptr; }

  // access
  T *get() { return ptr; }
  T &operator*() { return *get(); }
  T *operator->() { return get(); }

  // release
  T* release() {
      T* temp = ptr;
      ptr = nullptr;
      return temp;
  }

  // reset
  void reset() {
      T* temp = release();
      delete temp;
  }

  void reset(unique_ptr other) {
      T* temp = release();
      delete temp;
      ptr = other.get();
  }

  bool operator==(const unique_ptr& other) {
      return ptr == other.ptr;
  }

  bool operator!=(const unique_ptr& other) {
      return ptr != other.ptr;
  }
};
