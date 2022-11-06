#include <iostream>

using namespace std;

int main()
{
    int A[] = {231,44,32,45,23,43,2};

    int key = 42 ;
    int pos;

    for(int i = 0; i<sizeof(A)/sizeof(int); i++)
        {
            if(A[i] == key)
                {
                    pos = i;
                    cout<< "The number 45 is in the position:"<< pos<< endl;

                    return 0;

                }

        }
    cout<< "Number not found";




}
