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
	
		//attempted fixes of these functions. 
		//changed variable names from function names to help confusion
		//variance and std dev tests still do not run...
		double mean(std::vector<Z> &values) {
			Z values_mean = values[0];
			double sum =0.0;
			for(int i = 0; i < values.size(); i++) {
				sum += values[i];
			}
			double meann = sum/values.size();
			return meann;
		}

		double variance(std::vector<Z> &values) {
			Z values_variance = values[0];
			double sum = 0.0;
			double v_mean = mean(values);
			
			for (int i = 0; i < values.size(); i++){
				sum += (values[i] - v_mean) * (values[i] - v_mean);
			}
			double var = sum / values.size();
			return var;
		}
	
		double std_dev(std::vector<Z> &values) {
			Z values_std_dev = values[0];

			double var = variance(values);
			double stddev = sqrt(var);
			return stddev;
		}
	
	//histogram incomplete; made changes to histo[value[i]]
	//should i also change histo[j] to histo[values[j]], or is just the i part 
	//counting the frequency while the j moves it through the values? If thats the 
	//case should I embed the second for loop in the first?	
		void histogram(const std::vector<int> &values, 
				std::vector<int> &histo) {
			int values_max = max(values);//getting an error with max(values).
		        histo.resize(values_max);
			for(int i = 0; i < values_max; ++i){
				histo[values[i]] = 0;
			}
			for(int j = 0; j < values.size(); ++j){
				histo[j] += 1;
			}
		} 
};
