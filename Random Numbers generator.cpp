#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    vector<int> data = {0};
    for(int i = 0; i < 20; i++) {
        int Random_number = rand() % 1001;
        data.push_back(Random_number);
    }

    for(int i = 0; i < 20; i++) {
     cout << data[i] << endl;
    }


    return 0;

}
