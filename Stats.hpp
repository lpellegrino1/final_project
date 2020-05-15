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
			Z values_mean = values[0];
			double sum =0.0;
			for(int i = 0; i < values.size(); i++) {
				sum += values[i];
			}
			double mean = sum/values.size();
			return mean;
		}

		double variance(std::vector<Z> &values) {
			Z values_variance = values[0];
			double sum = 0.0;
			double mean = sum/values.size();
			
			for (int i = 0; i < values.size(); i++){
				sum += (values[i] - mean) * (values[i] - mean);
			}
			double variance = sum / values.size();
			return variance;
		}
	
		double std_dev(std::vector<Z> &values) {
			Z values_std_dev = values[0];

			double sum = 0.0;
			double mean = sum/values.size();
			for(int i = 0; i < values.size(); i++){
				sum += (values[i] - mean)*(values[i] - mean);
			}
			double std_dev = sqrt(sum/values.size());
			return std_dev;
		}
	
		//QUESTION: How do I implement max in the histogram function? it doesn't want to recognize it.
		void histogram(const std::vector<int> &values, 
				std::vector<int> &histo) {
			int values_max = max(values);
		        histo_resize(max);
			for(int i = 0; i < values_max; i++){
				histo[i] = 0;
			}
			for(int j = 0; j < values.size(); j++){
				histo[j] += 1;
			}
		} 
};
