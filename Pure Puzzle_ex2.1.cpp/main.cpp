//
//  main.cpp
//  Pure Puzzle_ex2.1.cpp
//
//  Created by akiko yura on 5/26/18.
//  Copyright © 2018 akiko yura. All rights reserved.
//

//Think like programmer chapter 2. - exercises 2.1
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"moi nhap n: "<<endl;
    cin>>n;
    for(int row = n ;row>0;row--)
    {
        
        for(int space=0;space<=n-row;space++)
        {
            cout<<(space==0?"":" ");
        }
        for(int hashnum=0;hashnum<=2*row;hashnum++)
        {
            cout<<(hashnum==2*row?"\n":"#");
        }
    }
    
    return 0;
}

