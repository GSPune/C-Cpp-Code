//A. Rudolf and the Ticket
//For each testcase, output a single integer — the number of ways Rudolf can select two coins, taking one from each pocket, 
//so that the sum of the coins does not exceed k.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,k;
    cin >> t;
    
    for (int i = 0; i < t; ++i)
    {
        cin >> n >> m >> k;
        vector<int> N(n);
        vector<int> M(m);
        int count = 0;
        for (int j = 0; j < n; j++)
            cin >> N[j];
        for (int p = 0; p < m; p++)
            cin >> M[p];
        
        for (int p = 0; p < n; p++)
        {
            for (int i = 0; i < m; i++)
            {
                if (N[p] + M[i] <= k)
                    count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
