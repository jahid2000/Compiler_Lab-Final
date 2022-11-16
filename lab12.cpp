#include<bits/stdc++.h>
using namespace std;
bool isarithmatic(char c){
	if(c == '+' || c =='-' || c == '*'||c == '/')
		return 1;
	else
		return 0;
}
int main(){
	stack<char>stk;
	string str;
	int i;
	cin >> str;
	bool valid = 1;
	for(i=0;i<str.size()-1;i++){
		if(isarithmatic(str[i]) && isarithmatic(str[i+1]))
			valid = 0;
		else if(isarithmatic(str[i]) && str[i+1]==')')
			valid = 0;
			
		else if(isdigit(str[i]) && str[i+1]=='(')
			valid = 0;
		
		else if(str[i]=='(' && str[i+1]=='(')
			valid = 0;	
		
		else if(str[i]=='(' && str[i]=='*')
			valid = 0;
			
		else if(str[i]=='(' && str[i]==')')
			valid = 0;
			
		else if(str[i]==')' && str[i]=='(')
			valid = 0;
			
		else if(str[i]==')' && isalpha(str[i+1]))
			valid = 0;
			
		else if(str[i]==')' && isdigit(str[i+1]))
			valid = 0;	
			
		else if(str[i]='('){
			stk.push('(');
		}
		else if(str[i]=')'){
			if(stk.empty())
				valid = 0;
			stk.pop();
		}
	
	}
	if(valid == 1)
		cout <<"VALID"<<endl;
	else
		cout <<"INVALID"<<endl;
	
}