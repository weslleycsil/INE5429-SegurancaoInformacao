#include<iostream>

//srand
#include <stdlib.h>
#include<time.h>

#include "bbs.cpp"

using namespace std;

int main()
{
    srand(time(NULL));

    const unsigned long long P = 26839;
    const unsigned long long Q = 37363;

    const unsigned long long seed = (rand() % 4294967296); //gerar uma seed randomica
    //4294967296; maior numero de 64bits
    
    BBS numberGen(P, Q, seed);
    
    //generate x random bits
    for (int i = 0; i < 4096; i++)
    {
        cout << numberGen.getRandBit();
    }
    cout << endl;

    return 0;
}