#include <iostream>
#include <random>


std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int coin = dist(rd);

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);


int main(){
	int horseNum = 5;
	int trackLength = 10;
	int horses [] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while (keepGoing){
	
	}

}


advance(){


 }
