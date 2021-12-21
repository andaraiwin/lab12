#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

string cardNames[] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int cardScores[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};

int drawCard(void){
    int x;
	x = rand()%13 + 1;

    return x;
}

int calScore(int x, int y, int z){
    int Sum;

        if(x > 10 && x <= 13){
            x = 10;
        }else if(y > 10 && y <= 13){
            y = 10;
        }else if(z > 10 && z <= 13){
            z = 10;
        }
        
    Sum = x + y + z;

    return Sum%10;
}


int main()
{
    srand(time(0));

    int playerScore, yugiScore, playerAction, yugiAction;
	int playerCards[3] = {drawCard(), drawCard(), 0};
	int yugiCards[3] = {drawCard(), drawCard(), 0 };

    cout << "---------ORE NO TURN, DRAW!!!------------\n";
	cout << "Your cards: " << cardNames[playerCards[0]] << " " << cardNames[playerCards[1]] << "\n";
	playerScore = calScore(playerCards[0],playerCards[1],playerCards[2]);
	cout << "Your score: " << playerScore << "\n";
}
