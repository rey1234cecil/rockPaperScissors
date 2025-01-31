#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <limits>

int main()
{
	const std::string choices [] = {" ", "Rock", "Paper", "Scissors"};
	
	int computerChoice{};
	int p1Choice{};
	
	int comScore{};
	int p1Score{};
	
	unsigned seed = time(0);
	srand(seed);
	
	do
	{
		computerChoice = 1 + rand() % 3;
		
		std::cout <<"ROCK PAPER SCISSORS GAME" <<std::endl;
		std::cout <<std::left 
				  <<std::setw(10) <<"Pick 1" <<"|" <<std::setw(10) <<"Rock" <<"\n"
				  <<std::setw(10) <<"Pick 2" <<"|" <<std::setw(10) <<"Paper" <<"\n"
				  <<std::setw(10) <<"Pick 3" <<"|" <<std::setw(10) <<"Scissors" <<"\n"
				  <<std::setw(10) <<"Quit"   <<"|" <<std::setw(10) <<"4" <<std::endl;
				  
				  std::cout <<"Select your choice: ";
				  std::cin >> p1Choice;
				  
				  while(std::cin.fail() || p1Choice < 1 || p1Choice > 4) {
					  std::cin.clear();
					  std::cin.ignore(std::numeric_limits<std::streamsize>::max() ,'\n');
					  std::cout <<"Enter number from 1 to 4" <<std::endl;
				  }
				  
				  std::cout << "You chose: " << choices[p1Choice] << std::endl;
        std::cout << "Computer chose: " << choices[computerChoice] << std::endl;
				  
				  if(computerChoice == p1Choice) {
					  std::cout <<"Draw. Play again" <<std::endl;
				  } else if (computerChoice == 1 && p1Choice == 2) {
					  std::cout <<"You win." <<std::endl; 
					  ++p1Score;
				  } else if (computerChoice == 2 && p1Choice == 3) {
					  std:: cout <<"You win." <<std::endl;
					  ++p1Score;
				  } else if (computerChoice == 3 && p1Choice == 1) {
					  std:: cout <<"You win." <<std::endl;
					  ++p1Score;
				  } else {
					  std::cout <<"Computer wins." <<std::endl;
					  ++comScore;
				  }
				  
				  std::cout << "Scores.\n You: " << p1Score << " | Computer: " << comScore << std::endl;
				  
	} while(true);
	
	 std::cout << "Scores.\n You: " << p1Score << " | Computer: " << comScore << std::endl;
	 
	return 0;
}
