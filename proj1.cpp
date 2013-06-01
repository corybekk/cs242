//Chinies Remainder Theorem
//Author: Cory Bekker
//Class: cs242
//Date: October 6th, 2011

#include <iostream>
#include <vector>

using namespace std;

int find_a(int array[], int i);

int main(){
  
  cout<<"enter the numbers for the congruencies"<<endl;
  cout<<"Example: if you want x=3(mod4), then enter..\n";
  cout<<" 3\n";
  cout<<" 4\n";
  cout<<endl;

  string input;//used to add another congruency (yes/no)
  int num1 =0;//holds user input
  int num2 =0;//holds user input
  int answer =0;//holds the answer
  vector<int>a;// holds a1,a2,a3...
  vector<int>b;// holds second mod number
  vector<int>m;// holds m1,m2,m3...
  vector<int>y;// holds y1,y2,y2...

  while(input!="no"){

    cout<<"enter first congruency number\n";
    cout<<"input1: ";
    cin>>num1;
    cout<<endl;
    cout<<"enter second congruency number\n";
    cout<<"input2: ";
    cin>>num2;
    cout<<endl;

    //makes the a1,a2,a3 values in vector<int>a
    a.push_back(num1);
    b.push_back(num2);
   
    cout<<"do you want to add another congruency set? (yes/no)\n"; 
    cin>>input;
  }
  
  //finds the m value
  int c = 1;
  for(int j =0; j<b.size(); j++){
    c *= b[j];
      }
  cout<<"m value; "<<c<<endl;

  //makes m1,m2,m3,....
  for(int k =0; k<b.size(); k++){
    m.push_back(c/b[k]);
    cout<<"M values: "<<m[k]<<endl;
  }

  //makes the y1,y2,y3....
  for(int h =0; h<m.size(); h++){
    y.push_back(m[h]%b[h]);
    cout<<"Y VALUES: " <<y[h]<<endl;
  } 

  //adds all the a's, m's, and y's
  int num =0;
  for(int p =0; p<a.size(); p++){
    num += a[p] * m[p] * y[p];
  }
  answer= num % c;

  cout<<"answer: "<<answer<<endl;

  return 0;
}



