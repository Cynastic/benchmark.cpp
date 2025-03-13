# Benchmark.cpp - Simple benchmarking of C++
---
Benchmark.cpp allows you to easily benchmark C++ files. It uses the standard chrono header for easy usage across platforms.
## Usage
---
Just add benchmark.h and benchmark.cpp to your project, and in the file you want to benchmark, include benchmark.cpp.
For more information, check out the files, or the example below.
## Example
---
```cpp
#include "benchmark.cpp"
#include <thread>
#include <iostream>

int main() {
	Benchmark benchmark = *(new Benchmark());
	benchmark.Start();
	std::this_thread::sleep_for(seconds(5));
	benchmark.End();
	std::cout << "Nanoseconds: " << benchmark.GetNanoseconds() << std::endl;
	//"Nanoseconds: 5.00766e+09"
	std::cout << "Microseconds: " << benchmark.GetMicroseconds() << std::endl;
	//"Nanoseconds: 5.00766e+06"
	std::cout << "Miliseconds: " << benchmark.GetMilliseconds() << std::endl;
	//"Nanoseconds: 5007.66"
	std::cout << "Seconds: " << benchmark.GetSeconds() << std::endl;
	//"Nanoseconds: 5.00766"
}
```


