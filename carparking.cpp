#include<bits/stdc++.h>
using namespace std;

int main(){

  int u_input;
  int amount=0,count=0;

  while(true){

  cout << "Press 1 for car parking" << endl;
  cout << "Press 2 for Bike parking" << endl;
  cout << "Press 3 for By-cycle parking" << endl;
  cout << "Press 4 to show the store record" << endl;
  cout << "Press 5 delete all data" << endl;
  cin >> u_input;

    if(u_input==1){
      amount = amount + 200;
      count = count +1;
    }
    else if(u_input==2){
      amount = amount + 50;
      count = count +1;
    }
    else if(u_input==3){
      amount = amount + 20;
      count = count +1;
    }
    else if(u_input==4){
      cout << "The total amount = " << amount << endl;
      cout << "The total number of vehicles parked = " << cout << endl;

    }
    else if(u_input==5){
      amount = 0;
      count = 0;
    }
    else{
    cout << "Invalid number" << endl;
    }
  }

  return 0;
}

