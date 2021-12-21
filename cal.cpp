#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

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
    cout << calScore(1,1,1) << endl;
    cout << calScore(11,4,0);
    return 0;
}