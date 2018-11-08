#include <iostream>
#include <vector>
#include <string>

void mutate(vector<int> &vec) {

    int z = vec.size();

    vector<int> hold(z,0);

    for(int a=0;a<z;a++){

        if(a==0){

            hold[a]=vec[a+1] + vec[z-1];

        }else if(a==z-1){

            hold[a]=vec[z-2]+ vec[0];

        }else hold[a]= vec[a-1]+vec[a+1];

    }

    //vec.push_back(vec[vec.size()-1]);

    for(int i=0;i<z;i++){

        vec[i]=hold[i];

    }

}

int main (void){
    vector<int> v = {0, 1, 2, 3, 4};
    mutate(v);
    for (auto i: v) cout<<i<<' ';
}