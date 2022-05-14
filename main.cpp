#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;
fstream sourcefile;
vector<string> text;
fstream sourcefile2;
vector<string> text2;
char filename[200], filename2[200];
void loadfile(vector<string>& text, fstream& file);
//_________________________________________________________
void LoadSecondFile(vector<string>& text2, fstream& file2);
//_________________________________________________________
int menu(int& choice);
//_________________________________________________________
int numoflines();
//_________________________________________________________
int numofchars();
//_________________________________________________________
int numofwords();
//_________________________________________________________
void mergefiles();
//_________________________________________________________
void wordsearch();
//_________________________________________________________
void clear();
//_________________________________________________________
void display();
//_________________________________________________________
void append();
//_________________________________________________________
void encryption();
//_________________________________________________________
void decryption();
//_________________________________________________________
int main() {
    int choice;
    char c;
    loadfile(text, sourcefile);
    while (true) {
        menu(choice);
        if (choice == 6) {
            mergefiles();
        }
    }

}
void loadfile(vector<string>& text, fstream& file) {
    cout << "Please enter the file's name with .txt EX: (filename.txt) : ";
    cin >> filename;
    file.open(filename);
    if (file.fail()) {
        cout << "File can't be opened :(\n";
        loadfile(text, file);
    }else{
        cout << "File opened successfully!! :)" << endl;
    }
}
int menu(int& choice){
    cout << "What do you want to choose : \n"
            "6. Merge another file \n"
            "7. Count the number of words in the file.\n"
            "8. Count the number of characters in the file.\n"
            "9. Count the number of lines in the file.\n"
            "10. Search for a word in the file.\n";
    cin >> choice;
    return choice;
}
void LoadSecondFile(vector<string>& text2, fstream& file2) {
    cout << "Please enter the second file's name with .txt EX: (filename.txt) : ";
    cin >> filename2;
    file2.open(filename2);
    if (file2.fail()) {
        cout << "File's name is invalid.\n";
    } else {
    }
}

void mergefiles(){
    string word;
    string m;
    int count = 0;
    cout << "Enter the word you're searching for : ";
    cin >> word;
    while (sourcefile >> m) {
        if (m.find(word, 0) != string::npos) {
            count +=1;
        }
    }
    cout << "the word '" << word <<"' was found " << count << " times" << endl;
}


