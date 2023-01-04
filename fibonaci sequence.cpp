#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define rep(i,a,b) for(int i=a;i<b;i++)


int prime()
{
	ll num,k;
	cin>>num;
	cout<<1<<" "<<2<<" "<<3<<" "<<5<<" "<<7
	<<" "<<11<<" "<<13<<" "<<17<<" "<<19<<" "<<23<<" "<<29<<" "<<31<<" ";
	for(int k=5;k<num;k++)
	{
		if(k%2!=0 && k%3!=0 && k%5!=0 &&k%7!=0 && k%11!=0 && k%13!=0 && k%17!=0 && k%19!=0 && k%23!=0 && 
			k%29!=0 && k%31!=0)
			
		{
			cout<<k<<" ";
		}
	}

}

/*
	jha tk prime number nikalna hai like 1000 then find a number jiska square 1000 se jada ho aur first ho
	like 32 then find all prime number between 1 to 32 and write it in if box of k%number!=0
	
*/


int main()
{

	prime();
	 return 8;
}

