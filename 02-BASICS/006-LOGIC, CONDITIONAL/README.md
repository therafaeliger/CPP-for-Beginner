## Logic in C++

### Comparator (Relation Expression)
* Equal to (==)
* Not equal to (!=)
* Greater than (>)
* Less than (<)
* Greater than equal to (>=)
* Less than equal to (<=)

### Logic Operator
* AND (&& or 'and') => both of
* OR (|| or 'or') => just one
* NOT (!) => for negation

### If-Else Statement
```cpp
if (condition) {
    statement;
} else if (condition) {
    statement;
} else {
    statement;
}

// you can ignore bracket if your statement just on 1 line
if(condition) one_line_statement;

// you can make some nested if
if (condition) {
    if (condition) {
        statement;
    }
    ...
    
    statement;
}
```

### Switch Case
```cpp
switch (expression) {
    case /* constant-expression */:
        statement;
        break; // for control flow
    
    default:
        statement;
        break;
}
```