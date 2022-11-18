#include <iostream>
using namespace std;

// find the index of the key ------binary search 
 int BinarySearch(int arr[],int size,int key)
 {
    int start = 0;
    int end = size-1;
    int mid = (start+(end-start)/2);
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;

        }
        else
        {
            end=mid-1;

        }
        mid = (start+(end-start)/2);
    }
    return -1;
 }
 
 int main()
 {
    int Even[6] = {2,9,12,18,21,26};
    int Odd[7]  = {3,8,10,13,19,20,27};
    int Evenindex = BinarySearch(Even,6,18);
    cout<<"The index of 18 is:- "<<Evenindex<<endl;
    int Oddindex = BinarySearch(Odd,7,10);
    cout<<"The imdex of 10 is:- "<<Oddindex<<endl;

     return 0;
 }