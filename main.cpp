#include<iostream>

int main(){
    int a = 1;
    float f = 1.432;
    double d = 1.4535;
    char ch = 'A';
    bool b = true;
    enum variants {X, O};
    variants arr[2] =  {X, O};
    char game_field[3][3] = {{'X', ' ', ' '},
    {'O','X',' '},
    {'O', 'O', 'X'}};
    std::cout << game_field[2][2];
    struct game_board{
    int game_number;
    int game_turn;
    char correct_game_board[3] [3];
    };
    
    return 0;
}
