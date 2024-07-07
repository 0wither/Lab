// testando aleatoridade de seed 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   // unsigned seed = time(0);
    
    //srand(seed);
    srand(time(0));
    cout << rand()%3 << endl;
    return 0;
}
