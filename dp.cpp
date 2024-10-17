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
cout<<"Bug will come"<<endl;
cout<<"Paralleism included"<<endl;
//I have added a comment but will not commit it as I have to go to a previous commit so I'll temporarily push it to a  stack
return 0;
}
