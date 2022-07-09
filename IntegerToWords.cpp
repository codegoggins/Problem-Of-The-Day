// Problem Link
/*
https://practice.geeksforgeeks.org/problems/number-to-words0335/1
*/

#include<bits/stdc++.h>
using namespace std;

string numToWords(int n , string s){
  string one[]={
   ""," one"," two "," three"," four"," five"," six"," seven"," eight"," nine"," ten"," eleven"," twelve"," thirteen"," fourteen"," fifteen"
   ," sixteen"," seventeen"," eighteen"," nineteen" 
  };
  string tens[]={
    "",""," twenty"," thirty"," forty"," fifty"," sixty"," seventy"," eighty"," ninety"
  };

  string str="";
  if( n > 19){
    str+=tens[n/10] + one[n%10];
  }else{
    str+=one[n];
  }
  if(n!=0){
    str+=s;
  }
  return str;
}

string convertIntToString(long N){
   string ans="";

   ans += numToWords((int)(N/10000000)," crore");
   ans += numToWords((int)((N/100000)%100)," lakh");
   ans += numToWords((int)((N/1000)%100)," thousand");
   ans += numToWords((int)((N/100)%10)," hundred");
   
   if(N > 100 && N%100 > 0){
      ans+=" and";
   }
   ans+=numToWords((int)(N%100), "");
   return ans;

}

int main(){
  int n;
  cin>>n;
  cout<<convertIntToString(n);
}