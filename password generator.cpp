/*
	This is a Random Password Generator (RPG). IT generates a random password of given length.
	
	step 1 :- Run the code in any IDE(c++).
	step 2 :- Input the length of password you want to generate.
	step 3 :- End the code as your random password is generated.
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
					  "~`!@#$%^&*({[]}):<>,.?/';_-+=|" ;

	int pass;
	cout<<" Enter the length of  password : - ";
	cin>>pass;

	rep(i,1,pass)
	{
		password += data[rand() % 93] ;
	}

	cout<<" \nyour desired random password is:  "<<password<<endl;
}

int main()
{
	generate();

	return 0 ; 
}
