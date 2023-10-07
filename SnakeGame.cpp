#include <cstdlib>
#include<iostream>
//#include<ncurses.h>

using namespace std;
//snake game
//requirements
//board --> draw --> #
//snake --> draw --> S(head) --> centre , rest of the snake (s) 
//Food --> draw --> o --> random locations

bool gameOver;
const int height = 20, width = 20;
int SnakeX, SnakeY, FoodX, FoodY, score, snakeLength;
char direction = 'x';
int SXarr[50]={}, SYarr[50]={};

void init(){
	gameOver = false;
	SnakeX = width/2;
	SnakeY = height/2;
	FoodX = rand()%height;
	FoodY = rand()%width;
	score = 0;
	snakeLength = 1;
}

//####
//#  #
//####
void board(){
	for(int i =0; i<height; i++){
		for(int j = 0; j<width; j++){
			if(i == 0 || i == height-1 || j == 0 || j == width-1){
				cout<<"#";
			}
			else{
				//snake print
				if( i == SnakeX and j == SnakeY){
					cout<<"S";
				} 
				else if( i == FoodX and j == FoodY){
					cout<<"o";
				}
				else{
					bool print = false;
					for(int k = 0; k<snakeLength-1; k++){
						if(SXarr[k] == i and SYarr[k] == j){
							print = true;
							cout<<"s";
						}
					}
					if(print == false)
					cout<<" ";
				}
		}
		}

		cout<<endl;
	}
}

//input of direction
// w --> upwards movement
// a --> leftwards movement
// s --> downwards movement
// d --> rightwards movement

void input(){
	cin>>direction;
	
	// take input from kbhit
	// set direction according to that
	//initscr();
	//cbreak();
	//noecho();
	//scrollok(stdscr, TRUE);
	//nodelay(stdscr, TRUE);
	//	char ch = getch();
	//	if(ch == 'w') direction = 'w';
	//	else if(ch == 'a') direction = 'a';
	//	else if(ch == 's') direction = 's';
	//	else if(ch == 'd') direction = 'd';
	//	else direction = 'x';

	
}


void GameLogic(){	

	int prevx, prevy, prevprevx, prevprevY;
	
	prevx = SnakeX;
	prevy = SnakeY;
	
	for(int i =0; i<snakeLength-1; i++)
		{	
			prevprevx = SXarr[i];
			prevprevY = SYarr[i];
			SXarr[i] = prevx;
			SYarr[i] = prevy;
			prevx = prevprevx;
			prevy = prevprevY;
		}
	
	if(direction == 'w' ){
		//move upwards
		SnakeX--;
	}
	else if(direction == 'a'){
		//leftwards
		SnakeY--;
	}
	else if(direction == 's'){
		// downwards
		SnakeX++;
	}
	else if(direction == 'd'){
		//rightwards
		SnakeY++;
	}
	else {
		gameOver = true;
	}


	if(SnakeX == FoodX and SnakeY == FoodY){
		score += 10;

		//SXarr[snakeLength-1] = FoodX;
		//SYarr[snakeLength-1] = FoodY;
		FoodX = rand()%(height-1);
		FoodY = rand()%(width-1);




		snakeLength++;

		if(direction == 'w' ){
			//move upwards
			SnakeX--;
		}
		else if(direction == 'a'){
			//leftwards
			SnakeY--;
		}
		else if(direction == 's'){
			// downwards
			SnakeX++;
		}
		else if(direction == 'd'){
			//rightwards
			SnakeY++;
		}
		//prevx = SnakeX;
		//prevy = SnakeY;
	}
		
		
}
int main(){
	init();
	//gamestart
	while(!gameOver){
		board();
		input();
		GameLogic();
		//break;
	}
	cout<<"GameOver! Your Score Was : "<<score<<endl;
	return 0;
}
