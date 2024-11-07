#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numFriends, numBottles, volumePerBottle, numLimes, slicesPerLime, gramsOfSalt, volumePerDrink, saltPerDrink;
    
    
    cin >> numFriends >> numBottles >> volumePerBottle >> numLimes >> slicesPerLime 
        >> gramsOfSalt >> volumePerDrink >> saltPerDrink;
    
    
    int totalVolume = numBottles * volumePerBottle;         
    int totalSlices = numLimes * slicesPerLime;             
    int maxDrinksByVolume = totalVolume / volumePerDrink;   
    int maxDrinksByLimes = totalSlices;                     
    int maxDrinksBySalt = gramsOfSalt / saltPerDrink;       

    
    int maxDrinksPerPerson = min(min(maxDrinksByVolume, maxDrinksByLimes), maxDrinksBySalt) / numFriends;

    
    cout << maxDrinksPerPerson << endl;

    return 0;

}


