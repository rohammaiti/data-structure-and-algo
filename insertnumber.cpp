#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> arr;
    int element, position, num, i, new_val;

    cout<<"Enter the number of elements- ";
    cin>>num;

    for ( i = 0; i < num; i++)
    {
        cin>>element;
        arr.push_back(element);
    }

    cout<<"Enter the new element- ";
    cin>>new_val;

    cout << "Enter the position: ";
    cin >> position;

    if(position<0 || position>arr.size())
    {
        cout<<"Invalid position"<<endl;
    }
    else
    {
        arr.insert(arr.begin()+position, new_val);
        cout << "Array after insertion: ";
        for(const int& val : arr) 
        {
            cout << val << " ";
        }
        cout << endl;
    }
    
}
