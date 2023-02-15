#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    char split;
    int length;
    int count = 0;
    string result = "";

    cin >> split;

    cin >> length;

    vector<int> numbers(length);
    for (int i = 0; i < length; i++)
    {
        cin >> numbers[i];
    }

    int lastNumber = numbers.back();

    for (int i = 0; i < length; i++)
    {
        if (numbers[i] > lastNumber)
        {
            count++;
            result += to_string(numbers[i]) + split;
        }
    }

    if (count == 0) {
        cout << count << endl;
    }
    else {
        cout << count << endl;
        cout << result.substr(0, result.size() - 1) << endl;
    }

    return 0;
}