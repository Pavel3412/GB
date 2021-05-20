#include<iostream>
#include"hd.h"
int main(){
    res = a * (b + (c / d));
    printf("%.2lf\n", res);
    res = 0;
    int f;
    std::cin >> f;
    res = (f > 21) ? (f-21) * 2 : (f-21);
    std::cout << res;
    int arr[3][3][3];
    std::cout << *(*(*(arr + 1) + 1) + 1) << "\n";
}
