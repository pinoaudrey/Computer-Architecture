#include <bits/stdc++.h>
using namespace std;
 
int SieveOfEratosthenes(int n)
{
 
int count = 0;    
bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p=2; p<=n; p++)
       if (prime[p])
       	count++;
return count;
}
 
int main()
{
    int n = 1000000;
    cout << SieveOfEratosthenes(n) << endl;
    return 0;
}
