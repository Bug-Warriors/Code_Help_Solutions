/*
Question: Your genius friend Kolmogorov always makes you feel inferior. This time you have a challenge for
him. You give him a positive integer n, and ask him to find the number of different ways there are to form
the given number n as a sum of positive integers in non decreasing order. Now to pose this challenge to him
you need to solve it yourself. :)
Sample Input 1: n=3
Sample Output 1: 3 ways
Sample Input 2: n=4
Sample Output 2: 5 ways

Explanation for n=3 ways are 1+1+1, 1+2, 3, therefore 3 ways in total
            for n=4 ways are 1+1+1+1, 1+1+2, 1+3, 2+2, 4, therefore 5 ways in total
*/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;


/* 
    Implementation: One of the most basic combinations generating techniques is recursion with a loop
    for more refer to Subset Generation and Backtracking section of Competitive Programmer's handbook, by Antii Laaksonen.
    combinations function uses this recursive technique to generate possible combinations and we have to 
    select only increasing order combinations according to question, for that if i>=dif condition is used
*/
ll combinations(ll n, ll dif=0){
    if(n==0)return 1;
    ll ways=0;
    for(ll i=1;i<=n;i++){
        if(i>=dif){
            ways+=combinations(n-i, i);
        }
    }
    return ways;
}

int main(int argc, char const *argv[]){

    ll n;
    cin>>n;
    cout<<combinations(n)<<endl;

    return 0;
}