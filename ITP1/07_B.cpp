#include<iostream>
using namespace::std;
main(){
    int n, x;
    n = 0, x = 0;
    int count;
    while(cin){
        count = 0;
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        for (int i = 1; i <= n; i++){
            for (int j = i+1; j <= n; j++){
                for (int k = j+1; k <= n; k++){
                    if (i+j+k == x) count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
