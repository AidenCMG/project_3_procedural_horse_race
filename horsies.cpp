#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	bool keepGoing = true;
	int horses[5] = {0,0,0,0,0};
	while(keepGoing){
		for(int i = 0; i < 5; i++){
			advance(i,horses);
			if(isWinner(i,horses)){
				keepGoing = false;
				std::cout << "Horse" << i << "wins!" << std::endl;
				i++;
			}
			printLane(i, horses);
		}
		std::cout << "Press Enter to continue";
		std:: cin.get();
	}	


}

void advance(int horseNum, int* horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	int coin = dist(rd);
	if(coin == 1){
		horses[horseNum]++;
	}
}
void printLane(int horseNum, int* horses){
	for(int i = 0; i < 15; i++){
		if(horses[horseNum] != i){
			std::cout << ".";
		}
		else{
			std::cout << horseNum;
		}
	}
	std::cout << std::endl;
	
}

bool isWinner(int horseNum, int* horses){
	if(horses[horseNum] == 15){
		return true;
	}
	return false;
}
