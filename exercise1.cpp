
#include <iostream>
using namespace std;

bool is_sorted(int arr[], int len)
{
    
    for (int i = 0; i < len-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            
            return 0;
        }
        
    }

    return 1;

}
int main()
{
    int arr[6];
    int len = sizeof(arr) / sizeof(int);
    
    for (int i =0; i<6; i++)
        cin >> arr[i];
    
    
    cout << is_sorted(arr, len);
}



