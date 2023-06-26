#include <iostream>
using namespace std;

add()
{
    //index of a starting from 1
    j = 1;
    a[20];
    cout<<"Enter the element to be added: ";
    cin>>elem;
    cout<<"Do you want to add more elements? (y/n): ";
    cin>>choice;
    if (choice == 'y')
    {
        a[j] = elem;
        insert(a, j);
        j++;
    }
    else
    {
        a[j] = elem;
        insert(a, j);
        j++;
    }
}

insert(a,n)
{
    i = n;
    elem=a[n];
    while((i>1)&&(a[i/2]<elem))
    do 
    {
        a[i] = a[i/2];
        i = i/2;
    }
    a[i] = elem;
    return true;
}