#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void) {
    string search;
    long offset;
    string line;

    ifstream Myfile;
    Myfile.open ("records.txt");
    cout << "Type the name of the person you want to search" << endl;
    cin >> search;

    if (Myfile.is_open())
    {
        while (!Myfile.eof())
        {
            getline(Myfile, line);
            if ((offset = line.find(search, 0)) != string::npos)
            {
               cout << "The name has been founded: " << search << endl;
            }



        }

        Myfile.close();
    }

    else
    cout << "Could not open file" << endl;
    return 0;
}
