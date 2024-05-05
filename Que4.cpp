//Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be used to form the two numbers.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,1,5,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int ele  : arr){
        cout<<ele<<" ";
    }
    // Insertion sort code
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl;
    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    //Adding the sorted array into integer
    int x=0;//
    for(int i=0;i<n;i++){
        x=arr[i]+x*10;
        
    }
    // cout<<endl<<"x = "<<x;//smallest number
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    // cout<<endl;
    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    //Adding the sorted array into integer
    int y=0;//
    for(int i=0;i<n;i++){
        y=arr[i]+y*10;
        
    }
    // cout<<endl<<"y = "<<y<<endl;// second smallest number
    cout<<"Minimum possible sum = " <<x+y;
    return 0;
}