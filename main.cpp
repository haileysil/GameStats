#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

//global variables...
const int NUM_LEVELS = 10;

//function prototypes...
int randomNumberBetween(unsigned int, unsigned int);
double avgPlayerScore(vector<int>);
double avgLevel(int, int, int);
vector<double> levelAverages(vector<int>,vector<int>,vector<int>);

int main()
{
        srand( time(NULL) );
        vector <int> player1;
        vector <int> player2;
        vector <int> player3;

        for(int i=0; i < NUM_LEVELS; i++)
        {
                cout<<"\nPlaying level "<<(i+1)<<"...\n";
                player1.push_back( randomNumberBetween(0,9) );
                cout<<"Player 1 scored "<<player1[i]<<" points.\n";
                player2.push_back( randomNumberBetween(2,7) );  
                cout<<"Player 2 scored "<<player2[i]<<" points.\n";
                player3.push_back( randomNumberBetween(4,5) );
                cout<<"Player 3 scored "<<player3[i]<<" points.\n";
        cout<<"Level average is "<<avgLevel(player1[i],player2[i],player3[i])<<endl;
        }

        cout<<"Player 1 averaged "<<avgPlayerScore(player1)<<endl;
        cout<<"Player 2 averaged "<<avgPlayerScore(player2)<<endl;
        cout<<"Player 3 averaged "<<avgPlayerScore(player3)<<endl;
        return 0;
}

/**
 * Given two numbers, this function generates a random number in between the
 * value of the numbers provided, including the numbers themselves. For
 * unpredictable values, needs srand(time(NULL)); run once within int main().
 * The numbers can be provided in any order.
 *
 * @param minimum number within range of possible random numbers
 * @param maximum number within range of possible random numbers
 * @return random number between min and max
 **/
int randomNumberBetween(unsigned int min, unsigned int max)
{
        if( min > max )
        {
                int temp = min;
                min=max;
                max=temp;
        }

        return rand() % (max+1-min) + min;
}

double avgPlayerScore(vector<int> score)
{
        double sum = 0.0;

        for (int i=0; i<score.size(); i++)
        {
                sum = sum + score[i];
        }
        return sum/score.size();
}

double avgLevel(int a,int b,int c)
{
        double sum = 0.0;
        sum= a+b+c;
        return sum/3;
}

vector<double> levelAverages(vector<int> a,vector<int> b,vector<int> c)
{

vector <double> avg;

for (int i=0; i<a.size(); i++)
{
avg.pushback (avgLevel(a[i],b[i],c[i]));
}


}
