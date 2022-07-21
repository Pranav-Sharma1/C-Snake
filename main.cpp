#include <iostream>
using namespace std;

// global variables
bool gameOver; 
const int MapWidth = 20; // Map dimensions
const int MapHeight = 20; // Map dimensions
int headX, headY, FruitX, FruitY, score; // head variables for snake and fruit variables and score.
enum eDirection{STOP = 0, LEFT, RIGHT, UP, DOWN}; //tracks direction of snake to correspond to keys, using enumeration
eDirection dir; // variable to hold direction of snake


void Setup(){
	gameOver = false;
	dir = STOP; //starts at rest
	headX = MapWidth/2; // centers head on map
	headY = MapHeight/2; //centering the head
	FruitX = rand() % MapWidth; // randomly placing it on map,  creates a random number from 0 to Map width - 1, to get x coordinate
	FruitY = rand() % MapHeight;// randomly placing it on map,  creates a random number from 0 to Map height - 1, to get y coordinate
	score = 0; // score starts at 0
}

void Draw(){
	system("cls");//clears screen
	for (int i = 0; i < MapWidth; i++) //printing the top border of map
		cout << "#" << endl;
	
	for (int j = 0; j < MapHeight; j++) //printing the sides of map
		for (int j = 0; j < MapWidth; j++) etc.

	


}

void Input(){

}

void Logic(){

}


int main() {

	Setup();

	while (!gameOver){
		Draw();
		Input();
		Logic();
		//This is basic loop or skeleton of games

	}
  
}