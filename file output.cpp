#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout("sakif. text");
    srand(time(0));
    for(int i=0; i<3; i++)
    {
        fout<<(rand()%5000)+1<<endl;
    }

    return 0;
}
