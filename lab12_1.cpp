#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

string grade(int x){
    string y;
        if(x == 0){
            y = "A";
        }else if(x == 1){
            y = "B+";
        }else if(x == 2){
            y = "B";
        }else if(x == 3){
            y = "C+";
        }else if(x == 4){
            y = "C";
        }else if(x == 5){
            y = "D+";
        }else if(x == 6){
            y = "D";
        }else if(x == 7){
            y = "F";
        }else if(x == 8){
            y = "W";
        }
    return y;
}

int main()
{
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade(rand()%9) << " in this 261102.";

    return 0;
}
