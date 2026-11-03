/*
This is the Senior/Staff Architect template designed to push you into the 75-80 range of C++ mastery.
It bridges the gap between using standard library features and building high-performance, 
zero-overhead abstractions. It covers template metaprogramming, custom memory management, 
lock-free concurrency, hardware sympathy (cache-lines), and advanced move semantics.

Attempt to perform the following tasks completely from memory. If you get a compilation error, 
delete the file and start over. Note: Some tasks require C++20 or C++23 flags (-std=c++20).
*/

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <atomic>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <type_traits>
#include <utility>
#include <new>
#include <cstdint>
#include <concepts>
#include <ranges>
#include <span>
#include <expected> // C++23
#include <source_location> // C++20

using namespace std;

// =================================================================================================
// ADVANCED CLASSES, STRUCTS, AND TEMPLATES (Write these above main)
// =================================================================================================

// Task A (Rule of Five) - Write a 'Resource' class that manages a raw int* pointer. 
// Implement the Default Constructor, Destructor, Copy Constructor, Copy Assignment, 
// Move Constructor, and Move Assignment operators. Use std::exchange in the move operations.

// Task B (Variadic Templates) - Write a template function 'logAll(Args&&... args)' 
// that uses a C++17 unary right fold expression to print all arguments to std::cout.

// Task C (C++20 Concepts) - Define a custom Concept 'Arithmetic' that requires a type T 
// to be either std::is_integral_v<T> or std::is_floating_point_v<T>.

// Task D (Constexpr/Consteval) - Write a 'consteval' function that computes the Nth Fibonacci 
// number, guaranteeing the calculation happens at compile-time.


int main() {
  //===========================================================================================================================
  //
  //  1. ADVANCED MOVE SEMANTICS & PERFECT FORWARDING
  //
  //===========================================================================================================================
  //Task 1.1 - Define a lambda that takes an auto&& parameter (forwarding reference).
  
  //Task 1.2 - Inside the lambda, pass the parameter to another function using std::forward<decltype(arg)>(arg).

  //Task 1.3 - Use std::move() to cast an lvalue std::string into an rvalue, transferring its contents to a new string.
  
  //Task 1.4 - Write a function wrapper template<typename F, typename... Args> that perfectly forwards 
  // all arguments to callable F using std::invoke(std::forward<F>(f), std::forward<Args>(args)...).


  //===========================================================================================================================
  //
  //  2. TEMPLATE METAPROGRAMMING & TYPE TRAITS (Pre-C++20 SFINAE)
  //
  //===========================================================================================================================
  //Task 2.1 - Use std::enable_if_t to restrict a template function to only accept unsigned integer types.

  //Task 2.2 - Use 'if constexpr' inside a template function to execute different logic based on std::is_pointer_v<T>.

  //Task 2.3 - Deduce the return type of a function automatically using 'decltype(auto)'.

  //Task 2.4 - Remove reference and const qualifiers from a type using std::decay_t<T>.


  //===========================================================================================================================
  //
  //  3. C++20 CONCEPTS & RANGES
  //
  //===========================================================================================================================
  //Task 3.1 - Write a template function restricted by a standard concept: void printSize(std::ranges::sized_range auto&& r).

  //Task 3.2 - Chain C++20 range views: take a std::vector<int>, use std::views::filter to keep only even numbers, 
  // and std::views::transform to square them.

  //Task 3.3 - Iterate over your filtered/transformed view using a range-based for loop.


  //===========================================================================================================================
  //
  //  4. CUSTOM MEMORY MANAGEMENT & PLACEMENT NEW
  //
  //===========================================================================================================================
  //Task 4.1 - Allocate a raw buffer of memory on the stack: alignas(Resource) std::byte buffer[sizeof(Resource)];

  //Task 4.2 - Use 'placement new' to construct a Resource object directly inside that pre-allocated buffer: new(&buffer) Resource();

  //Task 4.3 - Manually destroy the object by explicitly calling its destructor (DO NOT use delete on placement new): resourcePtr->~Resource();

  //Task 4.4 - Override the global 'void* operator new(size_t size)' and 'void operator delete(void* ptr)' to track total bytes allocated.


  //===========================================================================================================================
  //
  //  5. HARDWARE SYMPATHY & CACHE OPTIMIZATION
  //
  //===========================================================================================================================
  //Task 5.1 - Declare a struct with 'alignas(64)' (or std::hardware_destructive_interference_size) to prevent false sharing 
  // between threads on different CPU cores.

  //Task 5.2 - Write an if-statement using the C++20 [[likely]] or [[unlikely]] attributes to hint the CPU's branch predictor.

  //Task 5.3 - Use std::span<const int> as a function parameter to provide a lightweight, non-owning, bounds-checked 
  // view of contiguous memory (works for vectors, raw arrays, and std::array) without pointer decay.


  //===========================================================================================================================
  //
  //  6. ADVANCED CONCURRENCY & THREAD POOL MECHANICS
  //
  //===========================================================================================================================
  //Task 6.1 - Declare a std::condition_variable and a std::mutex for thread synchronization.

  //Task 6.2 - In a worker thread, acquire a std::unique_lock and call cv.wait(lock, []{ return data_ready; }); to avoid spurious wakeups.

  //Task 6.3 - In the main thread, update the shared state and call cv.notify_one() to wake the worker.

  //Task 6.4 - Use std::async(std::launch::async, lambda) to run a task on a background thread and return a std::future<int>.

  //Task 6.5 - Block the main thread and retrieve the asynchronous result using future.get().


  //===========================================================================================================================
  //
  //  7. LOCK-FREE PROGRAMMING & ATOMICS
  //
  //===========================================================================================================================
  //Task 7.1 - Declare a std::atomic<int> counter. 

  //Task 7.2 - Increment the counter using counter.fetch_add(1, std::memory_order_relaxed). 
  // (Understand why relaxed is safe for simple counters but not for data synchronization).

  //Task 7.3 - Implement a basic lock-free Spinlock struct using std::atomic_flag. 
  // Use .test_and_set(std::memory_order_acquire) in the lock() method, and .clear(std::memory_order_release) in unlock().

  //Task 7.4 - Write a Compare-And-Swap (CAS) loop using atomic.compare_exchange_weak() to safely multiply an atomic integer by 2.


  //===========================================================================================================================
  //
  //  8. MODERN ERROR HANDLING & DEBUGGING (C++20/23)
  //
  //===========================================================================================================================
  //Task 8.1 - Write a function returning std::expected<int, std::string> (C++23). Return an int on success, or std::unexpected("Error") on failure.

  //Task 8.2 - Call the function, check if it .has_value(), and access the data via .value() or the error via .error().

  //Task 8.3 - Write a logging function that takes std::source_location::current() as a default parameter 
  // and prints the file name, line number, and function name of the caller without macros.


  //===========================================================================================================================
  //
  //  9. LOW-LEVEL POINTER CASTING
  //
  //===========================================================================================================================
  //Task 9.1 - Use reinterpret_cast to cast an int* to a uintptr_t to inspect its raw numeric memory address.

  //Task 9.2 - Use reinterpret_cast to cast a raw buffer of bytes (char*) into a specific Struct pointer (POD types only).

  //Task 9.3 - Use std::bit_cast<float>(myInt) (C++20) to safely reinterpret the binary representation of an int into a float 
  // without undefined behavior (bypassing strict aliasing rules).

  return 0;
}