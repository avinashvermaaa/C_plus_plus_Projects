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
					  "~`!@#$%^&*({[]}):<>,.?/';_-+=|" ;

	int pass;
	cout<<"length of  password : - ";
	cin>>pass;

	rep(i,1,pass)
	{
		password += data[rand() % 93] ;
	}

	cout<<" \nyour desired password is : "<<password<<endl;
}

int main()
{
	generate();

	return 0 ; 
}