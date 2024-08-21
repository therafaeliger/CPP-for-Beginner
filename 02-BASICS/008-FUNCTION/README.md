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