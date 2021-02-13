#include <iostream>
#include <vector>

using namespace std;



void format() {

    cout << "=======================================" << endl;
}

void crossPro(vector<int> u, vector<int> v) {

    int i, j, k;
    if (u.size() == v.size()) {
      i = ( u.operator[](1) * v.operator[](2) ) - ( u.operator[](2) * v.operator[](1) );
      j = ( u.operator[](0) * v.operator[](2) ) - ( u.operator[](2) * v.operator[](0) );
      k = ( u.operator[](0) * v.operator[](1) ) - ( u.operator[](1) * v.operator[](0) );

      cout << "u x v: "<< "<" << i << ", " << j << ", " << k << ">" << endl;

    } else {

      cout << "Vectors must be the same size." << endl;
      return;
    }

}




int main() {

    int u1, u2, u3;
    int v1, v2, v3;
    bool run = false;
    // var used for control flow of program
    char ch;
    // start program and get values for the vector u
    do { // program loop


      run = false;
      cout << endl << endl << "Enter vector 1 (u) by putting a space between each digit, hitting enter when done." << endl;
      cout << "-> ";
      cin >> u1 >> u2 >> u3;
      format();
      //cout << endl;

      // get values for the vector v
      cout << "Enter vector 2 (v) by putting a space between each digit, hitting enter when done." << endl;
      cout << "-> ";
      cin >> v1 >> v2 >> v3;
      format();
      //cout << endl;

      // declaration of the two vectors
      vector<int> U {u1, u2, u3};
      vector<int> V {v1, v2, v3};

      // ask user if they input the correct values
      cout << "Are these your vectors? ('y' for yes, 'n' for no) \nu: ";
      for (auto i = U.begin(); i != U.end(); ++i) {
          cout << *i << " ";
      }
      cout << endl;
      cout << "v: ";
      for (auto i = V.begin(); i != V.end(); ++i) {
          cout << *i << " ";
      }
      cout << "\n-> ";
      cin >> ch;

      // if values are correct, continue by computing the cross productf
      if (ch == 'y') {
          crossPro(U, V);
          cout << endl << "Run again? ('y' for yes, 'n' for no)" << endl << "-> ";
          cin >> ch;
          if (ch == 'y')
            run = true;
      }
      else { // prompt the user to start the program over again
          cout <<  "Start over?. ('y' for yes, 'n' for no)" << endl << "-> ";
          cin >> ch;
          if (ch == 'y')
            run = true;
      }


    } while(run); // end of program loop


    system("pause");
    return 0;
}
