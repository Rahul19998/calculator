#include<iostream>
using namespace std;
int main(){
    char op;
    float n1,n2;
    cout << "Enter operator from +, -, *, / :";
    cin >> op;
    cout << "Enter two integer values: ";
    cin >> n1 >> n2;
    switch(op){
      case '+':
          cout << n1 << " + " << n2 << " = " << n1+n2 << endl;
          break;
      case '-':
          cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
          break;
      case '*':
          cout << n1 << " * " << n2 << " = " << n1 + n2 << endl;
          break;
      case '/':
          cout << n1 << " / " << n2 << " = " << n1/n2 << endl;
          break;
      default:
          cout << "Error! The operator you entered is incorrect " << endl;
          break; }
   return 0;
}
