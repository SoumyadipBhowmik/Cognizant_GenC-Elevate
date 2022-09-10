/* Find the Second highest element of an array */

#include <iostream>
using namespace std;

int secondHighest(int arr[], int range){
    int biggestNumber = -1, secondBiggestNumber = -1;
    for( int i = 0; i < range; i++){
        if(arr[i] > biggestNumber){
            secondBiggestNumber = biggestNumber;
            biggestNumber = arr[i];
        }
        else if (arr[i] > secondBiggestNumber && arr[i] != biggestNumber){
            secondBiggestNumber = arr[i];
        }
    }
    return secondBiggestNumber;
}

int main(){

    int arr[100];
    int range;
    cout << "Enter the size of the array: ";
    cin >> range;
    for (int i = 0; i < range; i++){
        cout << "Enter value for array no " << i+1 <<": ";
        cin >> arr[i];
    }
    int ans = secondHighest(arr, range);
    cout << "The second highest number is: " << ans;
    return 0;
}