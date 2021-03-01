#include <iostream>
#include <chrono>

int main() {
	int totalReps = 0;
	
	int maxReps = 0;
	std::cout << "Max Reps:";
	std::cin >> maxReps;
	
	auto start = std::chrono::high_resolution_clock::now();
	
	while (totalReps < maxReps) {
		unsigned int reps = 0;

		std::cout << "Reps: ";
		std::cin >> reps;

		totalReps += reps;

		std::cout << "Total Reps: " << totalReps << std::endl; 
	}
	
	auto end = std::chrono::high_resolution_clock::now();
	
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	
	int durationInSeconds = duration / 1000000.0;
	int minutes = durationInSeconds / 60.0;
	int seconds = durationInSeconds % 60;

	std::cout << minutes << ":" << seconds << std::endl;
	return 0;
}
