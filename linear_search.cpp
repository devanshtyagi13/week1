#include<iostream>
using namespace std;

int main()
{
    int key,c=0,n,i;
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
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            c++;
            cout<<"\n Element present"<<" "<<c;
            break;
        }
        else{
            c++;
        }
    }
    if(c==n)
    {
        cout<<"\n Element not present"<<" "<<c;
    }
}