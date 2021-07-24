#include<iostream>
using namespace std;

int main()
{
    int n,key,c=0;
    int first,last,middle;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>key;
    first=arr[0];
    last=arr[n-1];
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<key)
        first=middle+1;
        else if(arr[middle]==key)
        {
            c=middle;
            cout<<"\n Element present"<<" "<<c;
            break;
        }
        else
        last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
    {
        c=n;
    cout<<"\n Element not present"<<" "<<c;
    }
}