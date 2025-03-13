#pragma once
#include <chrono>

using namespace std::chrono;

class Benchmark {
	public:
		void Start();
		void End();

		long double GetNanoseconds();
		long double GetMicroseconds();
		long double GetMilliseconds();
		long double GetSeconds();
		long double GetMinutes();

		duration<long double> GetElapsedTimeSpan();

	private:
		duration<long double> elapsedTime;
		time_point<high_resolution_clock> startTime;
		time_point<high_resolution_clock> endTime;
};
