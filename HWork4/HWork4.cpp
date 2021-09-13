#include<iostream>
#include<time.h>
const int col = 10;
const int row = 10;

void initArr(int array[][col], int size){
   for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < col; j++)
        {
            array[i][j] = 1 + rand() % 30; 
        }
     }
}

void printArr(int array[][col], int size){
   for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < col; j++)
        {
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }
} 

void Bubble_sort(int array[][col], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int m = i;
            int n = j + 1;
            while (true)
            {
                if (n == col)
                {
                    n = 0;
                    m++;
                    if (m == size) break;
                }
                if (array[i][j] > array[m][n]) std::swap(array[i][j], array[m][n]);
                    n++;
            }
        }
    }
}

int main(){
    int array[col][row];
    initArr(array, row);
    std::cout << "Init random array:" << std::endl;
    printArr(array, row);
    std::cout << "After bubble sort:" << std::endl;
    Bubble_sort(array,row);
    printArr(array, row);
    return 0;
}