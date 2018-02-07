#include<iostream>
using namespace std;
int main()
{
    int a,b,count;
    cin >> a >> b;
    if(b>a)
        cout << a << endl;
    else
    {
        count=0;
        while(a>0)
        {
            if(a>=b)
            {
            a=a-b+1 ;
            cout<<a<<endl;
            count=count + b;
            cout<<count<<endl;
            }
            else
            {
                count+=a;
                cout<<count<<endl;
                break;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
