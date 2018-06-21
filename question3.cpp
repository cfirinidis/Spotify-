#include <iostream>
#include <string>
#include <array>
using namespace std;

// Returns the count of ways we can add coins to achieve a  given value
int changePossibilities( int coins[], int nCoins, int totVal ){
//{cout<<"n "<<n<<" m-> "<<m<<" S[m-1] "<<S[m-1]<<endl;


    if (totVal == 0)// if we have exact change
        return 1;

    if ( totVal < 0)//if we have more than the desired amount
        return 0;

    if (nCoins <=0 && totVal >= 1)//if we have no more coin variations but have run out of options
        return 0;

    return changePossibilities( coins, nCoins - 1, totVal ) + changePossibilities( coins, nCoins, totVal-coins[nCoins-1] );
}

// Driver program to test above function
int main()
{
int nCoins;
cout<<"Please enter the number of coins you have: "<<endl;
cin>>nCoins;

int coins[nCoins];
int x;
cout<<"Enter the value of each coin : "<<endl;
for(int i = 0; i<nCoins; i++){
    cin>>x;
    coins[i]= x;
}
int totalVal;
cout<<"Enter the total amount you're looking for :"<<endl;
cin>>totalVal;


cout<<"The total number of ways to get that value with those coins is : "<<changePossibilities(coins, nCoins, totalVal)<<endl;


    return 0;
}
