#include <iostream>
using namespace std;

int main() {
    int cost = 0;
    int t;
    cin >> t;
    while(t--)
    {
        int n,x; // n = number of products
        cin >> n >> x;
        int a[n];
        int b[n];
        for(int i = 0;i<n;i++)
        {
            cin >> a[i];
        }
	    
        for(int i = 0;i<n;i++)
        {
            cin >> b[i];
        }
       
        for(int i = 0;i<n;i++)
        {
            if(a[i] >= x)
            {
                cost += b[i];
            }
        }
        cout << cost << endl;
    }
	return 0;
}
