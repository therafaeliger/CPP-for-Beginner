## C++ Compiler

### Compiling Process
* Preprocessing => # include <library/header file>
    ```bash
    $ g++ -E main.cpp > main.p
    ```

* Compiling Process (obj File)
    ```bash
    $ g++ -C main.cpp
    $ objdump -d main.o
    ```

* Linking => integration of some obj file (created from compile process)
    ```bash
    $ g++ main.o add.o
    $ g++ main.o add.o -o output # give a name
    ```

* Created Executable
    ```bash
    $ g++ main.o
    ```