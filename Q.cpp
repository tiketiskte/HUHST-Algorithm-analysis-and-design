/**
* Copyright(c)
* Author : tiketiskte
**/
#include <bits/stdc++.h>
#define IOS {ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<double, double>
#define sqr(x) (x) * (x)
#define SZ(X) (int)X.size()
#define INF 0x3f3f3f3f
 
using namespace std;
const  int  Max_N = 108 ;
struct Mat{   /*矩陣*/
       int row ;
       int col ;
       char logo ;
       Mat(){}
       Mat(int r , int c , char lg):row(r),col(c),logo(lg){}
       friend bool operator == (const Mat &A , const Mat &B){
            return A.row == B.row && A.col == B.col  ;
       }
};
 
Mat  mat[40] ;
 
const Mat Leftkuohao = Mat(-100000 , -100000 , '(') ; /*標記（括號*/
 
 
/*形如ABCD ，也就是（）里面的乘法，返回和，非法返回-1 ，並保存最后結果矩陣rest */
int  Gao(vector<Mat> &List  , Mat &rest){  
     int i , j  , ans = 0  , now , re ;
     for(i = 1 ; i < List.size() ; i++){
          if(List[i].row !=  List[i-1].col)
              return -1 ;
          ans += List[0].row * List[i].row * List[i].col ;
     }
     rest = Mat(List[0].row , List[List.size()-1].col , '*') ;
     return ans ;
}
 
vector<Mat> GetList(stack<Mat> &st){   /*遇到)時，在棧中找出與之匹配（中間的鏈，並翻轉逆序*/
      vector<Mat> ans ;
      ans.clear() ;
      while(! st.empty()){
         if(st.top() == Leftkuohao){
                st.pop() ;
                break ;
         }
         else{
                ans.push_back(st.top()) ;
                st.pop() ;
         }
     }
     std::reverse(ans.begin() , ans.end()) ;
     return ans ;
}
 
int  Ans(string s){   /*括號匹配，棧的應用*/
     int i , j  , ans = 0 , sum ;
     stack<Mat> st ;
     vector<Mat> now ;
     Mat rest ;
     for(i = 0 ; i < s.length() ; i++){
         if(s[i] == '(')
            st.push(Leftkuohao) ;
         else if(s[i] == ')'){
            now = GetList(st) ;
            sum = Gao(now , rest) ;
            if(sum == -1)
                return -1 ;
            ans += sum ;
            st.push(rest) ;
         }
         else
            st.push(mat[s[i] - 'A']) ;
     }
     now = GetList(st) ;
     ans += Gao(now , rest) ;
     return ans ;
}
 
int  main(){
     int r , c  , n ;
     string s , mt;
     while(cin>>n){
        for(int i = 0 ; i < n ; i++){
            cin>>mt>>r>>c ;
            mat[mt[0] - 'A'] = Mat(r , c , mt[0]) ;
        }
        cin>>s  ;
        int ans  = Ans(s) ;
        if(ans == -1)
           puts("error")   ;
        else
           printf("%d\n" , ans) ;
     }
    //  system("pause");
     return 0 ;
}
