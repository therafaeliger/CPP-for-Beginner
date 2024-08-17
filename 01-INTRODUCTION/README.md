## Introduction to C++

### Definition
* Created by Bjarne Strousop on 1985 as a C "more complex" language
* It was developed until now (C++11) and has a big community
* A multi platform programming language
* A compiled language (that need a compiler that change the code to a machine code)
* Function: everything (applications, hardware)

### How C++ works?
* Source code (file) => .cpp extension
    * Text Editor (write C++ program)
* Compiler (create executable)
    * You can use Integrated Development Environment (IDE) for combine both of text editor and compiler
* Machine instruction (assembly language)

### C++ Style
Writing well-styled C++ code is crucial for readability, maintainability, and collaboration. Here are some best practices for C++ coding style:

#### 1. **Follow Naming Conventions:**
   - **Classes and Structs:** Use `CamelCase` with an initial uppercase letter.
     ```cpp
     class MyClass { ... };
     ```
   - **Functions:** Use `camelCase` with an initial lowercase letter.
     ```cpp
     void myFunction() { ... }
     ```
   - **Variables:** Use `snake_case` or `camelCase`, consistent within your project.
     ```cpp
     int my_variable;  // or int myVariable;
     ```
   - **Constants:** Use `ALL_CAPS` with underscores.
     ```cpp
     const int MAX_SIZE = 100;
     ```

#### 2. **Use Consistent Indentation:**
   - Typically, use 4 spaces per indentation level. Avoid tabs, or ensure they are consistent across all files.

   ```cpp
   if (condition) {
       doSomething();
   } else {
       doSomethingElse();
   }
   ```

#### 3. **Brace Placement:**
   - Place opening braces on the same line as the control statement or function declaration.
   
   ```cpp
   if (condition) {
       // code block
   } else {
       // code block
   }
   ```

#### 4. **Use Meaningful Variable and Function Names:**
   - Avoid single-character names except for counters like `i` or `j`. Use descriptive names that convey the purpose.

   ```cpp
   int fileDescriptor;   // Good
   int fd;               // Avoid, unless widely understood in the context
   ```

#### 5. **Keep Functions Short and Focused:**
   - Each function should perform a single task. If it gets too long, consider breaking it into smaller functions.

   ```cpp
   void processFile(const std::string& filename) {
       openFile(filename);
       readData();
       closeFile();
   }
   ```

#### 6. **Use `const` Correctly:**
   - Use `const` for variables that should not be modified after initialization. Also, use `const` for function parameters and member functions where applicable.

   ```cpp
   void printMessage(const std::string& message) const {
       std::cout << message << std::endl;
   }
   ```

#### 7. **Comment Your Code:**
   - Write comments to explain why something is done, not what is done. Avoid obvious comments.

   ```cpp
   // Calculate the area of a circle given the radius.
   double calculateArea(double radius) {
       return 3.14159 * radius * radius;
   }
   ```

#### 8. **Avoid Magic Numbers:**
   - Use named constants instead of hard-coded numbers.

   ```cpp
   const double PI = 3.14159;
   double calculateCircumference(double radius) {
       return 2 * PI * radius;
   }
   ```

#### 9. **Use RAII (Resource Acquisition Is Initialization):**
   - Manage resources (e.g., memory, file handles) with objects that acquire the resource in their constructor and release it in their destructor.

   ```cpp
   {
       std::ifstream file("data.txt");
       if (file) {
           // Work with the file
       }  // File automatically closed here
   }
   ```

#### 10. **Minimize Use of `#define`:**
   - Prefer `const`, `constexpr`, and `inline` over `#define` for constants and functions.

   ```cpp
   constexpr double PI = 3.14159;
   ```

#### 11. **Be Careful with Pointers and Memory Management:**
   - Prefer smart pointers (`std::unique_ptr`, `std::shared_ptr`) over raw pointers.

   ```cpp
   std::unique_ptr<MyClass> obj = std::make_unique<MyClass>();
   ```

#### 12. **Use the Standard Library:**
   - Prefer using standard library containers (e.g., `std::vector`, `std::map`) and algorithms over manually managing arrays and loops.

   ```cpp
   std::vector<int> numbers = {1, 2, 3, 4, 5};
   std::sort(numbers.begin(), numbers.end());
   ```

#### 13. **Error Handling:**
   - Use exceptions for error handling, but don't overuse them. Ensure proper cleanup in case of an exception.

   ```cpp
   void readFile(const std::string& filename) {
       std::ifstream file(filename);
       if (!file) {
           throw std::runtime_error("Could not open file");
       }
       // process file
   }
   ```

#### 14. **Use Modern C++ Features:**
   - Use C++11/14/17/20 features where appropriate. For example, use `auto` for type inference, range-based `for` loops, and `nullptr` instead of `NULL`.

   ```cpp
   auto result = computeSomething();
   ```

#### 15. **Consistent Formatting:**
   - Stick to one formatting style throughout your codebase. Tools like `clang-format` can help automate this.

#### 16. **Write Testable Code:**
   - Design your code to be easily testable. This usually involves writing smaller, independent functions.

#### Example of Well-Styled C++ Code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

class Circle {
public:
    explicit Circle(double r) : radius(r) {}

    double area() const {
        return PI * radius * radius;
    }

private:
    double radius;
    static constexpr double PI = 3.14159;
};

int main() {
    std::vector<Circle> circles = { Circle(1.0), Circle(2.0), Circle(3.0) };
    
    for (const auto& circle : circles) {
        std::cout << "Area: " << circle.area() << std::endl;
    }

    return 0;
}
```

This code adheres to best practices by using meaningful names, proper use of `const`, following naming conventions, and managing resources correctly.


### Source: YouTube Channel "Kelas Terbuka", ChatGPT