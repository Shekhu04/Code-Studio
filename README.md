# Code-Studio
#include<iostream>
using namespace std;

int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if (key > arr[mid])
        {
            //go to right part
        s = mid + 1;
        }
        else if ( key < arr[mid])
        {
            //go to left part
        e = mid - 1;
        }

        mid = s+ (e-s)/2;
     
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
           s = mid +1;
        }
        else if (key > arr[mid])
        {
            //go to right part
        s = mid + 1;
        }
        else if ( key < arr[mid])
        {
            //go to left part
        e = mid - 1;
        }

        mid = s+ (e-s)/2;
     
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}
