## Function In C++

### DRY (Don't Repeat Yourself)
* Function == Method
* Input => Function => Output
* C++ has some standard libraries that contains some functions (exp: iostream, cmath)

### Function Types
#### Function Within Return (Reporter)
* Function that has a data type:
    ```cpp
    data_type function_name( inputs/arguments ) {
        // body
        statement;

        return result; // as your data type
    }
    ```

#### Function Without Return (Worker)
* It is called "void"
    ```cpp
    void function_name( inputs/arguments ) {
        // body
        statement;
    }
    ```

### Function Prototype
* Just like another variable declaration we can declare function first without any definition
* It is useful when we use multiple file, OOP, etc
    ```cpp
    // this is function prototype
    int function_name();
    void function_name();

    ...

    // declare later (give definition)
    int function_name() {
        ...
    }
    void function_name() {
        ...
    }
    ```

### Variable Scope
* Global Variable: the entire universe can access
* Local Variable: the only scope can access
* Block Variable: look at the body of code that contains it {}

### Default Argument
* It is work as default or standard value inside a function input variables
* It can cover the errors because of function call without some input variables

### Overloading the Function
* We can add another function definition to overload it or for changing it's data type