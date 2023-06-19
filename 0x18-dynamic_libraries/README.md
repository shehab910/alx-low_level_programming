# 0x18-dynamic_libraries

I learned how to create and use dynamic libraries in C using `ldd`, `ldconfig`, and `$LD_LIBRARY_PATH` as well as the environment variable `$LD_PRELOAD`.

### 1-create_dynamic_lib.sh

Creates a dynamic library called `liball.so` from all the `.c` files in the current directory.
