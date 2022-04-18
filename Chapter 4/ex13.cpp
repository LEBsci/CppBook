#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

// Sieve of Eratosthenes

using namespace std;

int main(){
    int j=0, n=0, p=0;
    vector<int> cand; 
    cout<<"Enter an integer number to be the max limit: "<<'\n';
    cin>>n;
    
    //Creates a vector of candidates up to the number indicated
    for (int i=2; i<n+1; ++i){ 
        cand.push_back(i);
    }

    while(j<cand.size()){//Check every position of the vector
        if (cand[j]!=0){//Non primes will be made zero so it checks non eliminated candidates
            p=cand[j];
            cout<<p<<'\n';//Prints the prime
            
            for (int k=0; k<cand.size(); ++k){
                int t=0;
                while(t*p<cand.size()+2){//Now check every position for multiples of the prime, up to the number specified
                    if (t*p==cand[k])
                        cand[k]=0;
                    ++t;
                }
            }
        }
        ++j;
    }    
};