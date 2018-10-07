# Algorithm Convolution two vectors

Simple algorithm in c++ for calculating Convolution two vectors **u** and **v**.

## About code

I writed algorithm code on Windows, so on linux or mac may be others compile ways.
But I created CMakeLists.txt file and I think that is very similar compiling proces.

### Prerequisites

On Windows you must install Cmake and MinGW application before compile algorithm.
* See:
  * [CMake install](https://cmake.org/install/)
  * [MinGW install](http://www.mingw.org/wiki/howto_install_the_mingw_gcc_compiler_suite)

### Compile algorith

* Open Cmd terminal As Admin in folder with code.
  * Example:
```sh
$ cd C:\CMake\Conv
```

 * Next:
 ```sh
$ cmake -G "MinGW Makefiles" .
```

 * After finish build in cmd:
 ```sh
 $ make -j
 ```
 
## Running the tests
* Open program in bin folder.
```sh
$ cd bin
$ Conv
```

 * Test for length u = 2 and v = 4
 ```sh
 $ 2 4
 $ 1 1
 $ 1 0 1 1
 $ -> 1 1 1 2 1
 ```
  * Test for length u = 4 and v = 4
 ```sh
 $ 4 4
 $ 0.11 0.008 154 6
 $ 0.0099 0.1 6 10
 $ -> 0.001089 0.0110792 2.1854 16.6074 924.68 1576 60
 ```
