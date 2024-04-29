#include <iostream>
using namespace std;

int main() {

    int i,temp,j=6,arr[7] = {0,1,2,3,4,5,6};

    // for (i = 0; i <= 6; i++)
    // {
    //     cout<<"enter grade "<<"["<<i<<"]:";
    //     cin>>arr[i];
    // }

    for (i = 0; i <= 3; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    
    for (i = 0; i <= 6; i++)
    {
        cout<<arr[i]<<"\t";
    }

}