#include <iostream>  
#include <string> 
using namespace std; 

int main() 
{ 
        int age; 
        double money; 
        bool parent; 
        string toPrintMoney, toPrintShow; 
        cout << "Enter your age: "; 
        cin >> age; 
        if (age < 13){ 
                cout << "With Parent? (1 for yes, 0 fro no): "; 
                cin >> parent; 
                toPrintShow = parent ? "PG & G show." : "G show"; 
        }else{ 
                toPrintShow = (age < 16) ? "PG or G show" : "R,PG & G show"; 
        } 
        cout << "Enter the amount of money you have: ";  
        cin >> money; 
        toPrintMoney = (money < 7.50) ? "Not enough money" :  
        (money < 10.50) ? "Can go to matinee show." : "Can go to evening & matinee show.";  
        cout << toPrintShow << endl;cout << toPrintMoney; 

        return 0; 
} 