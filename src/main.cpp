#include <iostream>

int main() {
	char vowels[] {'a','e','i','o','u'};
	std::cout << "The first vowel is " << vowels[0] << std::endl;
	std::cout << "The last vowel is " << vowels[4] << std::endl;

//	std::cin >> vowels[5]; index out of bounds

	double hi_temps[] {90.1,89.8,77.5,81.6};
	std::cout << "\nThe first high temperature is: " << hi_temps[0] << std::endl;
	hi_temps[0] = 100.7;

	std::cout << "The first high temperature is now: " << hi_temps[0] << std::endl;

	int test_scores[] {100,90,80,70,60};
	std::cout << "\nFirst score at index 0: " << test_scores[0] << std::endl;
	std::cout << "Second score at index 1: " << test_scores[1] << std::endl;
	std::cout << "Third score at index 2: " << test_scores[2] << std::endl;
	std::cout << "Fourth score at index 3: " << test_scores[3] << std::endl;
	std::cout << "Fifth score at index 4: " << test_scores[4] << std::endl;

//	std::cout << "\nEnter 5 test scores: ";
//	std::cin >> test_scores[0];
//	std::cin >> test_scores[1];
//	std::cin >> test_scores[2];
//	std::cin >> test_scores[3];
//	std::cin >> test_scores[4];
//
//	std::cout << "\nThe updated array is: " << std::endl;
//	std::cout << "First score at index 0: " << test_scores[0] << std::endl;
//	std::cout << "Second score at index 1: " << test_scores[1] << std::endl;
//	std::cout << "Third score at index 2: " << test_scores[2] << std::endl;
//	std::cout << "Fourth score at index 3: " << test_scores[3] << std::endl;
//	std::cout << "Fifth score at index 4: " << test_scores[4] << std::endl;

	std::cout << "\nNotice what the value of the array name is " << test_scores << std::endl; // memory address

	int movie_ratings[3][4] {
		{ 0, 4, 3, 5 },
		{ 2, 3, 3, 5 },
		{ 1, 4, 4, 5}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << movie_ratings[i][j] << " ";
		}
		std::cout << "\n";
	}
}
