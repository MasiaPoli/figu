#include <iostream>
#include "sp.h"
#include <cmath>
using namespace std;

int main()
{
   rek a;
   cin>>a;
   cout<<a.per()<<" "<<a.s()<<'\n';
   cout<<a<<'\n';
   circle s;
   cin>>s;
   cout<<s.per()/M_PI<<" "<<s.s()/M_PI<<'\n';
   cout<<s<<'\n';
   el e;
   cin>>e;
   cout<<e.per()/M_PI<<" "<<e.s()/M_PI<<'\n';
   cout<<e;
    return 0;
}
