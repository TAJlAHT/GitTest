#include <iostream>
#include <vector>

using namespace std;

const int k = 2;

bool searching_for_k_cube_in_matrix(const vector<int>& numbers, int k){
    bool found = false;
    for (int num:numbers){
        if (num%(k*k*k)==0){
            found = true;
            break;
        };
    }
    return found;
}

int main()
{
    vector<int> numbers = {1,2,3,4,5,6,7,8,10,20,30,40,50,81,100,200,300};
    if (searching_for_k_cube_in_matrix(numbers, k)){
        cout<<"Yes"<< endl;
    }else{
        cout<<"No"<<endl;
    }
}
