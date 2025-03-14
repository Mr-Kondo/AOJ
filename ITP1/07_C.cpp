#include<iostream>
#include<vector>
using namespace::std;


main(){
    int col, row;

    cin >> row >> col;
    vector<vector<int>> v(col+1, vector<int>(row+1, 0));

    for(int j=0; j<row; j++){
        for(int i=0; i<col; i++){
            cin >> v[i][j];
            v[col][j] += v[i][j];
            v[i][row] += v[i][j];
        }
        v[col][row] += v[col][j];
    }

    for(int j=0; j<row+1; j++){
        for(int i=0; i<col+1; i++){
            if(i != col){
               cout<<v[i][j]<<' ';
            }else{
                cout<<v[i][j];
            }
        }
        cout << '\n';
    }

    return 0;
}
