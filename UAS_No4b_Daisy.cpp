#include <iostream>

using namespace std;

main()

{
int N, i, j;

cout<<"Tinggi Segitiga N=?";cin >>N;

for (i=1; i<N;i++)
{
    for(j=1; j<=i; j++)
    {
        cout<<"+";
    }
    cout<<endl;
}
}
