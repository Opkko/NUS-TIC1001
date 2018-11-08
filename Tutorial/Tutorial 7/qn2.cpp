#include <iostream>
#include <vector>
#include <string>

using namespace std;

void erase(vector<int> &vec, int pos) {

    //E

    // int size = vec.size();

    // vector<int> buf(size,0);

    // int count = 0;

    

    // //Start

    // for (int a = 0; a < size; a++) {

    //     if (a != pos) {

    //         buf[count] = vec[a];

    //         count++;

    //     }

    // }

    // buf.pop_back();

    

    // vec = buf;

   

    // int ask[10]={0};

    // int i=0;

    // while(i<11){

    //     cout<<ask[i];

    //     i++;

    // }

    int z = vec.size();

    vector<int> buf(z,0);

    if(pos!=0){

        for(int i=0;i<z;i++){

        if(i==pos){

            buf[i]=vec[i+1];

        }else buf[i]=vec[i];

    }

    buf.pop_back();

        for(int a=0;a<z;a++){

            if(a==pos){

                vec[a]=buf[a+1];

            }

        }

        if(pos!=vec.size()-1){

            vec[vec.size()-2]=vec[vec.size()-1];

            vec.pop_back();

        }else vec.pop_back();

    }else if(pos==0){

        for(int b=0;b<z;b++){

            vec[b]=vec[b+1];

        }vec.pop_back();

    }

    //BURN BLAKE

    //  vector <int> dummy;

    // int vsize = vec.size();

    // for (int i=0;i<vsize;i++){

    //     if(i==pos){

    //         continue;

    //     }

    //     dummy.push_back(vec[i]);

    // }

    // vec = dummy;
}

int main (void){
    vector<int> v = {0, 1, 2, 3, 4};
    erase(v,3);
    for (auto i: v) cout<<i<<' ';
}