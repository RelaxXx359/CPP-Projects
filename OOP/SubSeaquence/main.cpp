#include <iostream>
#include <map>
#include <set>

using namespace std;
typedef std::multimap<int, double, std::less<int>> Mmid;
typedef std::multimap<int, int, std::less<int>> Count;

int main() {
    map<int, int> counters;  //key-value with number - how many times
    int size = 15;
    int arr[] = {12, 12, 4, 4, 4, 8, 1, 4, 4, 4, 4, 4, 9, 8, 8};

    std::set<int> mySet;
    mySet.insert(arr, arr + size);
    for (int el: mySet) {
        cout << el << " ";
        counters[el] = 0;
    }
    cout << endl;
    for (pair<int, int> el: counters) {
        cout << el.first << " -> " << el.second << endl;
    }
    cout << endl;
    
    int counter = 0;
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            counter++;

        } else {
            counter++;
            if (counters[arr[i]] < counter) {
                counters[arr[i]] = counter;
            }

            counter = 0;
        }
    }
    for (pair<int, int> el: counters) {
        cout << el.first << " -> " << el.second << endl;
    }

    return 0;
}
