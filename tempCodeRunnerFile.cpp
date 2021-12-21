int drawCard(void){
	int x = rand()%13 + 1, y;
        if(x == 1){
            cout << "A" << " ";
            y = 1;
        }else if(x == 11){
            cout << "J" << " ";
            y = 11;
        }else if(x == 12){
            cout << "Q" << " ";
            y = 12;
        }else if(x == 13){
            cout << "K" << " ";
            y = 13;
        }else{
            cout << x << " ";
            y = x;
        }
        return y;
}