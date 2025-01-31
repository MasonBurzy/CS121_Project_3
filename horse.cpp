#include <iostream>
#include <random>


std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);


int horseNum = 5;
int trackLength = 10;
void advance(int numHorse, int* horses);
void printLane(int numHorse, int* horses);
bool isWinner(int numHorse, int* horses);


int main(){
	int horses [] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while (keepGoing){
		for (int hn = 0; hn < numHorse; hn++){
			advance(hn, horses)
			printLane(hn, horses);
			if (isWinner(hn, horses)){
				keepGoing = false;
			} // end if
		} // end for

		std::cout << "Press enter for another turn";
		std::cin.ignore();

	} // end while

	return 0;

/*
advance(){


 }

 */
