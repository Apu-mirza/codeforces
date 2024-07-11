#include<iostream>
#include<algorithm>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
   int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int first = 1;
		int second, third;

		second = first + n;
		while(!isPrime(second)){
            second++;
		}
		third = second + n;
		while(!isPrime(third)){
            third++;
		}
		long long ans = second*third;
		cout<<ans<<endl;
	}
}
