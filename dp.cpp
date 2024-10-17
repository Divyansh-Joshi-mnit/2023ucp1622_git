#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v1 ={1,2,3};
vector<int> v2 ={3,4,5};
vector<int> v3;
for(int i=0;i<3;++i){
v3.push_back(v1[i]*v2[i]);
}
for(int i=0;i<3;++i){
cout<<v3[i]<<endl;
}
cout<<"Bug fixed now"<<endl;
return 0;
}
