# Modern C++ Evolution (C++11 to C++23)

This repository serves as a practical guide to the evolution of Modern C++. It breaks down the major standards, the specific hardware and architectural problems they solved, and provides a single-file project for each to lock the concepts into muscle memory.

---

## C++11: The Modern Renaissance
C++11 is arguably the most important update in the language's history. It fundamentally changed C++ from a memory-leak-prone nightmare into a modern, safe systems language.

### Core Problems Solved
* Managing memory with raw `new` and `delete` caused massive memory leaks and dangling pointers.
* Writing simple callbacks required creating entire, clunky classes (functors).
* Iterating over complex maps required typing out horrific nested types.

### Major Features
* **Smart Pointers (`std::unique_ptr`, `std::shared_ptr`):** Automatically clean up memory when they go out of scope using RAII.
* **Lambdas:** Allow you to write anonymous, inline functions on the fly.
* **The `auto` Keyword:** Lets the compiler deduce the type, saving you from explicitly typing verbose iterator names.

### Project: Mini Event Dispatcher
Write a single file that creates an `EventSystem` class.
* Use `std::unique_ptr` to manage a collection of dummy "Event" objects so you never call `delete`.
* Use `auto` and range-based for loops to iterate through the events.
* Register callback actions to your EventSystem using inline Lambda expressions.

---

## C++14: The Refiner
C++14 was a smaller release that patched up some annoying holes left by C++11.

### Core Problems Solved
* C++11 introduced `std::unique_ptr`, but initializing it using `new` inside a function call could still leak memory if an exception was thrown before assignment.
* C++11 lambdas required you to hardcode the exact variable types they accepted.

### Major Features
* **`std::make_unique`:** Safely allocates memory in one atomic step, completely eliminating the need to ever type the keyword `new`.
* **Generic Lambdas:** Allow you to use `auto` in lambda parameters, letting one lambda process integers, floats, or strings automatically.

### Project: Generic Sensor Data Filter
Create a vector of `std::unique_ptr<Sensor>` objects.
* Allocate the objects strictly using `std::make_unique`.
* Write a single generic lambda (e.g., `auto filter = [](const auto& item) { ... }`).
* Use that exact same lambda to filter out bad readings from a vector of integer temperatures and a separate vector of float voltage readings.

---

## C++17: The Performance & Syntactic Sugar Update

### Core Problems Solved
* Passing `std::string` by value forced the CPU to physically allocate new heap memory and copy characters, killing performance.
* Returning multiple values from a function required ugly `std::pair` syntax with `.first` and `.second`.
* Representing a "failed" function return meant resorting to dangerous magic numbers or raw null pointers.

### Major Features
* **`std::string_view`:** Acts as a read-only window into an existing string, costing zero memory allocations.
* **Structured Bindings:** Allow you to unpack pairs or tuples directly into neatly named variables.
* **`std::optional`:** Explicitly tells the programmer "this function might return a value, or it might return literally nothing," forcing safe error handling.

### Project: Zero-Copy CSV Parser
Write a function that parses a single, giant comma-separated string.
* Instead of splitting it into smaller strings, use `std::string_view` to just look at the chunks in place.
* Have the parser return a `std::optional<std::pair<std::string_view, int>>`.
* Use structured bindings to unpack the result cleanly in your `main` loop.

---

## C++20: The Paradigm Shift
C++20 drastically altered how we write template code and manipulate data sets.

### Core Problems Solved
* Passing the wrong type to a C++ template resulted in massive, unreadable compiler errors.
* Data manipulation with the Standard Template Library (STL) required verbose iterator syntax (e.g., `std::sort(vec.begin(), vec.end())`) and creating multiple temporary vectors to chain operations.

### Major Features
* **Concepts:** Put strict rules on templates (e.g., "This function only accepts types that can be added together"), resulting in clean, one-line compiler errors.
* **Ranges:** Allow you to pass containers directly (`std::ranges::sort(vec)`) and chain operations together like a pipeline without allocating intermediate memory.

### Project: Data Pipeline Filter
Write a custom Concept that ensures a template function only accepts numeric types.
* Take a vector of numbers.
* Use `std::views` (part of Ranges) to pipe the data: filter out odd numbers, square the remaining evens, and reverse them.
* Execute the entire pipeline in one single, highly readable line of code.

---

## C++23: The Modern Library Expansion
C++23 focuses heavily on standardizing modern quality-of-life features to replace slow or verbose legacy mechanics.

### Core Problems Solved
* C++ exceptions (`try/catch`) are incredibly slow and often banned entirely in systems programming, game development, and embedded hardware.
* Standard I/O (`std::cout << "x: " << x << "\n"`) is verbose, surprisingly slow, and struggles with Unicode.

### Major Features
* **`std::expected`:** A functional error-handling class template that holds either the expected return value or an unexpected error object, replacing slow exceptions. 
* **`std::print`:** Brings Python/Rust style string formatting to C++, replacing `std::cout` entirely and providing native Unicode support out of the box.

### Project: Safe Network Simulator
Write a function `connectToDatabase()` that returns a `std::expected<Database, ErrorCode>`.
* Randomly simulate a success or a failure.
* In `main`, check if the expected value exists without using a `try/catch` block.
* Log the outcome cleanly to the console using `std::print("Connection status: {}\n", result)`.