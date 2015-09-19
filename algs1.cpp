
#include <iostream>
#include <vector>
#include <cmath>


int main() {

	std::vector<float> fvec;



	for ( int i = 0; i < 50; i++ ) {

		fvec.push_back(i);
	}

	float sum = 0.0;

	for ( std::vector<float>::iterator iter = fvec.begin(); iter != fvec.end(); iter++ ) {

		std::cout << *iter << std::endl;
		sum += *iter;

	}

	float average = sum / fvec.size();

	std::cout << "all vals summed:" << std::endl << sum << std::endl;
	std::cout << "mean of vals:" << std::endl << average << std::endl;

	float total_square_diff = 0.0;
	for ( std::vector<float>::iterator iter = fvec.begin(); iter != fvec.end(); iter++ ) {

		float diff = average - *iter;
		total_square_diff += (diff * diff);

	}
	float variance = total_square_diff / fvec.size();

	std::cout << "sum of squared difference from mean" << std::endl << total_square_diff << std::endl;
	std::cout << "variance (mean of squared diffs from the mean):" << std::endl << variance << std::endl;

	float std_dev = sqrt(variance);

	std::cout << "a standard deviation:" << std::endl << std_dev << std::endl;

	return 0;
}