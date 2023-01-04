#include<bits/stdc++.h>
using namespace std;



#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void required_runrate(int runs,int over_arr[2],int targert_run)
{
	
}


int main()
{
	fastio();
	
	double n,k;
	cout<<"enter the runs : "<<endl;
	cin>>n;
	cout<<"enter the over : "<<endl;
	
	int arr[2],balls;
	cin>>arr[0]>>arr[1];
	
		balls = arr[0]*6 + arr[1] ;
		k = n/balls;
		cout<<k<<endl;
		 k = k*120; 
	
	cout<< "Your projected score in 20 over's is : "<<floor(k) <<endl;
	
}