# Arduino Base

This repository contains a copy-paste project structure for Arduino projects
with libraries and [Catch2][c2] based unit testing.

Requirements:

* `make`, `cmake`, `wget` need to be installed
* Linux

To get started:

```bash
make
cd src
cmake .
make
./unitTests
```

Some hints:

* `demo.cpp` and `demo.h` live outside the Arduino project directory (which is
  `src/examples/arduino-demo-project/`). This allows re-using the `Demo` class
  amongst multiple Arduino projects.
* The Arduino IDE needs all files to be in the project directory. Therefore,
  external files like the `demo.*` files are linked into the project directory
  with a symbolic link (`ln -s`) instead of creating a hard copy. 
* The `lib/` directory contains a few library files which you probably won’t
  need unless you program ATtinys directly.

[c2]: https://github.com/catchorg/Catch2
