## Loop in C++

### Assignment Operator
* Assignment
    ```cpp
    int a = 3
    ```
* Assignment Operator
    ```cpp
    a = a + 3 // variable = variable (operator) expression

    a += 3 // variable (operator)= expression
    ```

### Increment and Decrement
* Increment (variable = variable + 1)
    * Preincrement (variable++)
    * Postincrement (++variable)
* Decrement (variable = variable - 1)
    * Predecrement (variable--)
    * Postdecrement (--variable)

### Looping Definition
* If the condition is met, the code will be executed continuously

### While
```cpp
while (condition) {
    statement;
}
```

### Do-While
```cpp
do {
    statement;
}
while (condition);

// it will do action, before checking the condition
// so at least will run once (statement)
```

### For
```cpp
for (initialization; condition; increment/decrement) {
    statement;
}
```

### Control Flow
* Break
    * Break or stop the code (exiting the loop)
* Continue
    * Skip the entire code or statement under it, continue the loop