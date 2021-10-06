#include <bits/stdc++.h>
using namespace std;

#define fast                             \
       ios_base::sync_with_stdio(false); \
       cin.tie(NULL);
#define time cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" \
                  << "\n";
#define F first
#define S second
#define pb push_back
typedef long long int ll;


void permutation(string s, string answer)
{

       if (s.length() == 0)
       {
              cout << answer << "\n";
              return;
       }

       for (int i = 0; i < (int)s.length(); i++)
       {
              char first = s[i];
              string left_String = s.substr(0, i);
              string right_String = s.substr(i + 1);
              string rest_String = left_String + right_String;
              permutation(rest_String, answer + first);
       }
}
void solve()
{

       string s = "PQRS";
       string answer = "";
       permutation(s, answer);

       /* Time complexity = O(n*n!)
           n! for permutations 
           O(n) time to print each permutation  
       */
}

int32_t main()
{

       fast;
       time;



       int t = 1;
       //cin >> t;

       while (t--)
       {
              solve();
       }

       return 0;
}
