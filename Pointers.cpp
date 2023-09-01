#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int num = 5;
    // Symbol Table is used for mapping an address to a variable name in the memory
    // We can access the memory of the variable using the ampersand operator &
    // cout << num << endl;
    // cout << &num << endl;
    // int *ptr;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    //This is considered bad practice as we will be accessing memory which is out of scope
    // int *p = &num; // this will store the value present at the adressof the variable
    // cout << *p << endl;
    // this will print the value of the store at the address it is pointing to 
    // cout << p << endl;
    // this is the actual value stored at the pointer variable which inturn is the address of the varible it is pointing to
    // double d = 0.69;
    // double *p2 = &d;
    // cout << *p2 << endl;
    // cout<< p2 <<endl;

    // int *p =0;
    // cout << *p << endl;
    //  this will lead to segentation fault

    // int i = 5;
    // int *q = 0;
    // q = &i;

    // int num = 5; 
    // int a = num;
    // cout << a << endl;
    // a++;
    // cout << a << endl;

    // int *p = &num; 
    // cout << *p << endl;
    // (*p)++;
    // cout << *p << endl;

    // int *q = p;
    // cout << *p << endl;
    // cout << *q << endl;
    // cout << p << endl;
    // cout << q << endl;

    // int i = 5;
    // int *t = &i;
    // cout << t << endl;
    // t = t+1;
    // cout << t << endl;
    // t = t-1;
    // cout << t << endl;
    // t = t-1;
    // cout << t << endl;
    // cout << *t << endl;

    // array and pointers
    int arr[10] = {1,2,3,4,5};
    cout << "1. " << arr <<endl;
    cout << "2. " << &arr <<endl;
    cout << "3. " << &arr[0] <<endl;
    cout << "4. " << *arr <<endl;
    cout << "5. " << *arr+1 <<endl;
    cout << "6. " << *(arr+1) <<endl;
    cout << "7. " << arr[2] <<endl;
    cout << "8. " << *(arr+2) <<endl;
    cout << "9. " << &arr[1] <<endl;
    cout << "10. " << &arr[2] <<endl;
    cout << "11. " << arr+1 <<endl;

    int temp[10]={1,2};
    cout << "12. " << sizeof(temp) <<endl;
    cout << "13. " << sizeof(*temp) <<endl;
    cout << "14. " << sizeof(&temp) <<endl;
    int *ptr = &temp[0];
    int *q = temp;
    int *r = &temp[1];

    cout << "15. " << *ptr <<endl;
    cout << "16. " << *q <<endl;
    cout << "17. " << *r <<endl;
    cout << "18. " << ptr <<endl;
    cout << "19. " << q <<endl;
    cout << "20. " << r <<endl;
    cout << "14. " << sizeof(ptr) <<endl;
    cout << "15. " << sizeof(*ptr) <<endl;
    cout << "16. " << sizeof(&ptr) <<endl;

    
    //arr[i] = *(arr+i);
    //i[arr]= *(i+arr);


    return 0;
}