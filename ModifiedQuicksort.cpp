#include <stdio.h>
#include <iostream>

using namespace std;


class Sortation
{
    public:
    Sortation()
    {
    }
        
    int* quicksort(int* arr, int high, int low){
        if(low<high)
        {
            
        
            int pi = partition(arr,high,low);
            quicksort(arr, high, pi + 1);
            quicksort(arr, pi - 1,low);
        }
        return arr;
    }

    int partition(int* arr, int high, int low){
        int pivot = arr[high];
        int i = (low)-1;

        for(int j = low; j <=high; j++)
        {
            if(arr[j] < pivot)
            {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        return i+1;
    }



};

int main(int argc, char** argv)
{
    Sortation sort = Sortation();
    int data[11] = {3, 1 ,4, 1, 5, 9, 2, 6, 5, 3, 6};
    //Sortation s = Sortation();
    sort.quicksort(data,10,0);
    for(int i = 0; i < 11; i++)
    {
        cout << data[i] << "  ";
    }
    cout << endl;
    return 0;
}