#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // Include this for sorting
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, i;
        cin >> n >> k;
        int oddNumb=0, evenNumb=0;
        int num;
        vector<int> vect;
        for(i=0; i<n; i++){
            cin>>num;
            num % 2 == 0 ? evenNumb++ : oddNumb++;
            vect.push_back(num);
        }

        int dif = n-k;
        if(dif == 0){
            if(oddNumb%2 != 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            if(k%2 != 0){
                if(oddNumb > 0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }else{
                if(evenNumb > 0 && oddNumb > 0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}




