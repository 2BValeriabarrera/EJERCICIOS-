#include<iostream>
using namespace std;
int main(){
	char charArr[]={'e','l','m ','e ','n','t ','o ','c ','h ','a ','r '};
	int vowels=0;
	
	for(char ch:charArr){
		if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u')
		vowels++;
	}
	cout<<vowels;




}
