// COMSC-210 | Lab 4A | Aidan Woodcock | 2024-09-10
// IDE used: Visual Studio Code
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

//prototypes
Color randPopulate(int n, vector<Color>& RBG);

int main() {
    vector<Color> RBG; 
    // seed the rng
    srand(time(0));
    // random number between 25 and 50
    int n = rand() % 26 + 25;
    
    randPopulate(n, RBG);
     
      cout << left << setw(10) << "Color #: " 
         << setw(10) << "Red" 
         << setw(10) << "Green" 
         << setw(10) << "Blue" << endl;

    for (size_t i = 0; i < RBG.size(); i++) {
        cout << left << setw(10) << i   
            << setw(10) << RBG[i].red 
            << setw(10) << RBG[i].green
            << setw(10) << RBG[i].blue << endl;  
    }
    return 0;
}
Color randPopulate(int n, vector<Color>& RBG) {
    Color temp;
    for (int i = 0; i < n; i++) {
        temp.red = rand() % 256;
        temp.green = rand() % 256;
        temp.blue = rand() % 256;
        RBG.push_back(temp);
    }
    return temp;
}