#include  < iostream>

using namespace std;
 

    int
    SS(int arr[], int n)
{
        for (int gap = n / 2; gap > 0; gap /= 2)

    
    {

           for (int i = gap; i < n; i += 1)

        
        {

                        int temp = arr[i];

                        int j;
                        

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)

                arr[j] = arr[j - gap];

                        arr[j] = temp;

                    
        }

            
    }

        return 0;
}
  void printA(int arr[], int n)
{
        for (int i = 0; i < n; i++)

        cout << arr[i] << " ";
}
  int main()
{
        int arr[] = {77, 94, 14, 89, 120}, i;

        int n = sizeof(arr) / sizeof(arr[0]);
     
    cout << "Array before : \n";

        printA(arr, n);
     
    SS(arr, n);
     
    cout << "\nArray after : \n";

        printA(arr, n);
     
    return 0;
}