#include<bits/stdc++.h>
using namespace std;

class GenerateData
{
private:
    int n;
public:
    GenerateData()
    {
        n=100;
    }
    GenerateData(int n)
    {
        this->n=n;
    }
    void genrate(int n,string filename)
    {
        ofstream fout("filename");
        srand(time(0));
        for(int i=0;i<n;i++)
        {
            fout<<(rand()%10000+1)<<endl;
        }
    }
};

int main()
{
    GenerateData *gd= new GenerateData();
    gd->genrate(100000,"100k.text");
     return 0;
}

