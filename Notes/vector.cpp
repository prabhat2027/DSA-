//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //vector <int> p(5, 100);            //vector declaration

    vector<int> p={10, 20, 30, 40, 50};  //another way to declare


/************ TRAVERSAL IN VECTOR ************/
    // for(int i=0;i<5;i++)             //same as of array.
    //     cout<<p[i]<<" ";
        
    // for(vector<int>::iterator pr=p.begin();pr!=p.end();pr++)  //by using iterator's
    //     cout<<*(pr)<<" ";
    
    // for(auto pr=p.begin();pr!=p.end();pr++)    //by using iterator's with 'auto' keyword.
    //     cout<<*(pr)<<"\n";
  
    for(auto pr : p)            //considering 'pr' as an interger.
        cout<<pr<<"\t";


/************ DELECTION IN VECTOR ************/
    //p.erase(p.begin()+1);                 //deleting single element
    //  cout<<endl;
    
    // p.erase(p.begin()+1, p.begin()+4);   //deleting an nterval
    //  cout<<endl;                          // [start, end)


/************ INSERTION IN VECTOR ************/
    p.insert(p.begin(), 300);          //insertng single element 
    cout<<endl;                        //at index '0'.     
    for(auto pr : p)
        cout<<pr<<"\t";

    p.insert(p.begin()+1, 400);        //insertng single element 
        cout<<endl;                        //at index '1'.
    for(auto pr : p)
        cout<<pr<<"\t";

    p.insert(p.begin()+1, 2, 500);   //insertng more than one but,same element 
        cout<<endl;                      //at index '1'.
    for(auto pr : p)
        cout<<pr<<"\t";

    return 0;
}