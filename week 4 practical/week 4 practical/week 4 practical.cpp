#include<set>
#include<string>
#include <iostream>
#include<map>
int main()
{
	std::set<int>Number;

	int amount;
	std::cout << "How many numbers do you want to enter?";
	std::cin >> amount;

	int Insert;
	for (int i = 0; i < amount; i++) {
		std::cout << "Enter a number:";
		std::cin >> Insert;
		Number.insert(Insert);
	}

		int Check ;
		std::cout << "Please enter a number to check : \n";
		std::cin >> Check;

		if (Number.count(Check) == 0) {
			std::cout << "Not found\n";
		};
		if (Number.count(Check) == 1) {
			std::cout << "Found it\n";
		};

		int Erase;
		std::cout << "Enter a number to erase:\n";
		std::cin >> Erase;


		if (Number.count(Erase) == 0) {
			std::cout << "Not found\n";
		};

		if (Number.count(Erase) == 1) {
			Number.erase(Erase);
			std::cout << "Erase it\n";
		
		};

		std::map<std::string, int>Map;
		std::string MapString;
	}