#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    int x;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    set<int> arr_set(arr,arr+n);
    int k;
    cin >> k;
    auto it1 = arr_set.begin(); 
    advance(it1,arr_set.size()-k);
    auto it2 = arr_set.begin(); 
    advance(it2,k-1);
    cout << "Kth max element: " << *it1 << endl;
    cout << "Kth min element: " << *it2 << endl;
return 0;
}