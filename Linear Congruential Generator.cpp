#include <iostream>
#include <fstream>

int main() {
    long long a = 89;
	long long b = 89;
	long long m = 2^10000;
	long long X = 51;

    std::ofstream outputFile("output2.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Error opening output.txt" << std::endl;
        return 1;
    }

    for (int i = 0; i < 10000; ++i) {
    	double result = static_cast<double>(X) / m;  // Divide by m
    	outputFile << "iteracion " << i + 1 << ": (" << X << ") -- " << result << std::endl;
    	//std::cout << "iteracion " << i + 1 << ": " << X << std::endl;
        X = (a * X + b) % m;
    }

    outputFile.close();

    std::cout << "Values written to output.txt" << std::endl;

    return 0;
}

