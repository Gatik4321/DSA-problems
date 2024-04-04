/*to understand all about the character arrays
// taking input and output from the character arrays
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100]="apple";
    int i=0;
    while(a[i]!='\0'){
        cout<<a[i]<<endl;
        i++;
    }
    return 0;
}
// input and ouput from the character arrays
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin>>a;
    cout<<a[2];
    return 0;
}
//to check wether the word is palidrome or not
# include<iostream>
# include<bits/stdc++.h>
# include<cstring>
using namespace std;
int main(){
    int flag=0;
  char string[100]="raccr";
  int lenght=strlen(string);
  for(int i=0;i<lenght;i++){
    if(string[i]!=string[lenght-i-1]){
             flag=1;
             break;
    }
  }
  if(flag==1){
    cout<<"string is not palidrome";
  }
  else{
    cout<<"string is palidrome";
  }
  return 0;
}
//program for the largest word in a sentence
#include <iostream>
# include<cstring>
using namespace std;
 
int LongestWordLength(string str)
{
     
    int n = str.length();
    int res = 0, curr_len = 0, i;
     
    for (int i = 0; i < n; i++) {
        if (str[i] != ' ')
            curr_len++;
 
        else {
            res = max(res, curr_len);
            curr_len = 0;
        }
    }
    return max(res, curr_len);
}
int main()
{
    string s =
    "I am an intern at geeksforgeeks";
                     
    cout << LongestWordLength(s);
    return 0;
}
//basics of the string
# include<iostream>
# include<cstring>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str;
    }

# include<iostream>
# include<cstring>
using namespace std;
int main(){
   string str1="gatikalagh";
     str1.insert(2,"loe");
    cout<<str1;
}
//to covert the string to integer
# include<iostream>
# include<bits/stdc++.h>
# include<cstring>
using namespace std;
int main(){
    string s1="786";
    int x=stoi(s1);
    cout<<x+2<<endl;
}
// to convert the integer to string
# include<iostream>
# include<bits/stdc++.h>
# include<cstring>
# include<algorithm>
using namespace std;
int main(){
    string s="hsdhgduedgewd";
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}
//program to convert upper to lower and lower to upper
# include<iostream>
# include<bits/stdc++.h>
# include<cstring>
using namespace std;
int main(){
    string s="abcdfegshsAUDUIDHIDH";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    
    transform(s.begin(),s.end(),s.begin(),::tolower);
cout<<s;
    return 0;
}
//question practice on strings and charater arrays
//program to reverse a string 
# include<iostream>
# include<bits/stdc++.h>
# include<string>
using namespace std;
int main(){
    string s1="andiehmfknf";
     int n=s1.size();
      int s=0;
      int e=n-1;
      while(s<=e){
        swap(s1[s],s1[e]);
        s++;
        e--;
      }
      cout<<s1;
      return 0;
}
//checking if a number is palidrome or not with conditions
# include<iostream>
# include<bits/stdc++.h>
# include<cstring>
using namespace std;
int valid(char ch){
  if(ch>='a'&&ch<='z'||ch>='A'||ch<='Z'||ch>='0'||ch<='9'){
    return 1;
  }
  else{
    return 0;
  }

}
bool ispalidrome(string str,string temp){
      for(int j=0;j<str.size();j++){
        if(valid(str[j])){
            temp.push_back(str[j]);
        }
      }
}
int main(){
    string temp;
    string str="fneufbrufbeudwefy**^*urfg";
     cout<<ispalidrome(str,temp);
    return 0;
}
//consecutive repeating charcaters
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
# include<cstring>
using namespace std;
int main(){
  int n;
  cin>>n;
  //n be the no. of elements in the character array
  char a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }   
  //now logic for the question
  int i=0;
  int ansindex=0;
  while(i<n){
    int j=i+1;
    while(j<n&&a[i]==a[j]){
      j++;
    }
    //bahar kab aaega
    //ya to array pura traverse ho gya
    //ya to a[i]!=a[j] wali condition mein
    a[ansindex]=a[i];
    ansindex++;
    int count=j-i;
    if(count>1){
      string cnt=to_string(count);
      for(char b:cnt){
        a[ansindex]=b;
      }
    }
    i=j;
  } 
  for(int i=0;i<n;i++){
    cout<<a[i];
  }
  return 0;
}
//my name is khan
//we want my@40name@40is@40khan
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
  for(int i=0;i<n;i++){
        if(str[i]==' '){
        cout<<"@40";
        }
        else{
          cout<<str[i];
        }
  }
  return 0;
}*/
