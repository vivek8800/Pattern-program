#include<iostream>
using namespace std;

int main(){

    //declare number
    int n;

    //print this statement
    cout<<"Enter how many rows you want to insert:";
    //Take input from user
    cin>>n;

    // condition for outer row
    for(int row=0; row<n; row++)
    {
        //condition for inner row
        for(int col=0; col<n; col++)
        {
            //print star
            cout<<"*  ";
        }
        // for next line
        cout<<endl;
    }

}