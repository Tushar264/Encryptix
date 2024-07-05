# include <iostream>
using namespace std;

int main() {
  double num1, num2;
  cout << "Enter the two numbers: ";
  cin >> num1 >> num2;
  char op;
  cout << "Enter the operator: ";
  cin >> op;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Operator is invalid";
      break;
  }

  return 0;
}
