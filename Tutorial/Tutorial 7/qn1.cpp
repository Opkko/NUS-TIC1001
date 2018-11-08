#include <iostream>
#include <vector>
#include <stirng>

using namespace std;

void insert(vector<int> &v, int pos, int val) {

    int z = v.size();

    v.push_back(v[z-1]);

    for(int i=z-1;i>pos;i--){

        v[i]=v[i-1];

    }

    v[pos]= val;

       // a.popback();

    

    //for(int i=0; i<z;i++){

        // a[n]=a.push_back(m);

        // //insert.push_nack()

        // a.pop_back(m);

        // cout<<a[i];

        

    //}

//     int i;

//     v.push_back(v[v.size()-1]);

//   for (i = v.size()-1; i > pos; i-- ){

//       v[i] = v[i-1];

//   }

//   v[pos] = val;

//   }

}

int main (void){
    vector<int> v = {0, 1, 2, 3, 4};
    insert(v, 2, -1);
    for (auto i: v) cout<<i<<' ';
}