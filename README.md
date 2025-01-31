# The Procedural Horse Race 

The Algorithm for this program is below:
```
functions used:

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

main():
	keepGoing = true;
	horses[] = [0,0,0,0,0];
	while keepGoing:
		for i in range 5:
			advance(i, horses[]);
			if isWinner(i,horses[]) = true:
				keepGoing = false;
				print("Horse" horses[i] "wins!");
			printLane(i,horses[]);
		prompt user to hit enter to continue
			

advance(int horseNum, int* horses):
	flip coin and store result in variable
	if coin == 1:
		horses[horseNum] += 1;

printLane(int horseNum, int* horses):
	for i in range(15):
		if horses[horseNum] != i;
			print(".");
		else:
			print(horseNum);

isWinner(int horseNum, int* horses):
	if horses[horseNum] == track_length;
		return true;
	return false;
```		 
