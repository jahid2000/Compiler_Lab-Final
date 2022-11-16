#include<bits/stdc++.h>
char s[100];
using namespace std;

bool vms()
{
    if((s[0]>='i'&&s[0]<='n')||(s[0]>='I'&&s[0]<='N')){
        for (int i=1;s[i]!='\0';i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                continue;
            }
            else
            return false;
        }
        return true;
    }
    else 
    return false;
}

int integerChecck(){
    if(s[0]>='0'&&s[0]<=9){
        int i;
        for(i=1;s[i]!='\0';i++){
            if(s[i]>='0'&&s[i]<='9')
            continue;
            else
            return 0;
        }
    
    if(i<=4) return 1;
    else if(i>4) return 2;
    else
    return 0;
    }

}

int main()
{
    gets(s);

    if(vms())cout<<"integer variable"<<endl;
    else if(integerChecck()){

        if(integerChecck()==1)cout<<"Shorth integer"<<endl;
        else if(integerChecck()==2)cout<<"Long integer"<<endl;
    }
    else
    cout<<"invalid"<<endl;
}