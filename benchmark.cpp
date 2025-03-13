#include "benchmark.h"
#include <chrono>
#include <ratio>

void Benchmark::Start() {
	startTime = high_resolution_clock::now();
}

void Benchmark::End() {
	endTime = high_resolution_clock::now();
	elapsedTime = (endTime - startTime);
}

long double Benchmark::GetNanoseconds() {
	return duration<long double, nanoseconds::period>(elapsedTime).count();
}

long double Benchmark::GetMicroseconds() {
	return duration<long double, microseconds::period>(elapsedTime).count();
}

long double Benchmark::GetMilliseconds() {
	return duration<long double, milliseconds::period>(elapsedTime).count();
}

long double Benchmark::GetSeconds() {
	return duration<long double, seconds::period>(elapsedTime).count();
}

long double Benchmark::GetMinutes() {
	return duration<long double, minutes::period>(elapsedTime).count();
}

duration<long double> Benchmark::GetElapsedTimeSpan() {
	return duration<long double>(elapsedTime);
}
