/*
    C++ Program to generate Random OTP  
    Example :
    length of  OTP  = 5
    Your Random OTP is = 51678? 
                       
    Random OTP is =  "51678"
    
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define rep(i,a,b) for(ll i=a; i<=b; i++)


string OTP_Generator(int len){                          // otp generator function with parameter as length of OTP
    string str = "0123456789";
    
    int n = str.length();
    
    string OTP;
    
    for(int i = 1;i<=len;i++){
        OTP.push_back(str[rand() % n]);
    }
    
    cout<<"Your Rabdom OTP is = "<<OTP<<endl;           // return otp
}
    

int main()
{   
    srand(time(0));
    
    int length;
    cout<<"Enter the length of OTP = \n";
    cin>>length;                                        // input length of OTP
    
    OTP_Generator(length);                              // calling otp generator function
    
    return 0 ; 
    
}