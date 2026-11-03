/*
This is the Tier 100 "Systems God / Compiler Whisperer" template.
To complete this, you must understand the language specification, 
the compiler's Abstract Syntax Tree (AST), the OS linker, hardware 
execution models (GPUs), and unreleased C++26 proposals.

Attempting to compile this requires a mix of Clang-only flags, CUDA/SYCL compilers,
and a deep understanding of Undefined Behavior.
*/

// Note: In a true freestanding environment (Tier 100), you cannot include these.
// You have no heap, no OS, and no standard library. But for the sake of the template:
#include <iostream>
#include <type_traits>
#include <concepts>
#include <tuple>
#include <cstddef>
// #include <experimental/meta> // C++26 Reflection (proposal)

// =================================================================================================
// 1. EXPRESSION TEMPLATES (Zero-Cost Domain Specific Languages)
// =================================================================================================
// Background: This is how the 'Eigen' math library performs matrix math faster than raw loops.
// Instead of computing A + B + C immediately and creating temporary vectors, you build an 
// Abstract Syntax Tree (AST) at compile time, and evaluate it in a single loop at the end.

// Task 1.1 - Write a template class `VectorExpr<E>` acting as the base for the AST.
// Task 1.2 - Write a `VectorSum<E1, E2>` class that holds references to two expressions.
// Task 1.3 - Overload `operator+` to return a `VectorSum` WITHOUT actually doing any math yet (Lazy Evaluation).
// Task 1.4 - Write the evaluation loop inside the assignment `operator=` that collapses the entire AST into one CPU instruction pipeline.


// =================================================================================================
// 2. ABI, MANGLING, AND CROSS-LANGUAGE FFI (Foreign Function Interface)
// =================================================================================================
// Background: C++ is notorious for breaking ABI. If you compile a DLL with GCC and load it 
// with MSVC, it will segfault because they "mangle" function names differently.

// Task 2.1 - Write a C++ function but force it to use the C ABI using `extern "C"` so a Rust or Python program can call it.
// Task 2.2 - Use compiler-specific attributes `__attribute__((visibility("default")))` (Clang/GCC) or `__declspec(dllexport)` (MSVC) to explicitly control symbol export.
// Task 2.3 - Prove you understand ABI by explaining in a comment why adding a virtual function to a class permanently breaks binary compatibility for dynamically linked libraries.
// Task 2.4 - Opaque Pointers (Pimpl Idiom): Hide the implementation details of a class in a `.cpp` file using a forward-declared pointer to ensure the header file never triggers an ABI break when modified.


// =================================================================================================
// 3. HETEROGENEOUS COMPUTING (CUDA / SYCL)
// =================================================================================================
// Background: CPUs execute serially very fast. GPUs execute parallel very slow, but 10,000 times at once.
// Standard C++ runs on the host (CPU). At Tier 100, you write C++ that compiles for the device (GPU).

// Task 3.1 - Write a CUDA kernel using the `__global__` specifier that adds two arrays together.
// Task 3.2 - Inside the kernel, calculate the global thread ID using `threadIdx.x`, `blockIdx.x`, and `blockDim.x`.
// Task 3.3 - Allocate Unified Memory using `cudaMallocManaged(&ptr)` so both the CPU and GPU can access the same C++ pointer without manual copying.
// Task 3.4 - Launch the kernel from main() using the execution configuration syntax: `kernelName<<<blocksPerGrid, threadsPerBlock>>>(args...)`.


// =================================================================================================
// 4. BARE METAL & FREESTANDING C++ (OS Development / Embedded)
// =================================================================================================
// Background: What happens if there is no OS? No `main()`, no `new`, no `std::cout`. 

// Task 4.1 - Override the true entry point of the executable `extern "C" void _start()`.
// Task 4.2 - Write a custom Linker Script (`.ld` file) to force your `.text` (code) section to load at a specific physical memory address (e.g., `0x8000000`).
// Task 4.3 - Implement a global `operator new` that allocates memory by physically advancing a pointer across a pre-defined static buffer (since you have no OS to ask for heap memory).
// Task 4.4 - Access a hardware register directly using a volatile pointer: `*reinterpret_cast<volatile uint32_t*>(0x40021000) = 0x01;`


// =================================================================================================
// 5. THE FUTURE: C++26 REFLECTION & CONTRACTS
// =================================================================================================
// Background: C++ is finally getting Reflection (the ability for code to inspect itself at compile time).

// Task 5.1 - Reflection (Proposal): Use the `^` operator (splice) and `std::meta::info` to iterate over the members of a struct at compile time.
// Task 5.2 - Code Generation: Write a `constexpr` function that automatically generates a JSON serializer for ANY struct by reflecting over its data members.
// Task 5.3 - Contracts (Proposal): Use `[[pre: x > 0]]` and `[[post: return > x]]` attributes on a function to embed formal mathematical proofs of your code's behavior directly into the compiler.


// =================================================================================================
// 6. UNDEFINED BEHAVIOR EXPLOITATION & SANITIZERS
// =================================================================================================
// Task 6.1 - Strict Aliasing UB: Deliberately write code that breaks the Strict Aliasing Rule (e.g., casting `float*` to `int*` and dereferencing). 
// Task 6.2 - Explain in a comment exactly how the Clang optimizer (LLVM IR) will delete your code entirely because it assumes the UB path is "unreachable".
// Task 6.3 - Compile your code with `-fsanitize=address,undefined` (ASAN and UBSAN) and manually parse the memory shadow-map output to locate a deliberate off-by-one heap overflow.

int main() {
    // If you are writing code at this level, main() is just a suggestion.
    return 0;
}