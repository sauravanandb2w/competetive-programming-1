//cff 467A.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;




int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n,ran;

cin >> n;

set<int> s;

for (int i = 0; i < n; ++i)
{
    cin >> ran;
   
   if(ran>0){
   	s.insert(ran);
   }



}


cout << s.size() << endl;

return 0;


}



