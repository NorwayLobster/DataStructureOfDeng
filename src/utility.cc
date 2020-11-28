#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>&v);
void uniquify(vector<int> &v){
    int len=v.size();
    if(len<=1) return ;
    int left=0;
    int right=1;
    // for(int right=1;right<len ;++right){
    //     if(v[left]!=v[right]){
    //         v[++left]=v[right];
    //     }
    // }

    while(right<len){
        if(v[left]!=v[right]){
            v[++left]=v[right++];
        }else{
            right++;
        }
    }
    //then shrink
 }
void deduplicate(vector<int> &v){//not sorted
    // sort(v);
    // uniquify(v);
 }
//note: 在[left,right)搜索
 void fibSearch(vector<int> &v, int target, int left,int right){}

 int mylower_bound(vector<int>&v, int target, int left,int right){
    while(left<right){
        int mid=left+(right-left)/2;
        // int mid=left+(right-left)>>1;//fatal error: + 优先于>>
        if(target>v[mid]){
            left=mid+1;
        }else{
            right=mid;
        }
    }
    return left;
}
 void myupper_bound(vector<int>&v, int target, int left, int right){}

void search(vector<int> &v){//sorted
     int a=1;
    switch(a){
    // case 1: fibSearch(v);break;
    // case 2: myupper_bound(v);break;
    // case 3: mylower_bound(v);
    }
}
void find(vector<int> &v){ //not sorted

}
 
int main(){
    vector<int> v={1,2,2,3,3,3,3,3,4,4,4,5,5,6,8,9,9,10};
//    uniquify(v);

    int index=mylower_bound(v,4,0,v.size());
    
    cout<<index<<endl; 
    cout<<v[index]<<endl;
    if(index<v.size())
        cout<<"hell0:"<<v[index]<<endl;
    // for(auto e:v){ cout<<e<<","; }
    cout<<endl;
}