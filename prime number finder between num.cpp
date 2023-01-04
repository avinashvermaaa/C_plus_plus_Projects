#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define rep(i,a,b) for(int i=a;i<b;i++)


int prime()
{
	ll num,k;
	cin>>num;
	 cout<<2<<" "<<3<<" "<<5<<" "<<7<<" "<<11<<" "<<13<<" "<<17<<" "
	 <<19<<" "<<23<<" "<<29<<" "<<31<<" ";
	for(int k=5;k<=num;k++)
	{
		if(k%2!=0 && k%3!=0 && k%5!=0 &&k%7!=0 && k%11!=0 && k%13!=0 && k%17!=0 && k%19!=0 && k%23!=0 && 
			k%29!=0 && k%31!=0  &&k%37!=0  &&k%41!=0  &&k%43!=0  &&k%47!=0  &&k%53!=0  &&k%59!=0  &&k%61!=0  &&k%67!=0  &&k%71!=0  &&k%73!=0  &&k%79!=0  &&k%83!=0  &&k%89!=0  &&k%97!=0  &&k%101!=0  
			&&k%103!=0  &&k%107!=0  &&k%109!=0  &&k%113!=0  &&k%127!=0  &&k%131!=0  &&k%137!=0  &&k%139!=0  &&k%149!=0  &&k%151!=0  &&k%157!=0  &&k%163!=0  &&k%167!=0  &&k%173!=0  &&k%179!=0	  &&k%181!=0  &&k%191!=0  &&k%193!=0  &&k%197!=0  &&k%199!=0  &&k%211!=0  &&k%223!=0  &&k%227!=0  &&k%229!=0  &&k%233!=0  &&k%239!=0  &&k%241!=0  &&k%251!=0  &&k%257!=0
			  &&k%263!=0  &&k%269!=0  &&k%271!=0  &&k%277!=0  &&k%281!=0  &&k%283!=0  &&k%293!=0  &&k%307!=0  &&k%311!=0  &&k%313!=0  &&k%317!=0)
			
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

