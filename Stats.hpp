#include <iostream>
#include <vector>
#include <cmath>

//Z must be double, float, or int
template <class Z>
class Stats {
	public:
		Z min(std::vector<Z> &data) {
			Z data_min = data[0];
			for(int i = 1; i < data.size(); i++) {
				if(data_min > data[i]) {
					data_min = data[i];
				}
			}
			return data_min;
		}
	
		Z max(std::vector<Z> &data) {
			Z data_max = data[0];
			for(int i = 1; i < data.size(); i++) {
				if(data_max < data[i]) {
					data_max = data[i];
				}
			}
			return data_max;
		}
	
		double mean(std::vector<Z> &values) {
			//Start your code here
		}
	
		double variance(std::vector<Z> &values) {
			//Start your code here
		}
	
		double std_dev(std::vector<Z> &values) {
			//Start your code here
		}
	
		void histogram(const std::vector<int> &values, 
				std::vector<int> &histo) {
			//Start your code here
		}
};
