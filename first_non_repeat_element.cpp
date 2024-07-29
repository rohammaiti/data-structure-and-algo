#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr;
    unordered_map<int, int> element_count;
    int num, element, i;

    cout<<"Enter the number of elements- ";
    cin>>num;

    cout<<"Enter the elements- ";
    for(i=0; i<num; i++)
    {
        cin>>element;
        arr.push_back(element);
    }

    for (const int& elem : arr) 
    {
        element_count[elem]++;
    }

    int first_non_repeating = -1; 
    for (const int& elem : arr) 
    {
        if (element_count[elem] == 1) 
        {
            first_non_repeating = elem;
            break;
        }
    }

    if (first_non_repeating != -1) 
    {
        cout << "The first non-repeating element is: " << first_non_repeating << endl;
    } 
    else 
    {
        cout << "No non-repeating element found." << endl;
    }

    return 0;
}
