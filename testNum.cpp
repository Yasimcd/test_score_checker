// Lab 4 testNum.cpp
// This program checks to see if a test score is equal to 100. 
// It currently contains a logic error. 
// Yasim Cruz
#include <iostream>
using namespace std;

int main()
{
   int score;  
   cout << "\nEnter your Score : ";        // Initialize student's test score
   cin >> score;
   if (score == 100)
      cout << "You made a perfect score.\n";
   
   else if (score != 100)
      cout << "You needed " << 100 - score 
           << " more points for a perfect score.\n";
    
   return 0;
}
