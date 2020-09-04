#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int number;
    bool fail = true;

    while (fail){

    cout << "Input Number :" << endl;
    cin >> number;

        if(cin.fail())
            {
            cout << "Invalid answer." << endl;
            cin.clear();
            cin.ignore(80, '\n');
            fail = true;
            } else {
            fail = false;
            }
    }
    stringstream num_str;
    num_str << number;

    string num_is;
    num_str >> num_is;

    cout << "You number is : " << num_is << "." << endl;

    int count = 0;
    char integer[num_is.length()];
    int result = 0;

    for (int index = 0 ; index < num_is.length() ;  index++){
        integer[index] = num_is[index];

        count++;

        //cout << "Index " << index << ":" << integer[index] << endl;
    }
    for (int index2 = 0; index2 < num_is.length() ; index2++){
        string change;
        if (index2 == num_is.length() - 1){
            change = integer[index2];
        int seperated = stoi(change);
        cout << seperated << "/" << count << endl;
        result += seperated;
        break;
        }
        change = integer[index2];
        int seperated = stoi(change);
        cout << seperated << "+" ;
        result += seperated;
    }
        double avg_mean = 0;
        avg_mean = (double)result/count;
        cout << "Average mean is " << avg_mean << "." << endl;

    return 0;
}
