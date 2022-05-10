#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;
void loadfile(vector<string>& text, fstream& file) {
    char filename[200];
    cout << "Please enter the file's name: ";
    cin >> filename;
    file.open(filename);
    if (file.fail()) {
        cout << "File can't be opened :(";
    }else{
        cout << "File opened successfully!! :)";
    }
}
int main() {
    fstream sourcefile;
    vector<string> text;
    loadfile(text, sourcefile);
}




/*int displaymenu(){

}*/