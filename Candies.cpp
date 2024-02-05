int requiredCandies(vector < int > &a) {

    // Write your code here.

    int n=a.size();

        vector<int>candies(n,1);

        if(n==1){

            return 1;

        }

for(int i=1;i<n;i++){

    if(a[i]>a[i-1] && candies[i]<=candies[i-1]){

        candies[i]=candies[i-1]+1;

    }

}

for(int i=n-2;i>=0;i--){

    if(a[i]>a[i+1] && candies[i]<=candies[i+1]){

        candies[i]=candies[i+1]+1;

    }

 

}

int totalCandies=0;

for(int i=0;i<n;i++){

    totalCandies+=candies[i];

}

return totalCandies;

 

};
