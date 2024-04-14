#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0,e = v.size() - 1;

    while(s<=e){ //till the start and end are less than and equal to zero
        swap(v[s],v[e]);
        s++;
        e--;
    }

    return v;//returing the ans
}

void print(vector<int> v){//printing the ans via loop
     for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
}

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);

    vector<int> ans = reverse(v);//storing the answer here
    
    cout<<"printing reverse array"<<endl;
    print(ans);

    return 0;
}