#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int choice, value;
    vector<int> vec;
    do
    {
        cout<<"\n\nMenu: \n1. Insert an Element into the Vector\n2. Display Vector Elements\n3. Display the Size of the Vector\n4. Delete the Recent Element of the Vector\n5. Clear the Entire Vector\n0. Exit\n\nEnter your choice: "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the value to be Inserted in the Vector: ";
            cin>>value;
            vec.push_back(value);
            break;
        case 2:
            cout<<"The vector elements are: ";
            for(int i=0; i<vec.size(); i++)
                cout<<vec[i]<<" ";
            cout<<endl;
            break;
        case 3:
            cout<<"The size of the vector now is: "<<vec.size()<<endl;
            break;
        case 4:
            vec.pop_back();
            cout<<"The Recent Element is successfully Deleted. You can verify by entering Choice No. 2 or 3."<<endl;
            break;
        case 5:
            vec.clear();
            cout<<"Vector cleared successfully! Insert new element(s) using Choice No. 1"<<endl;
            break;
        case 0:
            cout<<"Vector functions explored successfully!"<<endl;
            break;
        default: 
            cout<<"Wrong Input! Try again!"<<endl;
        }
    }while(choice!=0);
    return 0;
}