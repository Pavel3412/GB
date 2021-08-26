#include <iostream>

int prime_numb(int a) {
    std::cin >> a;
    int k = 1;
    if (a > 1) {
        for(int i = 2; i < a; ++i){
            if(a % i == 0) { 
                k = 0;
                break;
            }
        }
    }
    else std::cout << "Incorrect input";
    if(k == 1 || a > 1) std::cout << "Prime number";
    else std::cout << "Not prime number";
    
}



int main() {
    int a;
    prime_numb(a);
}