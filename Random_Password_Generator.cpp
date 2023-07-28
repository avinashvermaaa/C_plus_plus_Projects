/*
    C++ Program to generate Random Password  
    Example :
    length of  password  = 5
    Your Random Password is = gx5W? 
                       
    Random Password is =  "gx5W?"
    
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define rep(i,a,b) for(ll i=a; i<=b; i++)

int generate()
{
    srand(time(0));
    string password;

         string data = "abcdefghijklmnopqrstuvwxyz"
                       "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                       "0123456789"
                       "!@#$%^&*:<>?/;_-'+=" ;

    int pass_length;
    cout<<"length of  password = ";
    cin>>pass_length;

    rep(i,1,pass_length)
    {
        password += data[rand() % 81] ;     // 81 = number of character in string data
    }
    cout<<" \nYour Random Password is = "<<password<<endl;
}

int main()
{   
    generate();
    return 0 ; 
}