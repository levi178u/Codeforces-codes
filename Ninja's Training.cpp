Problem link: https://www.naukri.com/code360/problems/ninja-s-training_3621003

SOLUTION:
int sol(int day, int last ,  vector<vector<int>> &a,  vector<vector<int>> &dp ){

    //  int n= a.size();
    int m= a[0].size();

    
   
   //base
    if(day == 0){

        int maxi =0;

        for (int i = 0; i < m; i++) {
            
            if(i!= last){
                 maxi = max(maxi, a[0][i]);
            }   
           
        }
        return maxi;
    }


    if(dp[day][last] !=-1){
        return dp[day][last];
    }

    int maxi =0;

    for(int  i=0; i< m; i++){

        int pts =0;

        if(i!=last){

            pts = a[day][i] + sol(day -1, i, a, dp);

            maxi = max(maxi, pts);
        }

    }

    return dp[day][last] = maxi;
}

int ninjaTraining(int n, vector<vector<int>> &a)
{
    // Write your code here.

    
    int m= a[0].size();

    vector< vector< int>> dp(n, vector< int> (4,-1));
    

    for(int  i=0; i<4 ;i++){
        for(int j =0; j< 3;j++){

            if(i!=j){
                 dp[0][i] = max(dp[0][i] , a[0][j]);
            }
           
        }
    }


    for(int days= 1 ; days < n ;days ++){

        for(int last=0 ; last< 4 ;last++){

            int maxi=0;

            for(int task =0; task<3 ; task ++){

                int pts =0;

                if(last!=task){

                    pts = dp[days-1][task] + a[days][task];
                    
                    maxi = max(maxi, pts);
                }
            }
            dp[days][last] = maxi;
        }
    }

    return dp[n-1][3];
}
