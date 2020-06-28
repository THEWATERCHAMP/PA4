/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // cout and cin
#include <string> // needed for string objects
#include <fstream> // needed for file opening and closing

using namespace std;

int main()
{
    // The magnitude of the set size
    const int LOW_RANGE = (int) 'z' - (int) 'a' + 1;
    const int HIGH_RANGE = (int) 'Z' - (int) 'A' + 1 ;
    const int NUM_RANGE = (int) '9' - (int) '0' + 1;

    const int SHIFT = 2; // How far we shift the characters in their sets
    string uncoded_In, coded_out; // filenames
    int value; // used for performing integer calcuations of charaters
    char uncoded_Char; // uncoded character
    ifstream fin; // file in
    ofstream fout; // file out
    
    cout << "Welcome to the secret coder program." << endl;
    cout << "Please enter the name of the ";
    cout << "text file you would like to code: " << endl;
    cin >> uncoded_In;
    coded_out = "code-" + uncoded_In;
    
    cout << "The file the enter is named: " << uncoded_In << endl;
    cout << "The name of the output file is: " << coded_out << endl;
    // The file names will be verified
    // it is time to make the file opening and error check
    
    // file open check
    fin.open(uncoded_In.c_str());
    if(fin.fail()) {
        cerr << "Error opening input file " << uncoded_In << endl;
        exit(1);
    }
    
    // file output check
    fout.open(coded_out.c_str());
    if(fout.fail()) {
        cerr << "Error opening input file " << uncoded_In << endl;
        exit(1);
    }
    
    // while not eof parse the input by character
    while(!(fin.eof())) {
        uncoded_Char = fin.get();
        value = (int) uncoded_Char;
        // if between a - z
        if((value - (int) 'a') <= ((int) 'z' - (int)'a')){
            // transform starts here --------------------------
            value += SHIFT;
            // if we go past our range we start from beginning
            if(value > (int) 'z') {
                value -= LOW_RANGE;
            } 
            // sending the coded char into fout
            fout << (char) value;
        } 
         // if between A - Z
         else if((value - (int) 'A') <= ('Z' - 'A')) {
            // transform starts here --------------------------
            value += SHIFT;
            // if we go past our range we start from beginning
            if(value > (int) 'z') {
                value -= HIGH_RANGE;
            } 
            // sending the coded char into fout
            fout << (char) value;
        }
         // if between 0 - 9
         else if ((value - (int) '0') <= ('9' - '0')) {
            // transform starts here --------------------------
            value += SHIFT;
            // if we go past our range we start from beginning
            if(value > (int) 'z') {
                value -= HIGH_RANGE;
            } 
            // sending the coded char into fout
            fout << (char) value;
        } 
         // Non alphanumeric charcters at this point
         // place character in output file as is
         else {
             fout << (char) value;
        }
    }
    
    // Close files
    fin.close();
    fout.close();
    
    // Successful return code
    return 0;
}
