 #include <random>
#include <iostream>
#define NUM_HORSES 5
#define TRACK_LENGTH 15


void advance(int horseNum, int* horses, std::random_device& rd);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

int main(){
    int horses[NUM_HORSES] = {0,0,0,0,0};
	bool keepGoing = true;
	std::random_device rd;

	while(keepGoing){
	      for (int i =  0; i < NUM_HORSES; i++){
		      advance(i,horses,rd);
		      printLane(i,horses);
		      if (isWinner(i,horses)){;
			 keepGoing = false;
			 break;
		 }
		}	
		if (keepGoing){
		   std::cout<< "Press Enter to continue";
		   std::cin.ignore();
		}
	   }
	return 0;
}
void advance(int horseNum, int* horses, std::random_device& rd){
     std::uniform_int_distribution<int> dist(0, 1);
     int coin = dist(rd);
     horses[horseNum] += coin;
 }
 void printLane(int horseNum, int* horses){
      for (int i = 0; i < TRACK_LENGTH; i++){
	  if (i == horses[horseNum]){
	      std::cout<< horseNum;
	 } else{
            std::cout<< ".";
	}
      }
      std::cout << std::endl;
   }
bool isWinner(int horseNum, int* horses){
    bool result = false;
    
    if (horses[horseNum] == TRACK_LENGTH){
	    result = true;
	    std::cout << "Horse"<< (horseNum) << "won!"<< std::endl;
   }
   return result;
}

