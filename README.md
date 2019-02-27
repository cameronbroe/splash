[![CircleCI](https://circleci.com/gh/cameronbroe/splash/tree/master.svg?style=svg)](https://circleci.com/gh/cameronbroe/splash/tree/master)

# Splash - A C++ library for adding a splash of color

Splash is a C++ library for wrapping text with ANSI color codes for the
purpose of adding just a little bit of color to your logs.

## Usage

Splash comes with a range of helper functions in the `splash` namespace to
quickly add some color to your logs. Each function takes a `std::string` and
returns a `std::string` all colorified.

#### Examples

Bolding text
```cpp
std::cout << splash::bold("Hello world!") << std::endl;
```

Underlining text
```cpp
std::cout << splash::underline("Hello world!") << std::endl;
```

Black text
```cpp
std::cout << splash::black("Hello world!") << std::endl;
```

Red text
```cpp
std::cout << splash::red("Hello world!") << std::endl;
```

Green text
```cpp
std::cout << splash::green("Hello world!") << std::endl;
```

Yellow text
```cpp
std::cout << splash::yellow("Hello world!") << std::endl;
```

Blue text
```cpp
std::cout << splash::blue("Hello world!") << std::endl;
```

Magenta text
```cpp
std::cout << splash::magenta("Hello world!") << std::endl;
```

Cyan text
```cpp
std::cout << splash::cyan("Hello world!") << std::endl;
```

White text
```cpp
std::cout << splash::white("Hello world!") << std::endl;
```

## Complex Formatting

Splash provides the `splash::modifier` class for more complex
formatting.

### Example

```cpp
splash::modifier formatter;
formatter.addAttribute(splash::attribute::FG_RED);
formatter.addAttribute(splash::attribute::BOLD)
std::cout << formatter.wrap("Hello world!") << std::endl;
```

## Project setup

### Dependencies

* Python >=3.5

### Bootstrap

```bash
python3 bootstrap.py
```

## Usage

To generate Makefile:

```bash
mkdir build/
cd build/
cmake ..
```

To build library:

```bash
make
ls -l lib/
```

To run tests:

```bash
make test
```

## License

This project is licensed under the MIT license. A copy of this license is provided [in this repository](LICENSE).
