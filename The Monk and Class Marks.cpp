// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE


//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;
using vvi   =   vector<vector<int>>;






#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(auto value:v){cout<<value<<" ";}cout<<endl;
#define     pout(p)         for(auto value:p){cout<<value.ff<<" "<<value.ss<<endl;}cout<<endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1








int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:input.txt", "r", stdin);
    freopen("F:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int t; cin >> t;
    map < int , multiset<string> > m;

    for (int i = 0; i < t; ++i)
    {
        string name;
        int marks;
        cin >> name >> marks;
        m[marks].insert(name);
    }
    //map < int , set<string> > :: reverse_iterator it;
    for(auto it : m)
    {
        auto &students = it.ss;
        for(auto value : students)
            cout << value << " " << -1*it.ff << endl;
    }
//     for(auto it = m.rbegin() ; it != m.rend() ; ++it)
//     {
//         auto &students = it->ss;
//         int marks = it->ff;
//         for(auto value : students)
//             cout << value << " " << marks << endl;
//     }
  
  
  
  
  
  
  
  
    // for(auto &v : it->ss)
    //     cout << v << " " << it->ff << endl;
    // auto it = --m.end();
    // while(1) {
    //     auto &students = (*it).ss;
    //     int marks = (*it).ff;
    //     for(auto value : students)
    //         cout << value << " " << marks << endl;
    //     if(it == m.begin())
    //         break;
    //     --it;
    // }
    // int t;
    // cin >> t;

    // multiset< pair<int , string > >  m;

    // for (int i = 0; i < t; ++i)
    // {

    //     string s;
    //     int n;
    //     cin >> s >> n;
    //     m.insert({n , s});

    // }

    // cout << "size = " << m.size() << endl;

    // multiset< pair<int , string > >  :: reverse_iterator rit;

    // for(rit = m.rbegin() ; rit != m.rend() ; ++rit)
    //     cout << rit->ss << " " << rit->ff << endl;


    // int t;
    // cin >> t;
    // multimap < int , string > m;
    // for (int i = 0; i < t; ++i)
    // {
    //     string s;
    //     int n;
    //     cin >> s >> n;
    //     m.insert({n , s});
    // }
    // multimap < int , string >  :: reverse_iterator rit;

    // for (rit = m.rbegin() ; rit != m.rend() ; ++rit)
    //     cout << rit->ss << " " << rit->ff << endl;

    

    return 0;
}


