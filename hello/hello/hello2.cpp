#include <iostream>
using namespace std;

#define MAX 10 // vakion m„„rittely, vanha tapa
const int max1 = 20;  //vakion m„„rittely,uusi suositeltava tapa

int summa; // glopaali kokonaislukumuuttujan m„„rittely 

void Laske(int, int); // aliohjelman esittely

void main()  // p„„ohjelma alkaa t„st„
{  // aloitus
 int luku1 = 2;
 int luku2;
 cout<<"Sy”t„ luku: ";
 cin>>luku2;
 Laske(luku1, luku2); // aliohjelman kutsu
 if (summa < MAX)
 { // tosi
  cout<<"Summa on pienempi kuin ";
  cout<<MAX;
 }
 else
 { // ep„tosi
  cout<<"Summa on suurempi kuin "<<MAX;  
 }
}  // lopetus

void Laske(int eka, int toka) // aliohjelman m„„rittely
{
 summa = eka + toka;
}