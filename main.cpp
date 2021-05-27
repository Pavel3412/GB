#include<iostream>
#include<cstdlib>

void ReplaceFunc(int* arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == 0)
            arr[i] = 1;
        else if(arr[i] == 1)
            arr[i] = 0;
    }
    for(int i = 0; i < 8; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}

void FillingArr(int* mass){
    mass[0] = 1;
    for(int i = 1; i < 8; i++){
        mass[i] = mass[i -1] + 3;
    }
    for(int i = 0; i < 8; i++)
        std::cout << mass[i] << ' ';
    std::cout << std::endl;
}
bool checkBalance(int* a, int n){
    bool balanceExist = false;
    float aSum = 0;
    int balanceSum = 0;
    for(int i = 0; i < n; i++){
        aSum = aSum + a[i];
    }
    for(int i = 0; i < n; i++){
       balanceSum = balanceSum + a[i];
       if(balanceSum == aSum/2){
           balanceExist = true;
           break;
       }      
    }
    return std::cout << balanceExist << '\n';
}

void ArrayOffset(int* b, int n, int k){
    int temp = 0;
    if(k < 0){
        for(int i = 0; i < abs(k); i++){
            temp = b[0];
            for(int j = 0; j < n ; j++)
                std::swap(b[j],b[j+1]);
            b[n - 1] = temp;
        }
    }
    else for(int i = 0; i < k; i++){
        temp = b[n - 1];
        for(int j = n - 1; j > 0; j--)
            std::swap(b[j], b[j - 1]);
        b[0] = temp;
    }
    std::cout << "output shifted array:" << ' ';
    for(int i = 0; i < n; i++)
        std::cout << b[i] << ' ';
    std::cout << std::endl;
}


int main(){
    int a[] = {1, 1, 0, 0, 1, 1, 1, 0};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8};
    bool checkB;
    int n;
    int mass[8] = {};
    ReplaceFunc(a, 8);
    FillingArr(mass);
    checkBalance(a, 8);
    std::cout << "Enter the offset:" << ' ';
    std::cin >> n;
    ArrayOffset(b, 8, n);
    return 0;
}
