/*
    This is a IPL projected score predictor.
    
    How to use ?
    
    step 1 : Enter the current runs in scoreboard           like    100    // (100 runs)
    step 2 : Enter current ongoing over and ball            like    10 2   // (10 overs 2 ball)
    step 3 : Hit enter and you will get your projected_score in 20 overs through current run rate.
*/


#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void projected_score(){
    double current_run,runs_per_ball,projected_score,run_rate;
	
	cout<<"enter Current Runs in scoreboard : "<<endl;
	cin>>current_run;
	
	cout<<"enter Current running over and ball : "<<endl;
	
	int over[2],balls;
	cin>>over[0]>>over[1];
	
		balls = over[0]*6 + over[1] ;
		runs_per_ball = current_run/balls;

	    	run_rate = runs_per_ball*6 ;
	     projected_score= runs_per_ball*120; 
	     
	cout<< "Your Current run rate is : "<<fixed<<setprecision(3)<<(run_rate) <<" runs per over"<<endl;	
	cout<< "Your projected score in 20 over's is : "<<fixed<<setprecision(3)<<(projected_score) <<endl;
}


int main()
{
	fastio();
    projected_score();	

}
