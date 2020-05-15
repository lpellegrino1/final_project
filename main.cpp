#include <iostream>
#include <vector>
#include "Stats.hpp"

template <class X>
void print_vector(std::vector<X> &v) {
	for(const auto &i : v) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return;
}

int main() {
	//Creating IntStats what will calculate status of int-based data
	Stats<int> IntStats;
	//Creating FloatStats that will calculate status of float-based data
	Stats<float> FloatStats;
	//Creating DoubleStats that will calculate status of double-based data
	Stats<double> DoubleStats;
	

	//Data
	std::vector<int> simple_odds = {3, 5, 3, 7, 3, 9, 5, 11};
	std::vector<int> simple_alternate = {1, 2, 1, 2, 1, 2, 1, 2};

	std::vector<float> kinda_random = {14, -7, 12, 22, -31, 9};


	//BEGINNING TESTS

	//Testing min
	std::cout << IntStats.min(simple_odds) << std::endl;
	std::cout << FloatStats.min(kinda_random) << std::endl;

	//Testing max
	std::cout << IntStats.max(simple_alternate) << std::endl;
	std::cout << FloatStats.max(kinda_random) << std::endl;

	//Uncomment when you have completed the mean method
	/*
	float mu_alternate = IntStats.mean(simple_alternate);
	std::cout << mu_alternate << std::endl;
	std::cout << "Ans: 1.5" << std::endl;
	*/
	//Please add an additional test

	//Uncomment when you have completed the variance method
	/*
	float sigma2_alternate = IntStats.variance(simple_alternate);
	std::cout << sigma2_alternate << std::endl;
	std::cout << "Ans: 0.25" << std::endl;
	*/
	//Please add an additional test

	//Uncomment when you have completed the standard deviation method
	/*
	float sigma_alternate = IntStats.std_dev(simple_alternate);
	std::cout << sigma_alternate << std::endl;
	std::cout << "Ans: 0.5" << std::endl;
	*/
	//Please add an additional test


	//Uncomment when you have completed the histogram method
	/*
	std::vector<int> hist;
	IntStats.histogram(simple_odds, hist);
	print_vector(hist);
	std::cout << "Ans: 0 3 0 2 0 1 0 1" << std::endl;
	*/
	//Please add an additional test


	return 0;
}
