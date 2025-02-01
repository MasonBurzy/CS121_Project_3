#include <iostream>
#include <random>


std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int coin = dist(rd);


int NumHorses = 5;
int TrackLength = 10;

void advance(int HorseNum, int* horses);
void printLane(int HorseNum, int* horses);
bool isWinner(int HorseNum, int* horses);


int main() {
	int horses [] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while (keepGoing) {
		for (int hn = 0; hn < NumHorses; hn++) {
			advance(hn, horses);
			printLane(hn, horses);
			if (isWinner(hn, horses)) {
				keepGoing = false;
			} // end if
		} // end for

		std::cout << "Press enter for another turn";
		std::cin.ignore();

	} // end while

	return 0;

} // end main

void advance(int HorseNum, int horses[]) {
	 horses[HorseNum] += coin;
	
 }

void printLane(int HorseNum, int horses[]){
	for (int hn = 0; hn < TrackLength; hn++) {
		if(hn == horses[HorseNum]) {
			std::cout << " {hn}" << std::endl;
		} // end if 
		
		else {
			std::cout << "." << std::endl;
		} // end else

	} // end for

} // end printLane

bool isWinner(int HorseNum, int horses[]) {
bool result = false;
	if (horses[HorseNum] == TrackLength) {
			result = true;
			std::cout << "Horse {hn} won!" << std::endl;
	} // end if
	return result;

} // end isWinner




