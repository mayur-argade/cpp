// check palindrome those words who will remain same from whenever we start reading them 
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check =true;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = false;
            break;
        }
    }

    if(check==true)
    {
        cout<<"word is a palindrome ";
    }
    else
    {
        cout<<"word is not a palindrome ";
    }

    return 0;
}