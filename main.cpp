#include <iostream>

using namespace std;

int main()
{
    int aray[21],key,fst,lst;
    cout<<"Enter elements of array \n";
    for(int l=0; l<=20; l++)
    {
        aray[l]=l+l;
        cout<<aray[l]<<endl;
    }
    cout<<"Enter key to be searched \n";
    cin>>key;
    fst=0;
    lst=20;
    while(true)
    {
        if(aray[(fst+lst)/2]==key)
        {
            cout<<"Searched key is at"<<(fst+lst)/2;
            break;
        }
        if(aray[20]==key)

        {
            cout<<"Key is at 20"<<endl;
            break;
        }

        if(key > aray[(fst+lst)/2])
            fst=(fst+lst)/2;
        if(key < aray[(fst+lst)/2])
            lst=(fst+lst)/2;
        if((fst+lst)/2==fst)
        {
            cout<<"Key not found";
            break;
        }
    }
    return 0;
}
