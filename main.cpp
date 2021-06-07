#include<iostream>
#define RANGE(a, n) if(a >= 0 && a < n) \
std::cout << "Vhodit" << std::endl;\
else std::cout << "Ne vhodit" << std::endl;
#define GETEL(array,x,y) *(*((array)+(x) + (y)));
int main(){
    RANGE(8,9)
}