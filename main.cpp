#include<iostream>

const int a1 = 5;
const int b1 = 5;

int main(){
    int a, b;
    int x,f = 1;
    std::cout << "Enter 2 numbers:" << "\n";
    std::cin >> a >> b;
    if(a + b >= 10 && a + b <= 20)
        std::cout << "true" << "\n";
    else std::cout << "false" << "\n";

    std::cout << "Enter number" << "\n";
    std::cin >> x;
    int i;
    if(x > 1){
        for(i = 2; i*i <= x; i++) {
            if (x % i ==0 ) break;
        }
        if (i * i > x )
            std::cout << "Prime number" << "\n";
        else std::cout << "Not a prime number" << "\n";
    } 
    else std::cout << "Not a natural number";

    if(a1 + b1 == 10 || a1 == 10 && b1 == 10)
        std::cout << "true" << "\n";
    else std::cout << "false" << "\n";
    int n;
    std::cout << "enter the size of the matrix:";
    std::cin >> n;
    int arr[n][n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
            if(i == j)
                arr[i][j] = 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) 
            std::cout << arr[i][j] << ' ';
        std::cout << "\n";
    }
    int year;
    std::cout << "Enter year:" << "\n";
    std::cin >> year;
    if(year % 4 != 0) std::cout << "Not Leap year";
    else if(year % 100 == 0 && year % 400 != 0) std::cout << "Not Leap year";
    else std::cout << "Leap year";
}
