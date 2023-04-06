// evaluation of mathematical expressions using two stacks
#include <iostream>

using namespace std;

char a[11];
int i, n;

int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    cout<<endl<<"Values"<<endl<<a[1]<<endl;
    cout<<"Operators"<<endl;
    if(a[2]==40) cout<<endl<<endl;
    else
        if(a[2]==43) cout<<"+ "<<endl<<endl;
        else
            if(a[2]==45) cout<<"- "<<endl<<endl;
            else
                if(a[2]==42) cout<<"* "<<endl<<endl;
                else
                    if(a[2]==47) cout<<"/ "<<endl<<endl;
                    else
                        cout<<"^ "<<endl<<endl;
    if(a[3]>= 97 && a[3]<= 122)
        {
            cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<endl;
            cout<<"Operators"<<endl<<a[2]<<endl<<endl;
        }
    if(a[4]==42 || a[4]==47 || a[4]==94 && a[2]==43 || a[2]==45)
        {
            cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<endl;
            cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<endl<<endl;
        }
    else
        if(a[4]==43 && a[2]==45)
        {
            cout<<"pop: t1= "<<a[1]<<a[2]<<a[3]<<endl<<endl;
            cout<<"Values"<<endl<<"t1"<<endl;
            cout<<"Operators"<<endl<<a[4]<<endl<<endl;
        }
        else
            if(a[4]==94 && a[2]==42 || a[2]==47)
            {
                cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<endl;
                cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<endl<<endl;
            }
            else
                if(a[4]==47 && a[2]==42)
                {
                    cout<<"pop: t1= "<<a[1]<<a[2]<<a[3]<<endl<<endl;
                    cout<<endl<<"Values"<<endl<<"t1"<<endl;
                    cout<<"Operators"<<endl<<a[4]<<endl<<endl;
                }
                else
                    if(a[2]==94 && a[4]==43)
                    {
                        cout<<"pop: t1= "<<a[1]<<a[2]<<a[3]<<endl<<endl;
                        cout<<"Values"<<endl<<"t1"<<endl;
                        cout<<"Operators"<<endl<<a[4]<<endl<<endl;
                    }
    if(a[5]==40&&a[2]!=43)
    {
        cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<endl;
        cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<", "<<a[5]<<endl<<endl;
    }
    else
        if(a[5]>= 97 && a[5]<= 122&&a[2]!=94)
        {
            cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<", "<<a[5]<<endl;
            cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<endl<<endl;
        }
        else
            if(a[4]==47 && a[2]==42)
            {
                cout<<endl<<"Values"<<endl<<"t1"<<endl;
                cout<<"Operators"<<endl<<a[4]<<", "<<a[5]<<endl<<endl;
            }
            else
                if(a[2]==94&&a[4]==43)
                {
                    cout<<endl<<"Values"<<endl<<"t1"<<", "<<a[5]<<endl;
                    cout<<"Operators"<<endl<<a[4]<<endl<<endl;
                }
    if(a[6]>= 97 && a[6]<= 122)
        {
            cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<", "<<a[6]<<endl;
            cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<", "<<a[5]<<endl<<endl;
        }
    else
        if(a[6]==42||a[6]==47 && a[4]==43||a[4]==45)
        {
            cout<<"Values"<<endl<<"t1, "<<a[5]<<endl;
            cout<<"Operators"<<endl<<a[4]<<", "<<a[6]<<endl<<endl;
        }
        else
            if(a[4]==42||a[4]==47&&a[2]==42||a[2]==47)
            {
                cout<<"Values"<<endl<<"t1, "<<a[6]<<endl;
                cout<<"Operators"<<endl<<a[4]<<", "<<a[5]<<endl<<endl;
            }
            else
                if(a[6]==45&&a[4]==43&&a[2]==94)
                {
                    cout<<"pop: t2= "<<"t1"<<a[4]<<a[5]<<endl<<endl;
                    cout<<"Values"<<endl<<"t2"<<endl;
                    cout<<"Operators"<<endl<<a[6]<<endl<<endl;
                }
    //plus=43, minus=45, ori=42, impartit=47, putere=94;
    if(a[7]==43||a[7]==45&&a[5]==40)
    {
        cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<", "<<a[6]<<endl;
        cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<", "<<a[5]<<", "<<a[7]<<endl<<endl;
    }
    else
        if(a[7]>= 97 && a[7]<= 122&&a[2]!=94)
        {
            cout<<"Values"<<endl<<"t1, "<<a[5]<<", "<<a[7]<<endl;
            cout<<"Operators"<<endl<<a[4]<<", "<<a[6]<<endl<<endl;
        }
        else
            if(a[6]==45&&a[4]==43&&a[2]==94)
            {
                cout<<"Values"<<endl<<"t2"<<", "<<a[7]<<endl;
                cout<<"Operators"<<endl<<a[6]<<endl<<endl;
            }
    if(a[8]>= 97 && a[8]<= 122)
    {
        cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<", "<<a[6]<<", "<<a[8]<<endl;
        cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<", "<<a[5]<<", "<<a[7]<<endl<<endl;
    }
    if(a[9]==42||a[9]>46 &&a[7]==43||a[7]==45&&a[5]==40)
    {
        cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<", "<<a[6]<<", "<<a[8]<<endl;
        cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<", "<<a[5]<<", "<<a[7]<<", "<<a[9]<<endl<<endl;
    }
    if(a[10]>= 97 && a[10]<= 122)
    {
        cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<", "<<a[6]<<", "<<a[8]<<", "<<a[10]<<endl;
        cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<", "<<a[5]<<", "<<a[7]<<", "<<a[9]<<endl<<endl;
    }
    if(a[11]==41&&a[6]==42&&a[4]==43&&a[2]==45)
    {
        cout<<"Values"<<endl<<a[1]<<", "<<a[3]<<", "<<a[6]<<", "<<a[8]<<", "<<a[10]<<endl;
        cout<<"Operators"<<endl<<a[2]<<", "<<a[4]<<", "<<a[5]<<", "<<a[7]<<", "<<a[9]<<", "<<a[11]<<endl<<endl;
    }
    //plus=43, minus=45, ori=42, impartit=47, putere=94;
    if(a[2]==43&&a[4]==45)
        cout<<"E= t1"<<a[4]<<a[5]<<a[6]<<a[7]<<endl<<endl;
    else
        if(a[5]==40&&a[4]==47&&a[7]==43)
            cout<<"E= t1"<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<endl<<endl;
        else
            if(a[2]==94&&a[4]==43&&a[6]==45)
                cout<<"E= t2"<<a[6]<<a[7]<<endl<<endl;
            else
                cout<<"E= "<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<a[10]<<a[11]<<endl<<endl;
    return 0;
}
