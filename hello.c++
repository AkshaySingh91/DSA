#include <iostream>
#include <string.h>
#include <algorithm>
#include<vector>
using namespace std;

int main(){

   int num = 10;
   int *ptr = &num;
   cout<<ptr;



return 0;
}




   // // Search in 2D matrix
   // int matrix[4][4] = {{1,2,3,4},{5,6,7,8}, {9,11,15,20}, {25,26,27,28}};
   //    int target = 15;
   //      int s1 = 3, s2 = 3;
   //      int row = 0, col = s2;

   //      if(target<matrix[0][0] || target>matrix[s1][s2]){
   //          cout<<"Not Present";
   //          return 0;
   //      }
   //      for(;;){
   //          if((row<0||row>s1) || (col<0||col>s2)){
   //             cout<<"Not Present";
   //             return 0;
   //          }
   //          if(matrix[row][col] == target){
   //             cout<<"Present";
   //             return 0;
   //          }
   //          else if(matrix[row][col] > target){
   //              col--;
   //          }
   //          else{
   //              row++;
   //          }
   //      } 







// // binary search
//    int arr[12] = {1,3,5,7,10,11,16,20,23,30,34,60};
//    int s = 0, e = 11;
//    int mid = (e+s)/2, key = 9;

//    for(int i=s; i<=e; i=(e+s)/2){
//       if(key>arr[11] || key<arr[0] || s>e){
//          cout<<"Element not present";
//          break;
//       }
//       if(arr[i] == key){
//          cout<<"Element Present at "<<i<<" index";
//          break;
//       }
//       else if(arr[i] < key){
//          s = i+1;
//       }
//       else{
//          e = i-1;
//       }
//    }




   // // Rotate 2D Array 90 degree
   // int row = 5, col = 5;
   // int matrix[row][col] = {{1,2,3,4,5},
   //                         {6,7,8,9,10},
   //                         {11,12,13,14,15},
   //                         {16,17,18,19,20},
   //                         {21,22,23,24,25}};

   // int checkcol=col-1;

   // for(int i=0; i<row; i++){
   //    for(int j=0; !(j>i && (j>=checkcol)); j++){
   //       swap(matrix[i][j], matrix[j][checkcol]);
   //    }
   //    checkcol--;
   // }


   // for(int i=0; i<row; i++){
   //    for(int j=0; j<col; j++){
   //       cout<<matrix[i][j]<<" ";
   //    }
   //    cout<<endl;
   // }





// // sprial print 2D matrix
//    int arr[4][4] = { 1, 2, 3 ,4,
//                      5, 6, 7, 8,
//                      9, 10, 11 ,12,
//                      13, 14, 15, 16};
//    int sr = 0, er = 3, sc= 0, ec =3;
//    int count = 16;
// for(;count>=0;){
//    // first row 
//    for(int i=sc; i<=ec && count>=0; i++){
//       cout<<arr[sr][i]<<" ";
//       count--;
//    }
//    sr++;
//    // last column
//    for(int i=sr; i<=er && count>=0; i++){
//       cout<<arr[i][ec]<<" ";
//       count--;
//    }
//    ec--;
//    // last row
//    for(int i=ec; i>=sc && count>=0; i--){
//       cout<<arr[er][i]<<" ";
//       count--;
//    }
//    er--;
//    // first column
//    for(int i=er; i>=sr && count>=0; i--){
//       cout<<arr[i][sc]<<" ";
//       count--;
//    }
//    sc++;
//    }








   // // sine wave order print
   // int arr[4][4] = { 1,2,3,4,
   //                   5,6,7,8,
   //                   9,10,11,12,
   //                   13,14,15,16};

   // for(int i=0; i<4; i++){
   //    if(i%2 == 0){
   //      for(int j=0; j<4; j++){
   //       cout<<arr[j][i]<<" ";
   //       }cout<<endl;
   //    }
   //    else{
   //      for(int j=3; j>=0; j--){
   //       cout<<arr[j][i]<<" ";
   //       }cout<<endl;
   //    }
   // }






// // String Compresion
//    string str = "aaabccd", compStr = "";
//    char ch = str[0];
//    int count = 0;
//    for(int i=0; i<str.size(); i++){
//       if(str[i] == ch){
//          count++;
//       }
//       else{
//          compStr+=(ch);
//          if(count>1){
//             compStr+=(to_string(count));
//          }
//          count=1;
//          ch = str[i];
//       }
//    }
//    compStr+=(ch);
//    if(count>1){
//       compStr+=(to_string(count));
//    }
//    cout<<compStr;









   // // Remove adjacent Dublicate
   // string str = "abbsbsbbsb";

   // for(int i=0; i<str.size(); i++){
   //    string checkChr = {str[i], str[i]};
   //    int dupidx = str.find(checkChr) ;

   //    if(dupidx < str.size() && dupidx >= 0){
   //       str.erase(dupidx, 2);
   //       i = i-1;
   //    }
   // }
   // cout<<str;






 // //return true if Permutation of string 1 in string 2 present
   // string s1 = "ssn", s2 = "abababasbsbsnsbns";
   // int alpha[26] = {0};       // 0=97(a), 1=98(b)...
  
   // for(int i=0; i<s1.size(); i++){  //O(s1)
   //    alpha[s1[i]-'a']++;
   // }

   // int windowalpha[26] = {0}, flag = 1;
   // // counting char of first window
   // for(int j=0; j<s1.size() && j<s2.size(); j++){  //O(s1)
   //    windowalpha[s2[j]-'a']+=1;
   // }

   // for(int i=0; i<s2.size() && (s1.size()<s2.size()); i++){       //O(s2)
   //    char win1char = s2[i];
   //    // constant time complx
   //    for(int k=0; k<26; k++){
   //       if(alpha[k] == windowalpha[k]){
   //          flag = 1;
   //       }
   //       else{
   //          flag = 0;
   //          break;
   //       }
   //    }
   //    if(flag == 1){
   //       cout<<"present";
   //       break;
   //    }
   //    windowalpha[win1char-'a']-=1;
   //    windowalpha[s2[s1.size()+i]-'a']+=1;
   // }







// // Remove all Ocurrence of substring

// string str = "daabcbaabcbc", substr = "abc";

// for(; (str.find(substr) < str.size()) && str.size()!=0 ; ){
//       str.erase(str.find(substr), 3);
// }
// cout<<str;

// int find= 1;
// for(; find; ){
//    for(int j=0; j<str.size(); j++){
//       if(str[j] == 'a' && str[j+1] == 'b' && str[j+2] == 'c'){
//          find = 1;
//          str.erase(j, 3);  
//          break;
//       }
//       else{
//          find = 0;
//       }
//    }   
// }
// cout<<str;







// // Replace whitespace from string with "__"

// string str = "my name is akshay singh";
// for(int i=0; str[i]!='\0'; i++){
//    if(str[i] == ' '){
//       str.erase(i, 1);
//       str.insert(i, "__");
//    }
// }
// cout<<str;
// string temp = "";
// for(int i=0; str[i]!='\0'; i++){
//    if(str[i] == ' '){
//       temp.push_back('_');
//       temp.push_back('_');
//       // str.pop_back();
//    }
//    else{
//       temp.push_back(str[i]);
//    }
// }
// int strlen = str.size();
// for(int i=0; i<strlen; i++){
//    if(str[i] == ' '){
//       str.push_back('_');
//       str.push_back('_');
//       // str.pop_back();
//    }
//    else{
//       str.push_back(str[i]);
//    }
// }
// str.erase(0, strlen);
// cout<<str;







// // max occuring element if more than 1 than ans is lexicographically small
// // lower case bound
// char str[46] = "engeneering is more important than porgraming";
// int maxi = -1;

// int store[26] = {0};                //total alphabet is 26 it store all occurence of alpbt

// for(int i=0; str[i]!='\0'; i++){
//    store[str[i] - 'a']++;
// }
// vector<int> allmax;                
// vector<int> allidx;

// for(int i=0; i<26; i++){
//    maxi = max(maxi, store[i]);
//    if(maxi == store[i]){
//       allmax.push_back(maxi);        //it store all current maxi occurence in ascending order
//       allidx.push_back(i);            //it store all index of curent max occuerence alpbt
//    }
// }
// maxi = allmax.back();                  //max occunc store in ascending order thus ans is last occur

// int value = 30;                     //26 alpha present

// for(int i=maxi; i == maxi; i=allmax.back()){       //it check if more than 1 ans present by iterating over same ans 
//    value = min(value, allidx.back());
//    allidx.pop_back();
//    allmax.pop_back();
// }
// cout<<"Lexicograhically small maximum occuring char is "<<char(value + 97)<<" "<<maxi<<" times";






// // sum of 2 no using array 
   // vector<int> arr1 = {9,2,3,5,8,6,8,6,0};
   // vector<int> arr2 = {5,4,7,8,7,4,8,7,8};
   // vector<int> ans;
   // vector<int> maxarr;
   // vector<int> minarr;

   // if(arr1.size() > arr2.size()){
   //    maxarr = arr1;
   //    minarr = arr2;
   // }
   // else{
   //    maxarr = arr2;
   //    minarr = arr1;
   // }
   // int carry = 0;
   // int mxi = maxarr.size()-1, minj = minarr.size()-1;

   // for(mxi, minj; mxi>=0; mxi--,minj--){
   //    int smallarr = minarr[minj];

   //    if(minj < 0){
   //       smallarr = 0;
   //    }

   //    int sum = maxarr[mxi] + smallarr + carry;
   //    carry = sum/10;
   //    sum %= 10;
   //    ans.insert(ans.begin(), sum);
   // }
   // if(carry > 0){
   //    ans.insert(ans.begin(), carry);                // to insert last carried value if any
   // }          
   // for(int i:ans){
   //    cout<<i;
   // }   

// // other approch
   // int i=arr1.size()-1, j=arr2.size()-1;
   // int carry = 0;
   // for(i, j; i>=0 && j>=0; i--, j--){
   //    int sum = arr1[i] + arr2[j] + carry;
   //    carry = sum/10;
   //    ans.push_back(sum%10);
   // }
   // //if arr1 > arr2
   // while(i>=0){
   //    int sum = arr1[i] + carry;
   //    ans.push_back(sum%10);
   //    carry = sum/10;
   //    i--;
   // }

   // //if arr1 < arr2
   // while(j>=0){
   //    int sum = arr2[j] + carry;
   //    carry = sum/10;
   //    ans.push_back(sum%10);
   //    j--;
   // }
   // // both no of digit equal but have some array
   // while(carry != 0){
   //    ans.push_back(carry);
   //    carry/=10;
   // }
   // reverse(ans.begin(), ans.end());

   // for(int i:ans){
   //    cout<<i<<" ";
   // }   






   // int i=arr1.size()-1, j=arr2.size()-1;
   // int carry = 0;
   // for(i, j; i>=0 && j>=0; i--, j--){
   //    int sum = arr1[i] + arr2[j] + carry;
   //    carry = sum/10;
   //    ans.push_back(sum%10);
   // }
   // //if arr1 > arr2
   // while(i>=0){
   //    int sum = arr1[i] + carry;
   //    ans.push_back(sum%10);
   //    carry = sum/10;
   //    i--;
   // }

   // //if arr1 < arr2
   // while(j>=0){
   //    int sum = arr2[j] + carry;
   //    carry = sum/10;
   //    ans.push_back(sum%10);
   //    j--;
   // }
   // // both no of digit equal but have some array
   // while(carry != 0){
   //    ans.push_back(carry);
   //    carry/=10;
   // }
   // reverse(ans.begin(), ans.end());

   // for(int i:ans){
   //    cout<<i<<" ";
   // }   

// // check if array is sorted and rotated
   // vector<int> arr= {1,1,1};
   // int temp = 0, ans=0;
   // int piviot = 0;
   // for(int i=0; i<arr.size()-1; i++){
   //    if(arr[i] <= arr[i+1]){
   //       temp++;
   //    }
   //    else{
   //       piviot++;
   //       if(piviot > 1){
   //          break;
   //       }
   //       ans = temp+1;
   //    }
   // }
   // (arr[arr.size()-1] > arr[0]) ? piviot++ : NULL; 

   // if(piviot <= 1){        //piviot 0 bhi ho skta hai if sare element same hai
   //    cout<<"rotated Sorted array by position "<<ans;
   // }
   // else{
   //    cout<<"Not rotated Sorted array";
   // }






   ////rotate an array
   // vector<int> arr= {1,7,9,11,12,17,18};
   // int K = 3;

   // vector<int> temp(arr.size()); 
   // for(int i=0; i<arr.size(); i++){
   //    if(i+K < arr.size()){
   //       temp[i+K] = arr[i];
   //    }
   //    else{
   //       temp[i+K-arr.size()] = arr[i];
   //    }
   // }
   ////OR
   // for(int i=0; i<arr.size(); i++){
   //    temp[(i+K) % arr.size()] = arr[i];
   // }
   
   // for(auto i:temp){
   //    cout<<i<<" ";
   // }






//// place 0s on R.H.S
//   for(int i=0; i<15; i++){
//       if(arr[i] != 0){
//          swap(arr[idx++], arr[i]);
//       }
//    } 

   // for(idx; idx<15; idx++){
   //    arr[idx] = 0;
   // }
   // for(int i=0; i<15; i++){
   //    if(arr[i] != 0){        //position method    0(n)
   //       arr[idx++] = arr[i];
   //    }
   // }

   // for(int i=14; i>=0; i--){
   //    if(arr[i] == 0){              //swaping method  0(n^2)
   //       for(int j=i; j<idx; j++){
   //          swap(arr[j], arr[j+1]);
   //       }
   //          idx--;
   //    }
   // }





   // // Bresenhm's algo
   // int x1, y1, x2, y2, dx, dy, decinparmtr;
   // cout<<"Enter x1 and y1 :\t";
   // cin>>x1>>y1;
   // cout<<"Enter x2 and y2 :\t";
   // cin>>x2>>y2;

   // dx = x2-x1, dy = y2-y1;
   // decinparmtr = 2*dy - dx;

   // int tempx = x1, tempy = y1;
   // for(; tempx<=x2 || tempy<=y2; ){

   //    if(decinparmtr < 0){
   //       cout<<"("<<tempx<<" , "<<tempy<<")\n";

   //       tempx = tempx+1;
   //       tempy = tempy;
   //       decinparmtr = decinparmtr + 2*dy;
   //    }
   //    else{
   //       if(tempx == x2 && tempy<y2){
   //          tempy = tempy+1;
   //          cout<<"("<<tempx<<" , "<<tempy<<")\n"; 
   //       } 
   //       else if(tempy == y2 && tempx<x2){
   //          tempx = tempx+1;
   //          cout<<"("<<tempx<<" , "<<tempy<<")\n"; 
   //       }
   //       else{ 
   //          cout<<"("<<tempx<<" , "<<tempy<<")\n"; 

   //          tempx = tempx+1;
   //          tempy = tempy+1;
   //          decinparmtr = decinparmtr + 2*dy - 2*dx;
   //       }
   //       }
   // }





   ////Digital discrete Algorithm
   // int x1, y1, x2, y2, dx, dy;
   // cout<<"Enter x1 and y1 :\t";
   // cin>>x1>>y1;
   // cout<<"Enter x2 and y2 :\t";
   // cin>>x2>>y2;

   // dx = x2-x1;
   // dy = y2-y1;

   // float xin, yin;
   // xin = dx*1.0/max(dx, dy);
   // yin = dy*1.0/max(dx, dy);

   // float tempX = x1, tempY = y1;
   // cout<<"all coordinates are:\n";
   
   // for(int i=1; i<=max(dx, dy)+1; i++){

   //    cout<<"("<<tempX<<" , "<<tempY<<")\n";
   //    tempX = tempX+xin;
   //    tempY = tempY+yin;
   // }





// //mrege2sorted in place algo i.e without using temp array
// void mrege2sorted(vector<int> &m1, vector<int> &m2){
//    int i=0, j=0;
//    for(i, j; i<m1.size() && j<m2.size(); ){
//       if(m1[i] <= m2[j]){
//          i++;
//       }
//       else{
//          m1.insert(m1.begin()+i, m2[j]);
//          j++;
//       }
//    }
//    m1.insert(m1.end(), m2.begin()+j, m2.end());
// }

// int main(){
//    vector<int> m1{1,2,3,4,5,6,90,100};
//    vector<int> m2{2,8,9,10,10,10,11,866,6923};

//    mrege2sorted(m1,m2);

//    for(int i : m1){
//       cout<<i<<" ";
//    }





   // //sort012 or dutch flag algo or 3 pointer approach

   // int arr[13] = {2,1,0,2,1,0,1,0,0,0,1,1,0};
   // for(int low=0, mid=0, end=12; mid<=end; ){
   //    if(arr[mid] == 0){
   //       swap(arr[mid], arr[low]);
   //       low++, mid++;
   //    }
   //    else if(arr[mid] == 1){
   //       mid++;
   //    }
   //    else if(arr[mid] == 2){
   //       swap(arr[mid], arr[end]);
   //       end--;
   //    }
   // }
   // for(int i: arr){
   //    cout<<i<<" ";
   // }






// //triplet whose sum is s
//    int arr[5] = {9,6,6,8,6};
//    int k = 20;
   
//    sort(arr, &arr[5]);

//    vector< vector<int> > triplet;

//    for(int i=0; i<5; i++){
//       for(int j=i+1; j<5; j++){
//          int diff = k - arr[i] - arr[j];
         
//          if((arr[j+1] <= diff) && (arr[5] >= diff)){
//             if( binary_search(&arr[j+1], &arr[5], diff) ){
//                vector<int> temp;
//                temp.push_back(arr[i]);
//                temp.push_back(arr[j]);
//                temp.push_back(diff);
//                triplet.push_back(temp);
//             }
//          }
//       }
//    }
//   for(auto i=triplet.begin(); i!=triplet.end(); i++){
//       for(auto j = i->begin(); j!=(i->end()); j++){
//          cout<<(*j)<<" ";
//       }
//       cout<<endl;
//    }






////find pair of element whose sum is s
//   vector< vector<int> > pair;
//    int s = 6;
//   for(int i=0; i<5; i++){
//    for(int j=i+1; j<5; j++){
      
//       if(arr[i]+arr[j] == s){
//          vector<int> temp;
//          temp.push_back(min(arr[i], arr[j]));
//          temp.push_back(max(arr[i], arr[j]));
//          pair.push_back(temp);
//       }
//    }
//   }

//   sort(pair.begin(), pair.end()); 

//   cout<<"The sum of these Pair is "<<s<<endl;

//   for(auto i=pair.begin(); i!=pair.end(); i++){
//       for(auto j = i->begin(); j!=(i->end()); j++){
//          cout<<(*j)<<" ";
//       }
//       cout<<endl;
//    }

////find pair of element whose sum is s except for duplicate element
//   int arr[5] = {2,-3,3,3,-2};
//    vector< vector<int> > v;
//    int sum = 0;
   
//    sort(arr, &arr[5]); 
  
//    for(int i=0; i<5; i++){
//       int diff = sum-arr[i];
//       if(diff >= arr[i]){
//          if(binary_search(&(arr[i])+1, &arr[5], diff)){
//              cout<<arr[i]<<" \n";
//             vector<int> temp;
//             temp.push_back(min(arr[i], diff));
//             temp.push_back(max(arr[i], diff));
//             v.push_back(temp);
//          }
//       }
//    }

//    for(auto i=v.begin(); i!=v.end(); i++){
//       for(auto j= i->begin(); j!=i->end(); j++){
//          cout<<*j<<" ";
//       }
//       cout<<endl;
//    }





////common element in an array
//    int arr1[10] = {1,2,3,4,5,6,7,8,9,0}, arr2[4] = {2,9,4,6};
//    map<int, int> m1;
//    map<int, int> m2;
//    map<int, int> m3;
  
//   for(auto i:arr1){
//     m1[i]++;
//   }
//   for(auto i:arr2){
//     m2[i]++;
//   }
// int occur;
//   for(auto i:m1){
//       if(m2.count(i.first)){
//          occur = min((*m2.find(i.first)).second, i.second);
//          m3[i.first] = occur;
//       }
//   }
//    if(m3.empty()){
//       cout<<"No common Element";
//       return 0;
//    }
//   for(auto i:m3){
//      for(int j=0; j<i.second; j++){
//        cout<<i.first<<" ";
//      }
//   }

//    int arr1[10] = {1,2,3,4,5,6,7,8,9,10}, arr2[4] = {2,9,10,16};  //sorted in non decresing order
  
//   for(int i=0, j=0; i<10 && j<4;){
//       if(arr1[i] < arr2[j]){
//          i++;
//       }
//       else if(arr2[j] < arr1[i]){
//          j++;
//       }
//       else{
//          cout<<arr1[i]<<" ";
//          i++, j++;
//       }
//   }
  




//// duplicate element
  // int arr[9] = {2,3,1,4,5,6,8,7,3};
   // int erase = 0;

   // for(int i=0; i<8; i++){
   //    erase = erase^(i+1);
   // }

   // int a = 0;
   // for(int i=0; i<9; i++){
   //    a = a ^ arr[i];
   //    }
   // cout<<(a^erase);  
   
   
   
   
   
//// unique occurence of element or not
   // int arr[6] = {1,1,2,2,2,3};
   
   // map<int, int> mp;
   // for(int i=0; i<6; i++){
   //    mp[arr[i]]++;
   // }

   // bool flag = 1;
   // auto s=mp.size();

   // for(int i=0; i<s; i++){ // size of map is varying hense use s 
      
   //    int temp = (mp.begin())->second; // current 2nd value ko store karega 
   //    mp.erase(mp.begin()->first);   // aur usko baad me delete taki excep it baki value ko check kare 

   //    for(auto j : mp){
   //       if(j.second == temp){
   //          cout<<"not a unique occurence";
   //          flag = 0;
   //          break;
   //       }
   //       }
   //    }
   // if(flag){
   //    cout<<"a unique occurence";
   // }





   ////pair sum of 2 baki hai
   // int y= 0;
   // for(int i=0; i<6; i++){
   //    y = y ^ arr[i];
   // }
   // cout<<y<<endl;

   // int a= 0, b=0;
   // for(int i=0; i<ceil(log10(y)/log10(2)); i++){
   //    if((y | 1<<i) == 1){
   //       cout<<"sfs";
   //       cout<<1;
   //      if(i%2 == 0){
   //        a = a|(1<<i);
   //       }
   //       else{
   //        b = b|(1<<i);
   //       }
   //    }
   // }
   // cout<<a<<" "<<b




////no of bits in no
   // float lg = log10(698354542554553);
   // int bits = ceil((lg)/log10(2));
   // cout<<bits<<endl;
   // long long int a = 0, op = 1;
   // for(int i=0; i<bits; i++){
   //    a = 698354542554553 | (op<<i);
   //    }
   // cout<<a;



// bool check(int maze[][7], int visited[][7], int r, int c, int i, int j){
//    if((maze[i][j] == 1) && (visited[i][j] == 0) && (i>=0 && i<r) && (j>=0 && j<c)){
//       return true;
//    }
//    else{
//       return false;
//    }
// }

// /*first array dimension does not have to be specified. The second (and any subsequent) dimensions must be given*/
// void ratInMaze(int maze[][7], int visited[][7], int r, int c, int i, int j, string map){
//    if(i == r-1 && j == c-1){
//       cout<<map<<endl;        //base case
//       return;
//    }
//    if(maze[0][0] == 0){      // exception
//       cout<<"cannot solve this maze";
//       return;
//    }
//    // visited this position

//       visited[i][j] = 1;
//    if(check(maze, visited, r, c, i+1, j)){
//       i = i+1;
//       map += 'D';
//       ratInMaze(maze, visited, r, c, i, j, map);
//       i = i-1;                                     // to retain it value or Backtracking.
//       map = map.substr(0, map.size()-1);           // return aate samaya string ke last char hata dega.
//    }

//    if(check(maze, visited, r, c, i, j+1)){
//       j = j+1;
//       map += 'R';
//       ratInMaze(maze, visited, r, c, i, j, map);
//       j = j-1;
//       map = map.substr(0, map.size()-1);
//    }

//    if(check(maze, visited, r, c, i, j-1)){
//       j = j-1;
//       map += 'L';
//       ratInMaze(maze, visited, r, c, i, j, map);
//       j = j+1;
//       map = map.substr(0, map.size()-1);
//    }
   
//    if(check(maze, visited, r, c, i-1, j)){
//       i = i-1;
//       map += 'U';
//       ratInMaze(maze, visited, r, c, i, j, map);
//       i = i+1;
//       map = map.substr(0, map.size()-1);
//    }
//  //return aate samay unvisited kr dega taki 2nd possible path se aa paye.
//    visited[i][j] = 0;        
// }       

//    int r = 7, c =7;
//    int maze[r][7] = {
// 1, 0, 0, 1, 0,1,0,
// 1, 1, 1, 1, 1,0,1,
// 0, 1 ,1, 0, 1,1,1,
// 1, 0, 1, 1, 0,0,1,
// 1, 0, 0, 1, 0,1,0,
// 1, 1, 0, 1 ,1,1,1,
// 0, 0, 0 ,0 ,1,0,1};





////permutation of string
// void permutation(string str, int size, string ans, int idx){
//    if(idx >= size){
//       cout<<str<<endl;
//       return;
//    }
//    for(int i=idx; i<size; i++){
//       swap(str[idx], str[i]);
//       permutation(str, size, ans, idx+1);
//    }
// }

// void permutation(string str, int size, string ans, int idx, int idx2){

//    if(idx2 == 0){
//       idx = idx+1;
//       if(idx >= size){
//          return;
//          }
//        for(int i=str.size()-1; i>=0; i--){
//            if(i != idx)
//                idx2 = (idx2*10) + i;
//             }
//       return permutation(str, size, ans, idx, idx2);
//    }
//    string t1 = "", t2= "", t3= "";
//    for(int i=0; i<str.size(); i++){
//       if(i == idx){
//          t1 += str[i];
//       }
//       else if(i == idx2%10){
//          t2 += str[i];
//       }
//       else{
//          t3 += str[i];
//       }
//    }
//    ans = t1+t2+t3;
//    cout<<ans<<" ";
//    idx2/=10;
//    permutation(str, size, ans, idx, idx2);
// }
   // string str = "abc";
   // int idx=0, idx2=0;
   // for(int i=str.size()-1; i>=0; i--){
   //    if(i != idx)
   //      idx2 = (idx2*10) + i;
   // }
   // permutation(str, 3, "", idx, idx2);




// // phone keypad paablm
// void phoneKeypad(string digit,int idx, string mapping[], string ans){
//    if(idx >= digit.size()){
//       cout<<ans<<endl;
//       return;
//    }
//    int key = digit[idx] - '0';
//    string value = mapping[key];

//    for(int i=0; i<value.size(); i++){
//       // ans += value[i];

//       /*is condition me last stack hai useme ans add ho ja raha hai phir base case ke pass phauche ke print ho raha hai 
//       lekin vo value change nahi hogi aur usme agee add hota jaye ga lekin agar hum call krte samay add kr ke bheje to 
//       vo base case ke condition wale stack pe add hoga aur output milne ke baad me vo value phele jase ho jaye gi*/ 
//       phoneKeypad(digit, idx+1, mapping, ans+value[i]);
//    }
   
// }



   ////subseq by bit 
   // string set = "";
   // for(int i=0; i<(1<<set.size()); i++){
   //    for(int j=0; j<set.size(); j++){
   //       if(i & (1<<j)){
   //          cout<<set[j]<<" "; 
   //       }
   //    }
   //    cout<<endl;
   // }   




////subset of set b reccur

// void powerSet(int *arr, int size, int *ans, int idx){
//    if(idx >= size){
//       bool f=0;
//       for(int i=0; i<size; i++){
//          if(ans[i] != 0){
//            cout<<ans[i];
//            f=1;
//          }
//       }
//       if(f)
//       cout<<endl;
//       return;
//    }

//    //exclude
//    ans[idx] = 0;           //har ek index pe 0 rakh dega so tht hm usko as condition ude krenge 
//    powerSet(arr, size, ans, idx+1);

//    //include
//    ans[idx] = arr[idx];
//    powerSet(arr, size, ans, idx+1);

// }



//// subsequence of string
// void subsequence(string str, string ans, int idx){
//    if(idx >= str.length()){
//       cout<<ans<<endl;
//    return;
//    }
//    //exclude
//    subsequence(str, ans, idx+1);   

//    //include
//    ans += str[idx];
//    subsequence(str, ans, idx+1);   

// }



//// Quick Sort
// int partion(int *arr, int s, int e)
// {    int count = 0;
   
//     for(int i=s+1; i<=e; i++){ //i start from s not from 0.
//       if(arr[i] <= arr[s])
//         count++;
//     }
//     int pivotIndex = s+count;

//     swap(arr[s], arr[pivotIndex]);


//     for(int i=s, j=e; i<pivotIndex && j>pivotIndex; i++,j--){
//          for(; arr[i] <= arr[pivotIndex]; ){    //element can be smaller or equal to piviot element on right side.
//             i++;
//          }
//          for(; arr[j] > arr[pivotIndex]; ){     //but element cant be equal on left side.
//             j--;
//          }
//          if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i], arr[j]);
//          }

       
//     }
//     //index of partion element from where right part is smaller & left part grater than it.
//     return pivotIndex;
// }
// void quickSort(int *arr, int s, int e)
// {
//    if(s >= e){
//       return;
//    }
//    int pivotIdx = partion(arr, s, e);
//    // left part sort krdega
//     quickSort(arr, s, pivotIdx-1);
//    // right part sort krdega
//     quickSort(arr, pivotIdx+1, e);

// }





// void merge2sortedarray(int *arr, int s, int mid, int e){
//     int s1 = mid - s + 1, s2 = e - mid;
//     int arr1[s1], arr2[s2];
   
//     //copying values
//     int idx = s;          

//    /*idx not to initilize by 0 it should be initilize by starting point of array for right arr it is 0 and for
//    left it is mid+1 thus it should intilize by s because s start from starting point of sub arr*/

//     for(int i=0; i<s1; i++){
//       arr1[i] = arr[idx++];
//     }
//     for(int i=0; i<s2; i++){
//       arr2[i] = arr[idx++];
//     }
//    idx = s;
//     //sorting values in Orignal array
//     int i=0,j=0;

//     for(i,j; i<s1 && j<s2; ){
//       if(arr1[i] >= arr2[j]){
//          arr[idx++] = arr2[j++];
//       }
//       else{
//          arr[idx++] = arr1[i++];
//       }
//     }
//     // copying remaining element 
//     for(; i<s1; ){
//        arr[idx++] = arr1[i++];
//     }
//     for(; j<s2; ){
//        arr[idx++] = arr2[j++];
//     }
      
// }
// void mergeSort(int *arr, int s, int e){
//     int mid = (s+e)/2;
//    if(s >= e){
//       return;
//    }
//    // left part
//     mergeSort(arr, s, mid);
//    // right part 
//     mergeSort(arr, mid+1, e);

//     merge2sortedarray(arr, s, mid, e);

// }  
  


   // void merge2Sortedarray(int *arr, int s, int mid, int e){   
      
   //    int s1 = mid+1,/*0 base indexing*/ s2 = e-mid;
   //    int temparr1[s1], temparr2[s2], j=0;

   //    // copying 2 sorted arry in 2 parts.
   //    for(int i=0; i<s1; i++){
   //       temparr1[i] = arr[j++];
   //    }
   //    for(int i=0; i<s2; i++){
   //       temparr2[i] = arr[j++];
   //    }
   //    j = 0;
   //    int i,k;

   //    //insert chotewale element in arr
   //    for(i=0, k=0; (i<s1 || k<s2); ){
   //       if(temparr1[i] < temparr2[k]){
   //          arr[j++] = temparr1[i];
   //          i++;
   //       }
   //       else{
   //          arr[j++] = temparr2[k];
   //          k++;
   //       }
   //    }
   //    for(int m= i; i<s1; i++){
   //       arr[j] = temparr1[i];
   //    }
   //    for(int m= k; k<s2; k++){
   //       arr[j++] = temparr1[k];
   //    }

   // }
   // void mergeSort(int *arr, int size){  // form 2 differnt sorted array
   //    static int s=0, e= size-1;
   //    static int mid= (s+e)/2, i=s, j=1;
      
   //    if(arr[i] > arr[j]){
   //       int temp = arr[i];;
   //       arr[i] = arr[j];
   //       arr[j] = temp;
   //    }
   //    j++;
   //    if(j == mid+1 || j>e){
   //       i++;
   //       if(i == mid){
   //          i= mid + 1;
   //          j = i+1;
   //          return mergeSort(arr, size);
   //       }
   //       else if(i == e){
   //          merge2Sortedarray(arr, s, mid, e);
   //          return;
   //       }
   //       else{
   //          j= i+1;
   //          return mergeSort(arr, size);
   //       }
   //    }
      
   //    else{
   //       mergeSort(arr, size);
   //    }     
      
   // }




//// insertion sort by recursion
   // void insertionSort(int *arr, int size){

   //    static int i=1, j = 0, m=0;

   //    if(arr[j] > arr[i-m]){
   //       int swap = arr[j];
   //       arr[j] = arr[i-m];
   //       arr[i-m] = swap;
   //    }

   //    j--, m++;

   //    if(j<0){
   //       i++;
   //       m= 0;
   //       if(i == size){
   //          return;
   //       }
   //       else{
   //          j = i-1;
   //          return insertionSort(arr, size);
   //       }
   //    }
   //    else{
   //       insertionSort(arr, size);
   //    }
   // }





//selection sorting by recursion
// void selectionSort(int * arr, int size){
//       static int i=0, j=1;

//       if(arr[i] > arr[j]){
//          int temp = arr[i];
//          arr[i] = arr[j];
//          arr[j] = temp;
//       }
//       j++;
//       if(j == size){
//          i++;
//          j = i+1;
//          if(i == size-1){                    //base case
//             return;
//          }
//          else{
//          return selectionSort(arr, size);   // if return is absent than after base case reach it will execute further call and j value increse 
//          }                                  // and it will become infinite loop.
//         }                                     //similarly for else if else is absent.
//       else{                                  
//          selectionSort(arr, size);        //call for same i ke value and j incresing 
//       }                                        
//    }



   
// // BubbleSort by Recursion
// void bubbleSort(int * arr, int size){
//       static int i = 0;

//       if(arr[i] > arr[i+1]){
         
//          arr[i] = arr[i] + arr[i+1];
//          arr[i+1] = arr[i] - arr[i+1];
//          arr[i] = arr[i] - arr[i+1];
//       }
//       i++;
//       if(i == size){
//          i = 0;
//          size = size - 1;
//          if(size == 0){
//             return;
//          }
//          bubbleSort(arr, size);
//       }
//        bubbleSort(arr, size);
// }




////power of n by recursion
// int power(int a, int b){
//    static int ans = a;
//    if(b == 0){
//       return 1;
//    }
//    if(b % 2 != 0){
//       ans = a*power(a, b/2) * power(a, b/2);
         
//    }
//    else{
//       ans = power(a, b/2)*power(a, b/2);
//    }
   
   // if(b == 1){                //base case
   //    return ans;
   // }
   // else if(b == 0){          //Exception
   //    return 1;
   // }
   // ans *= a;
   // return power(a, b-1); 
// }



// bool reverse(string sample){
//       static int size = sample.length(), i=0;

//       if(i == size/2){
//          return true;
//       }

//       if(sample[i] == sample[size-i-1]){
//          i++;
//         return reverse(sample);
//       }
//       else{
//          return false;
//       }
// }
   



// int aggresiveCows(int *arr, int arrsize, int cows, int mid, int start, int end){
//    if(start >= end){
//       return mid;
//    }
//    mid = start + (end)/2; 
//    int firstCow = arr[0];
//    for(int i=1; i<arrsize; i++){
//       if(arr[i] - firstCow >= mid){
//          cows--;
//          firstCow = arr[i];
//          if(cows == 0){
//             start = mid+1;
//             return aggresiveCows(arr, arrsize, cows, mid, start, end);
//          }
//       }
//    }
//    end = mid-1;
//    return aggresiveCows(arr, arrsize, cows, mid, start, end);
//    // int arr[5] = {1,2,3,4,6};
//    // int max1 = -1;
//    // for(int i=0; i<5; i++){
//    //    max1 = max(arr[i], max1);
//    //  }    

//    //  int start = 0, end = max1;
//    //  int cows = 2;

//    //  cout<< aggresiveCows(arr, 5, cows, start+(end-start)/2 , start, end);
  



// //book allocation problem
// int bookAllocation(int *arr, int size, int totalstudent, int *pages, int start, int end, int ans){
//    int mid = (start+end)/2, pagesSum = 0, student = 1;
//    if(start > end){
//     return ans;
//   }
//    int i;
//    for(i = 0; i<size; i++){
//       if(pagesSum+arr[i] <= pages[mid]){
//          pagesSum += arr[i];
//       }
//       else{
//          student++;
//          if(student > totalstudent || pagesSum > pages[mid]){
//             start = mid + 1;
//             return bookAllocation(arr, size, totalstudent, pages, start, end, ans);
//          }
//          else{
//             pagesSum = arr[i];
//          }
//       }
//    }
//    if(i == size){
//       ans = pages[mid];
//       end = mid - 1;
//       return bookAllocation(arr, size, totalstudent, pages, start, end, ans);
//    }
// }
   // int arr[4]= {12,34,67,90};
   // int sum=0; 
   // for(int i=0; i<4; i++){
   //    sum+=arr[i];
   // }
   // int pages[sum];
   // for(int i=0; i<sum; i++){
   //    pages[i] = i+1;
   // }
   // int totalStudent = 2;

   // cout << bookAllocation(arr, 4, totalStudent, pages, 0, sum-1, -1);




////binary search for sqrt
// double squareRoot(int* arr, int start,int end, int n, int ans, int precision, double afterDigit){
//     if(start > end){
//         double result= ans;
//          if(precision == 0){
//          return result;
//            }
//       result = result + afterDigit;
//       if(result*result <= n*1.0){
//           squareRoot(arr, start, end, n, ans, precision, afterDigit);
//       }
//       else{
//          result= result-afterDigit;
//          precision= precision-1;
//          afterDigit= afterDigit/10;
//           squareRoot(arr, start, end, n, ans, precision, afterDigit);
//        }
// }
// else{   
//       int mid= (start+end)/2;
 
//      if((arr[mid]*arr[mid]) <= n){
//        if((arr[mid]*arr[mid]) == n)
//           return arr[mid];

//        ans= arr[mid];
//        start= mid+1;
//      squareRoot(arr, start, end, n, ans, precision, afterDigit);
//     }
//     else{
//       end= mid-1;
//     squareRoot(arr, start, end, n, ans, precision, afterDigit);
//     }
//  }
// }




// //binary search for sqrt
// long long int squareRoot(long long int* arr, int start,int end, long long int n,long long int ans){
//     if(start > end){
//       return ans;
//     }
//     long long int mid= (start+end)/2;
 
//      if((arr[mid]*arr[mid]) <= n){
//        if((arr[mid]*arr[mid]) == n)
//           return arr[mid];

//        ans= arr[mid];
//        start= mid+1;
//      squareRoot(arr, start, end, n, ans);
//     }
//     else{
//       end= mid-1;
//     squareRoot(arr, start, end, n, ans);
//     }
// }
 


// int searchInRotatedarr(int *arr, int size, int start, int end, int key){
//     if(start > end){
//       return -1;
//     }
//     int mid= (start+end)/2;

//     if(arr[mid] == key){
//       return mid;
//     }
//     if(key >= arr[0]){      // in which part key lies so that we move in that direction
//       if(arr[mid] > arr[0]){     //it find in which part mid lies 
//          if(arr[mid] > key){        //it tells that key if left side
//             end= mid-1;
//             searchInRotatedarr(arr, size, start, end, key);
//          }
//          else{
//              start= mid+1;
//             searchInRotatedarr(arr, size, start, end, key);
//          }
//       }
//       else{
//          end= mid-1;
//             searchInRotatedarr(arr, size, start, end, key);
//       }
//     }
//     else{ 
//       if(arr[mid] < arr[0]){
//          if(arr[mid] > key){
//             end= mid-1;
//             searchInRotatedarr(arr, size, start, end, key);
//          }
//          else{
//             start= mid+1;
//             searchInRotatedarr(arr, size, start, end, key);
//              }
//         }
//       else{
//           start= mid+1;
//           searchInRotatedarr(arr, size, start, end, key);
//       }
//         }
// }



////pivot in rotated array
// int pivotElement(int *arr, int size, int start, int end){
//           if(start > end){
//           return 0;
//          }
//       int mid= (start+end)/2;
//       if(arr[mid] > arr[0]){
//           start= mid+1;
//          pivotElement(arr, size, start, end);
//       }
//       else if(arr[mid] <= arr[size-1]){
//          if(arr[mid] < arr[mid+1] && arr[mid] < arr[mid-1] ){
//             return mid;
//          } 
//          end= mid-1;
//          pivotElement(arr, size, start, end);
//         }
      
//       }



// // peak index
// int peakMountain(int arr[], int start, int end){
//    int mid= (start + end)/2;
//      if(arr[mid] < arr[mid+1]){
//        start= mid+1;
//        peakMountain(arr, start, end);
//     }
//     else if,(arr[mid] < arr[mid-1]){
//        end= mid;
//        peakMountain(arr, start, end);
//     }
//     else{
//       return mid;
//     } 
//  }



// void binaryFirstandLast(int arr[],int start, int end, int key){
//     int mid= (start+end)/2;
//     if(start > 3){     //base case
//       return;  
//     }
//     if(arr[mid] == key){
//        if(arr[mid-1] < key){
//          cout<<"Start = "<<mid<<" ";
//          binaryFirstandLast(arr,mid+1,end,key);
//       }
//       if(arr[mid+1] > key){
//          cout<<"end = "<<mid<<" ";
//          binaryFirstandLast(arr, start,mid+1,key);
//       }
//       else{
//          binaryFirstandLast(arr, mid-1,end,key);
//       }
//     }
//     else if(arr[mid] > key){
//       binaryFirstandLast(arr,start,mid-1,key);
//     }
//     else if(arr[mid] < key){
//       binaryFirstandLast(arr,mid+1,end,key);
//     }
//     }
 

// int binarySearch(int arr[], int key, int start, int end){
//     int mid= (start + end)/2;
//    cout<<arr[mid]<<endl;
//    if(start > end){
//       return -1;
//    }
//    if(arr[mid] == key){
//       return mid;
//    }
//    else if(arr[mid] < key){
//       start= mid + 1;
//    }
//    else if(arr[mid] > key){
//        end= mid - 1;
//    }   
//    binarySearch(arr, key, start, end);
// }


// int binarySearch(int arr[], int key, int start, int end){
//    print(arr,start, end);
//    int mid= (start + end)/2;
//    if(start > end){
//       return -1;
//    }

//    if(arr[mid] == key){
//       return mid;
//    }
//    else if(arr[mid] < key){
//       binarySearch(arr, key, mid + 1, end);
//    }
//    else if(arr[mid] > key){
//       binarySearch(arr, key, start, mid-1);
//    }   
//    }
  


//// linearSearch by rercursion
// int linearSearch(int *arr, int size, int key){
     
//      if(size == 0){
//       return -1;
//      }
//      if(arr[0] == key){
//       return 6-size;
//      }
//      else{
//       linearSearch(arr+1, size-1, key);
//      }
// }



//// sort by fx
// void swap(int *arr, int n){
//       for(int i=0; i<n; i++){
//         if(arr[i] > arr[i+1]){
//          int t= arr[i];
//           arr[i]= arr[i+1];
//           arr[i+1]= t;
//         } 
//       }
// }
// void sort(int *arr, int n){
//    if(n == 1){
//       return;
//    }
//     swap(arr, n-1);
    
//     sort(arr, n-1);
// }



//sum of rec
// int arrSum(int *arr, int n, int sum){
//    if(n==0){
//       return sum;
//    }
//    sum += arr[0];
//    arrSum(arr+1, n-1, sum);   //tail Recursion
// }
 


// void sayDigit(int n){
//    if(n==0){
//       return;
//    }
//     sayDigit(n/10);

//     int rem= n%10;
//     string arr[10]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
//     cout<<arr[rem]<<" ";
    
// }



//// stari prob
// int prob(int destn, int position){
//     if(position == destn){
//       return 1;
//     }
//     else if(position > destn){
//       return 0;
//     }
//     int result= prob(destn, position+1) + prob(destn, position+2);
//     return result;
// } 



   // Euclid Algo
   // int a= max(42,24), b= min(42,24),res ;
   // for(int i=0; res!=0; i++ ){
   //    res= a-b;
   //    a=res;
   //    a= max(a,b);
   //    b= min(b,res);
   // }
   // cout<<a;

   // for(int i=0; res!=0; i++){   
   //    res= a%b;
   //    a= b;
   //    b= res;
   // }
   // cout<<a;



// //   inculsion-Exculsion Principle
//    int a=40;
//    int x=a/5, y=a/7, z=a/(35);
//    cout<<(x+y-z);



// // seive of Eratosthenes
//   int n=50;
//   int prime[n+1] = {0};
//    for(int i=2; (i*i)<=n; i++){
//       for(int j=i*i; j<=n; j+=i){
//           prime[j]= 1;
//       }
//    }
//    for(int i=2; i<n+1; i++){
//       if(prime[i] != 1){
//          cout<<i<<" ";
//       }
//    }



   // // sub set of set.
   // int x[3] = {3,2,1};
   
   // for(int i=0; i<(1 << 3); i++){
   //    for(int j=0; j<3; j++){
   //       if((i & (1<<j)) != 0){
   //          cout<<x[j]<<" ";
   //       }
   //    }
   //    cout<<endl;
   // }




//   string b1= "11", b2="1", result;
//   int diff= max(b1.size(), b2.size()) - min(b1.size(), b2.size());
//   string temp(diff, '0');
//   if(b1.size() > b2.size()){
//      b2.insert(0, temp);
//   }
//   else{
//     b1.insert(0, temp);
//   }

//   for(int i=b1.size()-1; i>=0; i--){

//      if(b1[i] + b2[i] == ('1'+'0')){       
//         result[i]= '1';
//      }
//      else if(b1[i] + b2[i] == ('1'+'1')){
//         if(i == 0){
//         result.insert(0, "10");}
      
//       result[i]= '0';
//       b1[i-1]+= '1';
//      }
//      else if(b1[i] + b2[i] == ('1'+'1'+'1')){
//         if(i == 0){
//         result.insert(0, "11");}
        
//       result[i]= '1';
//       b1[i-1]+= '1'; 
//      }
//   } 
//   cout<<result;




//// 1 unique no in Thrice of all.

   // int arr[10] ={1,2,3,1,2,3,1,2,3,5};
   // int temp =0, index[10];
   // int mx= -1, p=0;
   // for(int i=0; i<10; i++)
   //    mx= max(mx,arr[i]);
   
   // for(int i=mx; i!=0; (i >>= 1)){ 
   //    p++;
   // }
   // p--;
   // for(int i=0; i<10; i++)
   //    index[i] = 0;
  
   // for(int i=0; i<10; i++){
   //    for(int j=0; j<=p; j++){
   //       if((arr[i] | (1<<j)) == arr[i]){
   //        index[j]++;
   //       }
   //    }  
   // }
   // int ans=1;
   // for(int i=0; i<=p; i++){
   //    index[i] = index[i]%3;
   //    if(index[i]%3 != 0){
   //       ans = ans | (1<<i);
   //    }
   //    }
   //  cout<<ans;  

   //// for(int i=0; i<10; i++){
   ////    p= p^arr[i];
   // //}




   //// 2 unique no in pair of all.
//    int unique[8] = {2,8,6,54,8,5,6,2};
//    int mutual= 0;
//    int ans1 = 0, ans2 = 0;
//    for(int i=0; i<8; i++){
//       mutual = mutual^unique[i];
//    }
//   int i, check, p=0;
//    for(i=mutual; check!=1; i++){
//       check =(i >>= 1) & 1;
//       p++;
//    }
   
//    for(int j=0; j<8; j++){
//       if(((1<<p) & unique[j]) !=0 ){
//         ans1 = ans1^ unique[j];
//       }
//    }
//    ans2 = ans1^mutual;
//  cout<<ans1<<" "<<ans2;



   // // decimal to binary by bit manipulation
   // int x= 85, ans, i, binarr[10];

   // for(i=0; x; i++){
   //    ans= x & 1;
   //    if(ans == 1){
   //      binarr[i]= 1;
   //    }
   //    else{
   //      binarr[i]= 0;
   //    }
   //    x >>= 1;  // x will continiously right shifted by 1 at end it return 0.
   // }
   // for(int j=i-1; j>=0; j--){
   //    cout<<binarr[j];
   // }



   //  int x=19, ans;
   //  int i = 1;

   //  for(i; x; i++){
   //      x = x & (x-1);
         
   //  }

   // cout<<i-1;
   // if(((x & (x-1)) == 0) && x) {
   //    cout<<"Power of 2";
      
   // }




   // if((x & (1 << i)) != 0){  //Get Bit --->it tell which bit i.e 0 or 1 present at give position.
   //    cout<<1;
   // } 
   // // else
   // int ans = x | (1<<i);       // if 1 is alredy present at give position then interger will not change 
   // if((ans & (1<<i)) != 0){     //check if 1 is occupied or not 
   //    cout<<ans<<" "<<1; 
   // }
//  int ans = ( 5 & (~(1<<i)) );
//  ans = (5 | (1<<i));
//   cout<<( ans ) ;


   //  string s1, s2;
   //  s1 = "aasdasdssasddfs";
   //  int mx=-1, count = 1;
   //  char value;
   //  int allfreq[26];
   //  for(int i=0; i<26; i++)
   //     allfreq[i]=0;
    
   //  for(int i=0; s1[i] != '\0'; i++){
   //     allfreq[s1[i] - 'a']++;
   //  }
   //  for(int i=0; i<26; i++){
   //     if(allfreq[i]>mx){
   //       mx=allfreq[i];
   //       value = i+'a';
   //     }
   //  }
   //  cout<<mx<<" "<<value;
//     sort(s1.begin(), s1.end());
//     cout<<s1<<endl;
//    for(int i=0; s1[i] != '\0'; i++){
//       if(s1[i] == s1[i+1]){
//          count++;
//          mx = max(mx, count);
//          if(count == mx){
//             value = s1[i];
//          }
//       }
//       else{
//          count = 1;
//       }

//    }
// cout<<"maximum frequency is "<<mx<<" of "<<value;



// string s1, s2;
   //  s1 = "099";
   //  int stno = 0;
   // for(int i=1; i<s1.size(); i++){
   //    for(int j=0; j<s1.size()-i; j++){
        
   //       if(s1[j] < s1[j+1]){
   //          int t=s1[j];
   //          s1[j]=s1[j+1];
   //          s1[j+1]=t;
   //       }
   //    }
   // }
      // sort(s1.begin(), s1.end(), greater<int>());     //greater<int>() is used to sort in decending order
   // stno = stoi(s1);
   //  for(int i=0; s1[i] != '\0'; i++){
   //      stno*=10;
   //     stno += (s1[i] - '0');
      
   //  }
//   cout<<stno;


  //  string s1, s2;
   //  getline(cin, s1);
   //  char alphacase ;
   //  cout<<"Enter u change sentence in upper case or l to lowercase : ";
   //  cin>>alphacase;

   //  for(int i=0; s1[i] != '\0'; i++){             //difference between uppercase and lowercase is 32.
   //   if(alphacase == 'u'){
   //      if(s1[i] >='a' && s1[i]<='z'){    
   //       s1[i]-=32;                                   //subtract 32 from lower case to change it into uppercase
   //       }                           
   //       else{
   //          continue;          
   //       }
   //   } 
   //   else if(alphacase == 'l'){
   //        if (s1[i] >='A' && s1[i]<='Z'){
   //          s1[i]+=32;                            //adding 32 from upper case to change it into lower case
   //        }
   //         else{                                   //skip if it is another character.
   //             continue;
   //         }
   //       }
   //  }
   //  cout<<s1;



   // // largest word in sentence
   // int n;
   // cin>>n;
   // cin.ignore();         //after taking input of n it clear buffer to take input of arr 
   //                      //because sometime compiler does not read input of char arr after taking input of n
   // char arr[n];
   // cin.getline(arr,n);
   // cin.ignore();           

   // bool flag=true;
   // int start=0, ms, end, me, c=0,maxcount=INT8_MIN;

   // for(int i=0; i<n; i++){
   //      if(arr[i] == ' '){
   //         start = i+1;
   //         c=0;
   //      }
   //       else if(arr[i+1] == ' ' ){
   //             c++;
   //             end = i;
   //             maxcount = max(maxcount, c);
   //             if(maxcount == c){
   //                ms = start;
   //                me = end+1;
   //               } 
   //            }
   //      else{c++;}
   // }   
   // cout<<"\nlargest word is: ";
   //  for(int i=ms; i<me; i++){
   //     cout<<arr[i];
   //  }



// // matrix search
//    int key, n, m; 
//    cout<<"Enter size of 2D Array: ";
//    cin>>n>>m;
//    int arr[n][m];
//    for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//          cin>>arr[i][j];
//       }  
//    }
//    cout<<"Enter element to check: ";
//    cin>>key;
//    bool found = false;
//    int i=0, j=m-1;
  
//    for(; i<n && j>=0 ; ) {
//       if(arr[i][j] > key){
//          j--;
//       }
//       else if(arr[i][j] < key){
//          i++;
//       }
//       else if(arr[i][j] == key){
//          found = true;
//          break;
//       }
//    }
//    if(found == true){
//       cout<<"Element present";
//    }
//    else{
//       cout<<"Element not present";
//    }
//  for(int i=0; i<n; i++){
//      for(int j=0; j<m; j++){
//         cout<<arr[i][j]<<" ";
//         }  
//        cout<<endl;
//        } 




//  transpose of matrix
//    int key, n, m; 
//    cout<<"Enter size of 2D Array: ";
//    cin>>n>>m;
   
//    int arr[n][m];
//    for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//            cin>>arr[i][j];
//       }  
//    }
//   for(int i=0; i<n; i++){
//    for(int j=i+1; j<n; j++){
//       int trans = arr[i][j];
//       arr[i][j] = arr[j][i];
//       arr[j][i] = trans;
//    }
//   }

//     for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//         cout<<arr[i][j]<<" ";
//         }  
//          cout<<endl;
//        } 



 //  //spiral order matrix
//   int key, n, m; 
//    cout<<"Enter size of 2D Array: ";
//    cin>>n>>m;
   
//    int arr[n][m];
//    for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//            cin>>arr[i][j];
//       }  
//    }
// int rs=0, cs=0, re=n-1, ce=m-1;
//    for(; rs<=re && cs<=ce;){
//    for(int i=cs; i<=ce; i++){
//       cout<<arr[rs][i]<<" ";
//    }
//    rs++;
//    for(int i=rs; i<=re; i++){
//       cout<<arr[i][ce]<<" ";
//    }
//    ce--;
//    for(int i=ce; i>=cs; i--){
//       cout<<arr[re][i]<<" ";
//    }
//    re--;
//    for(int i=re; i>=rs; i--){
//       cout<<arr[i][cs]<<" ";
//    }
//    cs++;
   
//    }  
//    cout<<endl;
//        for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//         cout<<arr[i][j]<<" ";
//         }  
//          cout<<endl;
//        } 



// // pair sum problem
//   int key, n; 
//    cout<<"Enter size of Array: ";
//    cin>>n;
   
//    int arr[n];
//    for(int i=0; i<n; i++){
//       cin>>arr[i];
//    }
//    cout<<"Enter pairsum element: ";
//    cin>>key;
//    for(int i=1; i<n; i++){            //bubble sorting
//       for(int j=0; j<n-i; j++){
//           if(arr[j] > arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//           }
//       }
//    }
//    int start=0, end=n-1;
//    for(int i=0; i<n && start!=end; i++){
//       if(arr[start]+arr[end] > key ){
//         end--;
//       }
//       else if(arr[start]+arr[end] < key){
//          start++;
//       }
//       else{
//         cout<<"sum of "<<arr[start]<<" & "<<arr[end]<<" is "<<key;
//         break;
//       }
//    }

   // int flag=0;
   // for(int i=0; i<n; i++){
   //    for(int j=i+1; j<n; j++){
   //       if(arr[i]+arr[j] > key){
   //          flag = 1;
   //          break;                                                  //break use in nested loop will terminate only inner loop not
   //       }                                                          // parent loop,if we use j=n i.e making condition false it act as                                                
   //       else if(arr[i]+arr[j] == key){                             //  break but it will read all line of inner loop than terminate.
   //          cout<<"sum of "<<arr[i]<<" & "<<arr[j]<<" is "<<key;
   //          flag = 1;
   //          break;
   //       }
   //    }
   //    if(flag==1){break;}
   //    }         




//  //circular subarray.
//   int noncontro = INT8_MIN, sum=0, n, maxcircular, nonwrap=INT8_MIN;
  
//    cout<<"Enter size of Array: ";
//    cin>>n;
//    int start, end, arr[n], kadnesarr[n+1];

//    for(int i=0; i<n; i++){
//       cin>>arr[i];
//    }
//    kadnesarr[0] = 0;

//    for(int i=0; i<n; i++){                      //for nonwraping subarray sum if greater than wraping 
//        kadnesarr[i+1] = kadnesarr[i]+arr[i];
//        if(kadnesarr[i+1] < 0){
//          kadnesarr[i+1] = 0;
//        }
//        nonwrap = max(nonwrap, kadnesarr[i+1]);       //we ge maximum possible sum without wraping. 
//    }

//    for(int i=0; i<n; i++){                     //for wraping subarray sum if greater than nonwraping 
//        sum += arr[i];
//        kadnesarr[i+1] = kadnesarr[i]+(0-arr[i]);
       
//        if(kadnesarr[i+1] < 0){           
//           kadnesarr[i+1] = 0;
//        }
//        noncontro = max(noncontro,kadnesarr[i+1]);
//       }
      
//  maxcircular = sum -(-noncontro);
//  cout<<"Maximum  subarray sum is "<<max(maxcircular, nonwrap);;




//    // kadane's algo
//   int s=-1,sum=0,n;
//    cout<<"Enter size of Array: ";
//    cin>>n;
//    int start,end;
//    int arr[n], kadnesarr[n];
//    for(int i=0; i<n; i++){
//       cin>>arr[i];
//    }
//    kadnesarr[0] = 0;
//    for(int i=0; i<n; i++){
//        kadnesarr[i+1] = kadnesarr[i]+arr[i];
//        if(kadnesarr[i+1] < 0){           //if sum of element is neg than it will update as 0 it means max subarray start from i+1 index.
//           kadnesarr[i+1] = 0;
//        }
//        if(kadnesarr[i+1] == 0){            
//          start = i+1;
//        }
//        s = max(s,kadnesarr[i+1]);
//        if(s == kadnesarr[i+1]){
//          end = i;              //max subarray sum store at i+1 in kadens array but for arr it is i.
//        }
//    }   
//  cout<<"Maximum subarray sum start from "<<start<< " to " <<end<<" is "<<s;;

 //    // maximum subarray sum
//    //  cumilative sum approch
//   int s=-1,sum=0,n;
//    cout<<"Enter size of Array: ";
//    cin>>n;
//    int start,end;
//    int arr[n],previousum[n];
//    for(int i=0; i<n; i++){
//       cin>>arr[i];
//    }
   
//    previousum[0]=arr[0];                        
//    for(int i=1; i<n; i++){              //storing all sum of subarray start from oth index.
//        previousum[i] =  previousum[i-1]+arr[i];
//    } 
//    for(int i=1; i<n; i++){              // i index is a last index of subarray.
//       for(int j=0; j<i; j++){           // j change starting index of subarray of last index i.
//          sum= previousum[i]-previousum[j];   //subtracting each element from all previous one to get sum of all posible subarray.
//          s=max(s,sum);                       //geting maximum subarray from all.
//          if(sum == s){
//             start= j+1;                 
//             end = i;
//          }
//        }
   // }
 // cout<<"Maximum subarray sum start from "<<start<< " to " <<end<<" is "<<s;;

//   int s=-1,sum=0,n;
//    cout<<"Enter size of Array: ";
//    cin>>n;
//    int start,end;
//    int arr[n];
//    for(int i=0; i<n; i++){
//       cin>>arr[i];
//    }

//    for(int i=0; i<n; i++){
//       for(int j=i; j<n; j++){

//          sum+=arr[j];
//          s= max(sum,s);
//          if(s == sum){
//             start = i;
//             end = j;
//          }
//       }
//       sum=0;
//    }
//    cout<<"Maximum subarray sum start from index "<<start<<" to "<<end;
 



//   int s,sum=0,n;
//    cout<<"Enter size of Array: ";
//    cin>>n;

//    int arr[n];
//    for(int i=0; i<n; i++){
//       cin>>arr[i];
//    }

//    for(int i=0, j=n-1; i<n/2; i++, j--){

//       if(n%2 != 0 && arr[n/2] > 0){
//          sum += arr[n/2];
//       }
//       else if(arr[i] < 0){
//          sum += arr[j];
//       }
//       else if(arr[j] < 0){
//          sum += arr[i];
//       } 
//       else{
//          sum += (arr[i]+arr[j]);
//       }
      
// }
//    cout<<"Maximum subsequent sum is "<<sum;



// // Smallest Positive no missing from array.
//    int s,sum=0,n;
//    cout<<"Enter size of Array: ";
//    cin>>n;

//    int arr[n];
//    for(int i=0; i<n; i++){
//       cin>>arr[i];
//    }
//    bool present[10000];
//    for(int i=0; i<10e3; i++){
//       present[i] = false;
//    }
   
//    for(int i=0; i<n; i++){
//       if(arr[i] < 0){
//          continue;
//       }
//       else{
//          present[arr[i]] = true;
//       }
//    }
//    for(int i=0; i<10e3; i++){
//       if(present[i] != true){
//          cout<<"Smallest Positive no missing from array is "<<i;
//          break;
//       }
//    }


   // //subarray sum which is equal to s.   
   // int s,sum=0,n;
   // cout<<"Enter size of Array: ";
   // cin>>n;

   // int arr[n];
   // for(int i=0; i<n; i++){
   //    cin>>arr[i];
   // }
   // cout<<"Enter Sum of any subarray:  ";
   // cin>>s;

   // for(int i=0; i<n; i++){
   //    for(int j=i; j<n; j++){
         
   //       sum+=arr[j];
   //       if(sum == s){
   //          cout<<"sum of subarray equal to "<<sum<<" start from "<<i<<" to "<<j;
   //          break;
   //       }
   //       else if(sum > s){
   //          j = n;
   //       }
   //    }
   //             sum=0;
   // } 


   
   // //  Repeting Element with smallest index.
   //  int n;
   //  cout<<"Enter Size of Array: ";
   //  cin>>n;
   //  int arr[n], indexarr[10000];

   //  for(int i=0; i<10e3; i++){
   //     indexarr[i] = -1;
   //  }
    
   //  cout<<"Enter Element of Array:\n";
   //  for(int i=0; i<n; i++){
   //    cin>>arr[i];
   //  }

   //  int min_index = 10e3;
   //  for(int i=0; i<n; i++){
   //     if(indexarr[arr[i]] != -1){

   //       min_index = min(min_index, indexarr[arr[i]]);
   //     }
   //      indexarr[arr[i]] = i;
   //  }
   //  cout<<"Repeting Element in Array with Smallest Index is "<<arr[min_index]<<" at index "<<min_index;    



   // // record breaker
   // int n; 
   // cout<<"Enter size of array: ";
   // cin>>n;

   //  int arr[n+1];
   //  arr[n] = -1;      // here n is index if total element, i.e n is 5 than at 5th index i.e 6th element is -1.
  
   // for(int i=0; i<n; i++){
   //    cin>>arr[i];
   // }

   //  int pmax =-1;
   //  cout<<"Recording Breaking day are ";
   //   for(int i=0; i<n; i++){

   //       // cout<<pmax<<" "<<i<<"  ";
   //      if(arr[i] > pmax && arr[i] > arr[i+1]){   // if current element is larger than pmax and following day.
   //        cout<<i+1<<" ";
   //      }
   //       pmax = max(pmax, arr[i]);        // pmax have largest value among all previous value except current element.
   //   } 



   // // Maximum Arithmetic subarray
   // int arr[10] = {5, 4, 2, 2, 1 ,2 ,3 ,4 ,8, 6};
    
   //  int count=1, s=0, e, me, ms, pd, maxpd=1;
   //  pd = arr[1] - arr[0];

   // for(int i=0; i<9; i++){

   //    if(arr[i+1]-arr[i] == pd){
   //       count++;
   //       e=i+1;
   //       maxpd = max(maxpd, count);
   //       if(maxpd == count){
   //          ms=s;
   //          me=e;
   //       }
   //    }
   //    else{
   //       pd=arr[i+1]-arr[i];
   //       s=i;
   //       e=i+1;
   //       count=1;

   //    }
   // }
   
   // cout<<"Maximum Arithmetic Subarray is: "<<endl; 
   // for(int i=ms; i<=me; i++){
   //    cout<<arr[i]<<" ";
   // }




//    // insertion sorting
//  int n;
//    cout<<"Enter Size of Array: ";
//    cin>>n;
    
//     int arr[n];
//     cout<<"Enter Element of Array to sort it: ";
  
//     for(int i=0; i<n; i++){
//       cin>>arr[i];
//     }  
//     int count = 0;
//     for(int i=0; i<n; i++){
//      for(int j=i+1, m=0; j>0,m<=i; j--,m++){
        
//         if(arr[i-m] > arr[j]){
//            int swap = arr[i-m];
//            arr[i-m] = arr[j];
//            arr[j] = swap;
//           }
//           count++;
//        }
//     }
//    // int count =0;
// //    for(int i=1; i<n; i++){
// //       int c=arr[i];
// //       int j=i-1;
// //       while(arr[j]>c && j>=0){
// //           arr[j+1]=arr[j];
// //           j--;
// //           count++;
// //       }
// //       arr[j+1]=c;
// //    }
//   cout<<count<<endl;
//   cout<<"Sorted array is : ";

//     for(int i=0; i<n; i++){
//        cout<<arr[i]<<" ";
//     }



   // // Selection sorting
   // int n;
   // cout<<"Enter Size of Array: ";
   // cin>>n;
    
   //  int arr[n];
   //  cout<<"Enter Element of Array to sort it: ";
  
   //  for(int i=0; i<n; i++){
   //    cin>>arr[i];
   //  }  

   //  for(int i=0; i<n-1; i++){
   //     for(int j=i+1; j<n; j++){

   //        if(arr[i] > arr[j]){
   //           int swap=arr[i];
   //           arr[i] = arr[j];
   //           arr[j] = swap;
   //        }
   //     }
   //  }

   // cout<<"Sorted array is : ";
   //  for(int i=0; i<n; i++){
   //     cout<<arr[i]<<" ";
   //  }



   // // Bubble Sorting
   // int n;
   // cout<<"Enter Size of Array: ";
   // cin>>n;
    
   //  int arr[n];
   //  cout<<"Enter Element of Array to sort it: ";
  
   //  for(int i=0; i<n; i++){
   //    cin>>arr[i];
   //  }  

   //  for(int i=1; i<n; i++){
   //     for(int j=0; j<n-i; j++){
          
   //        if(arr[j] > arr[j+1]){
   //          int temp = arr[j];
   //          arr[j]  = arr[j+1];
   //          arr[j+1] = temp;
   //        }
   //     }
   //  }  
   
   // cout<<"Sorted array is : ";
   //  for(int i=0; i<n; i++){
   //     cout<<arr[i]<<" ";
   //  }



// //binary search
//   int n;
//   cout<<"Enter size of Array: ";
//   cin>>n;

//   int sortedarr[n];
//   cout<<"enter element in Ascending Order: ";
//   for(int i=0; i<n; i++){
//     cin>>sortedarr[i];
//   }

//   int key, flag=0;
//   cout<<"Which Element You Want to find: ";
//   cin>>key;
 
//   int start=0, end=n-1;

//   for(int i=start; i<=end; i=(start+end)/2){
    
//       if(key>sortedarr[n-1]){                    // if key is greater than last element it will become infinite loop.
//          break;
//       }

//      if(sortedarr[i]==key){
//        cout<<key<<" is present at "<<i<<" Index position";
//        flag=1;
//        break;
//      }
//      else if(sortedarr[i] < key){          
//         start=i+1;
//      }
//      else if(sortedarr[i] > key){
//         end=i-1;
//      }

//   }

//   if(flag==0){
//     cout<<"Element is not present";
//   }



//    // Max & Min of Array
//    int n;
//    cout<<"Enter size of Array\n";
//    cin>>n;

//    int arr[n];
//    for(int i=0; i<n; i++){
//       cin>>arr[i];
//    }
   
//    int maximum=INT8_MIN, minimum=INT8_MAX, m=0;
//    int j=n-1;
   
//    for(int i=0; i<=j; i++,j--){               // i lessthan equal to j for odd size of array.

//       if(arr[i]<arr[j]){
//          m=arr[j];
//          n=arr[i];
//          maximum = max(maximum,m);
//          minimum=min(n,minimum);
//       }
//       else{
//          m=arr[i];
//          n=arr[j];
//          maximum = max(maximum,m);
//          minimum=min(n,minimum);
//       }

//    }
//   cout<<"Maximum Element of Array is "<<maximum<<endl;
//   cout<<"Minimum Element of Array is "<<minimum;



// int hexadecimaltodecimal(string hexa){

//     int ans=0,length=hexa.length()-1;
//     int base=1;

//     for(int i=length; i>=0; i--){    //here loop run form Right to Left end of hexadecimal because base power increse from right to left. 
      
//        if(hexa[i]>='0' && hexa[i]<='9'){
//          ans += (hexa[i]-'0')*base;      // '0' --> '9' = 48 ---> 57 ,subtraction give integer value to add in ans.
//        }
//        else{
//          ans += (10 + hexa[i]-'A')*base;     
//        }
//        base *= 16;

//     }
//     return ans;
// }


// // Record Breaker
// int arr[7]={2,6,5,7,5,10,19};
// int premax=-1;

// for(int i=0; i<7; i++){
//    if(arr[i]>premax && (arr[i]>arr[i+1] || arr[i]==arr[7-1]))  //for last element aditional condition
//       cout<<arr[i]<<" ";
//      premax=max(premax,arr[i]);                                //store max value form previous all element
// }



// Longest Arithmatic Sub array 
// int n;  
// cout<<"Enter size of array : ";
// cin>>n;
// int arr[n];

// for(int j=0; j<n; j++){
//    cin>>arr[j];
// }

// int a=2, max_a=INT8_MIN, s=0, e, diff, max_diff=INT8_MIN, maxs, maxe;
// int pd=arr[1]-arr[0];

// for(int i=1; i<n-1; i++){
//    if(arr[i+1]-arr[i]==pd){
//       a++;
//       max_a=max(a,max_a);
//       e=i+1;
//     }
//    else{
//        pd=arr[i+1]-arr[i];
//        a=2;
//        s=i;
//        e=i+1;
//     }
//     diff=e-s;
//     max_diff=max(diff,max_diff);

//     if(max_diff==diff){
//        maxs=s;
//        maxe=e;
//     }

// }
// cout<<"Longest Arithmatic Sub array is : ";
// for(int k=maxs; k<=maxe; k++){
//    cout<<arr[k]<<" ";
// }




// // palindromic
// for(int i=1; i<=n; i++){
//    for(int j=1; j<=n-i; j++){
//       cout<<"  ";
//    }
//    for(int k=i; k>=1; k--){
//       cout<<k<<" ";
//    }
//    for(int l=2; l<=i; l++){
//       cout<<l<<" ";
//    }
//    cout<<endl;
// }

// int n=9;
// for(int i=1; i<=n; i++){
//    for(int j=1; j<=n+i-1; j++){
      
//       if(j>=n-i+1 && (j<=n)){
//          cout<<(n-j+1)<<" ";
//       }
//       else if(j<i+n && j>n){
//          cout<<(j-n+1)<<" ";
//       }
//       else{
//          cout<<"  ";
//       }
//    }

//    cout<<endl;
// }



// // no pyramid
// for(int i=1; i<=n; i++){
//    for(int j=1; j<=n-i; j++){
//       cout<<" ";
//    }
//    for(int k=1; k<=i; k++){
//       cout<<k<<" ";
//    }
//    cout<<endl;
// }



// // Rhombus
// int n;cin>>n;
// int n1=n,n2=2*n; 

// for(int i=1; i<=n; i++){
//    for(int j=1; j<=2*n; j++){
//    // if((i+j)>n && (i+j)<=2*n){
//    //    cout<<"* ";
//    // }
//    // else{
//    //    cout<<"  ";
//    // }

//    //   if(j>n1 && j<=n2){
//    //      cout<<"* ";
//    //   }
//    //   else{
//    //       cout<<"  ";
//    //    }

//    }
//    n1--;n2--;
//    cout<<endl;

// }

// int n=5;
// for(int i=1; i<=n; i++){
//    for(int j=1; j<2*n; j++){

//       if((i+j)>n && (i+j)<=2*n){
//          cout<<"* ";
//       }
//       else{
//          cout<<"  ";
//       }

//    }
// cout<<endl;
// }





// int n; cin>>n;
// // O-1 pattern
// for(int i=1; i<=n; i++){
//    for(int j=1; j<=i; j++){
//       if((i-j)%2==0){
//          cout<<1<<" ";
//       }
//       else{
//          cout<<0<<" ";
//       }
//    }
//    cout<<endl;
// }


// // INVERTED NO PATTERN
// int n=15;
// for(int i=n; i>=1; i--){ 
//    for(int j=1; j<=i; j++){
        
//       if(j>9){
//          cout<<j<<" ";
//          continue;
//       }
//       cout<<j<<"  ";

//    }
// cout<<endl;

// }





// // Butterfly
// int n; cin>>n;

// for(int i=1; i<=n; i++){
//    for(int j=1; j<=n; j++){
//       if(i<=n/2){
//            if(j<=i){
//             cout<<"* ";
//            }
//            else if(j>=n-i+1){
//             cout<<"* ";
//            }
//            else{
//              cout<<"  ";
//            }
//       }
//       else{
//          if(j<=n-i+1){
//             cout<<"* ";
//          }
//          else if(j>=i){
//             cout<<"* ";
//          }
//          else{
//             cout<<"  "; 
//          }
//       }
  
//    }
//     cout<<endl;
// }






// floyds triangle
// int n,num=1;
// cin>>n;

// for(int i=1; i<=n; i++){
//    for(int j=1; j<=i; j++){
//       if(num>10){
//          cout<<num<<" ";
//          num++;
//       }
//       else{
//          cout<<num<<"  ";
//          num++;
//       }
//    }
//    cout<<endl;
// }



// no half pyramid
// int n;cin>>n;

// for(int i=1; i<=n; i++){
//    for(int j=1; j<=i; j++){
 
//       if(n>9){
//          if(i<=9){
//             cout<<i<<"  ";
//             }
//          else{
//             cout<<i<<" "; 
//          }
//       }
      
//       else{
//          cout<<i<<"  ";
//       }
//    }  
//    cout<<endl;
// }



// int n;
// cin>>n;
// // first half pyramid
// for(int i=n; i>0; i--){
//    for(int j=1; j<=n; j++){
      
//       if(j>=i){
//          cout<<"* ";
//       }
//       else{
//          cout<<"  ";
//       }
//    }
//    cout<<endl;
// }




// // inverted half pyramid
// int n;
// cin>>n;

// for(int i=n; i!=0; i--){
//    for(int j=1; j<=i; j++){
//       cout<<"* ";

//    }
//    cout<<endl;
// }



// int a,b;
// char op;
// cout<<"Enter 2 no\n";
// cin>>a>>b;
// cout<<"Enter operator\n";
// cin>>op;

// switch(op){
//       case '+': cout<<"sum is "<<a+b;
//       break;
//       case '-': cout<<"subtraction is "<<a-b;
//       break;
//       case '*': cout<<"multiplication is "<<a*b;
//       break;
//       case '/': cout<<"Division is "<<a/b;
// }




// HOLLOW RECTANGLE
// int r,c;
// cout<<"Enter Row and Column ";
 
// cin>>r>>c;
// for(int i=0; i<r; i++){
//    for(int j=0; j<c; j++){
//       if(i==0 || j==0 || i==r-1 || j==c-1){
//          cout<<"* ";}
//       else{
//           cout<<"  ";
//       }   
//    }
//    cout<<endl;
// }


// // QUADRIC EQUATION 
// float a,b,c;
// cin>>a>>b>>c;

// float D= (b*b)-(4*a*c);

// if(D<0){
//    D=0-D;
//    cout<<(-b/(2*a))<<" +  "<<pow(D,0.5)/(2*a)<<'i'<<endl;
//    cout<<(-b/(2*a))<<" -  "<<pow(D,0.5)/(2*a)<<'i'<<endl;
// }
// else{
//     float r1= (-b+pow(D,0.5))/2*a;
//     float r2= (-b-pow(D,0.5))/2*a;
//     cout<<r1<<endl;
//     cout<<r2;
// }


// for(i=2; i<n; i++){
//    for(j=2; j<i; j++){
//       if(i%j==0){
//          break;  // we will exit from 2nd loop
//       }
//    }

// if(j==i){
//    cout<<i<<"\n";
// }

// }


// int i;
// for(i=2; i<n; i++){
//    if(n%i==0){
//       cout<<"Not Prime";
//       break;
//    }
// } 
// //we have use hidden feature of loop.(i.e i increse by one at end of loop)                 
//  if(i==n){
//     cout<<"Prime";
//  }
    
// for(int i=2; i<n; i++){
//    if(n%i==0){
//       cout<<"Not Prime";
//       return 0;
//    }
// }

// cout<<"Prime";


// int n;
// cin>>n;
// bool flag=false;

// for(int i=2; i<pow(n,0.5); i++){
//    if(n%i==0){
//       cout<<"Not prime\n";
//       flag=false;
//       break;
//    }
//    else{
//        flag=true;
//    }
// }
// if(flag==true){
//    cout<<"prime no";
// }



// int a,b,c;
// cin>>a>>b>>c;

// if(a>b){
//    if(a>c){
//       cout<<a<<endl;
//    }
//    else{
//       cout<<c;
//    }
// }
// else{
//    if(b>c){
//       cout<<b;
//    }
//    else{
//       cout<<c;
//    }
// }
   



// int linearsearch(int arr[],int n,int key){
    
// for(int i=0; i<n; i++){
//     if(arr[i]==key){
//         // cout<<"key is present"<<endl;
//         return i;
//     }
// }
// return 0;
// }


// int main(){
// int n;
// cin>>n;
// int arr[n];

// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// int key;
// cin>>key;

// cout<<linearsearch(arr,n,key);







// int m=3,n1=3,n2=3,b=3;
// if(n1!=n2){
//     cout<<"can't multiply matrix";
//     return 0;
// }
// int arr1[m][n1]={{1,2,3}, {4,5,6}, {7,8,9}};
// int arr2[n2][b]={{4,2,1}, {1,4,6}, {8,5,9}};
// int ans[m][b];
// //null matrix
// for(int n=0; n<m; n++){
//     for(int m=0; m<b; m++)
//       ans[m][b]=0;  
// }

// //matrix multiplication
// for(int i=0; i<m; i++){              //after ending 1st  loop we get entire matrix
//     for(int j=0; j<b;j++){          //after ending 2nd loop we get 1st row
//         for(int k=0; k<n2; k++){     //after ending of 3rd loop we get our first element
//           ans[i][j]+= arr1[i][k]*arr2[k][j];
//         }
//     }
// }


// // Output
// for(int i=0;i<m; i++){
//     for(int j=0; j<b; j++){
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
// }





//Transpose of matrix;
// int m=3,n=3;
// int arr[m][n]={{1,2,3}, {4,5,6}, {7,8,9}};

// for(int i=0;i<m; i++){
//     for(int j=i; j<n; j++){
//         int temp=arr[i][j];
//         arr[i][j]=arr[j][i];
//         arr[j][i]=temp;
//     }
// }
// Output

// for(int i=0;i<m; i++){
//     for(int j=0; j<n; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }




//    int n=4,m=4;
//    int rs=0,re=m-1,cs=0,ce=n-1;
//    // cout<<"enter element";
//    // cin>>m;
// int a1[m][n]={{1,2,3,5},
//               {6,2,4,6},
//               {1,3,4,5},
//               {3,4,2,4}};

// for(int x=0; cs<=ce && rs<=re; x++){

// for(int i=cs; i<=ce; i++){
//     cout<<a1[rs][i];
// }
// rs++;
// for(int j=rs; j<=re; j++){
//    cout<<a1[j][ce];
// }
// ce--;
// for(int k=ce; k>=cs; k--){
//     cout<<a1[re][k];
// }
// re--;
// for(int l=re; l>=rs; l--){
//     cout<<a1[l][cs];
// }
// cs++;

// }



// bool flag=false;
// for(int i=0; i<3; i++){
//    for(int j=0; j<3; j++){
//    if(a1[i][j]==m){
//       cout<<i<<" "<<j<<endl;
//    flag=true;
//    // break; it will only break from 2nd loop
//    return 0;
//       }
// }
// }
// if(flag=false){
//    cout<<"element not found";
// }


//   int m,n;
//    cin>>m>>n;
// int a1[m][n];
// for(int i=0; i<m; i++){
//    for(int j=0; j<n; j++)
//    cin>>a1[i][j];
// }

// for(int i=0; i<m; i++){
//    for(int j=0; j<n; j++)
//    cout<<a1[i][j]<<" ";
// cout<<endl;
// } 



//    int firstarr[10]={12,32,42,3,53,54,32,23,342,23};
//    cout<<"enter input\n";
//    int a=INT8_MIN;
//    for(int i=0; i<10; i++){
//       if(firstarr[i]>a){
//          a=firstarr[i];
//       }      
      
//    }      
// cout<<a;      
      
      
      
//  string octal[10];      
//  int j,sum=0;      
//  int base=1;      
// for(int i=0; i!='\0'; i++){      
//   int  rem = octal[i];      
//    sum+=base*octal[i];      
      
//    base*=16;      
// }      
      
//   for(int i=a,j=0; i>0; i/=16,j++){      
//     octal[j]=i%16;      
    
//     if(octal[j]>9){
//       switch (octal[j])
//       { case octal[j]=='10' : octal[j]='A';
//          break;
//         case octal[j]=='11' : octal[j]='B';
//          break;
//         case octal[j]=='12': octal[j]='C';
//          break;
//         case octal[j]=='13': octal[j]='D';
//          break;
//         case octal[j]=='14' : octal[j]='E';
//          break;
//         case octal[j]=='15': octal[j]='F';
//          break;

//       }
//     }
   
//  }

// for(int i=j-1; i>=0; i--){
//    cout<<octal[i];
// }

 


//   cout<<"enter decimal: ";
//    int a,b,c; cin>>a;
//  int octal[10];
//  int j,sum=0;

//   for(int i=a,j=0; i>0; i/=8,j++){
//     octal[j]=i%8;
   
//  }

// for(int i=j-1; i>=0; i--){
//    cout<<octal[i];
// }


//   cout<<"enter octal : ";
//    int a,b,c; cin>>a;
//  int octa[10];
//  int j,sum=0;
// int base=1;
// for(int i=a; i>0; i/=10){
//    int rem = i%10;  
//    sum+=base*rem;
//    base*=8;
// }
// cout<<"Decimal="<<sum;


//   cout<<"enter a : ";
//    int a,b,c; cin>>a>>b>>c;
//  if(a*a==(b*b)+(c*c)){
//     cout<<a<<b<<c<<" are phytahgorean treplet";
//  }
//  else if(b*b==(a*a)+(c*c)){
//     cout<<a<<b<<c<<" are phytahgorean treplet";
//  }
//  else if(c*c==(a*a)+(b*b)){
//    cout<<a<<b<<c<<" are phytahgorean treplet";
//  }
//  else{
//    cout<<a<<b<<c<<" are NOT phytahgorean treplet";
//  }
 


// cout<<"enter a : ";
// int a,b; cin>>a;
// for(int i=0; i<a; i++){
//    for(int j=0; j<=i; j++){
//       cout<<BC(i)/(BC(j)*BC(i-j)) <<" ";
//    }
//    cout<<endl;
// }
// return 0;}
// int BC(int n){
//     int fact=1;
//     for(int i=2; i<=n; i++){
//        fact*=i;
//     }
//     return fact;
// }

// int BC(int n){
//    int nfact=1;
//     for(int i=n; i>1; i--){
//        nfact*=i;
//     }
// return nfact;
// }
// int BC(int n,int r){
//    int nfact=1,n_rfact=1;
//     for(int i=n,j=n-r; i>r,j>1; i--,j--){
//        nfact*=i;
//        n_rfact*=j;
//     }
// return nfact/n_rfact;
// }






// int fibn, fib0=0, fib1=1;

// for(int i=1; i<=a; i++){
//     cout<<fib0<<" ";
//  fibn=fib0+fib1;
//        fib0=fib1;
//        fib1=fibn;

// }



// return 0;
// }



   // for(int i=a; i<=b; i++){
          
//       if(Isprime(i)==true){
//          cout<<i<<" ";
//       }
//    }
// return 0;
// }

// bool Isprime(int n){
//     for(int i=2; i<=sqrt(n); i++){
//        if(n%i==0){
//          return false;
//        }
//     }return true;
// }

// void printPrime(int n){
//     bool flag=true;
//      for(int i=2; i<=sqrt(n); i++){
//          if(n%i==0){
//             flag=false;
//             break;
//          }
//      }
//      if(flag==true){
//        cout<<n<<" ";
//      }
// }





// int check=0;
// for(int i=n; i>0; i/=10){
//    int lastDigit=i%10;
//    check+=pow(lastDigit,3);
// }

// if(check==n){
//    cout<<n<<" is ArmStrong Number";
// }else{
//    cout<<n<<" is not ArmStrong Number";
// }

// cout<<"enter n : ";
// int n; cin>>n;
// int reverse=0;
// for(int i=n; i!=0; i/=10){
//    int lastDigit=i%10;
//    reverse=reverse*10+lastDigit;
// }
// cout<<reverse;



// bool value=true;
// for(int i=2; i<=sqrt(n); i++){
//    if(n%i==0){
//       value=false;     
//       cout<<n<<" is not a Prime Number";
//       break;
//    }

// }

//   if(value==true){    
//       cout<<n<<" is a Prime Number";    
//    }



//  // DECIMAL TO  BINARY  
// int n,rem,ld,sum=0;
// int rev[20];

// cout<<"Enter Decimal to get its Binary\t";
// cin>>n;
// int i,j;
//    for(i=n,j=0; i!=0; i/=2,j++){        // this loop store remender in array in opp order
//         rem=i%2;
//         rev[j]=rem;
//    }

//    for(int k=0; k<j/2; k++){            // this loop arrange element in right order(Swap)
//        rev[k]=rev[k]+rev[j-k-1];        // swap without variable
//        rev[j-k-1]=rev[k]-rev[j-k-1];
//        rev[k]=rev[k]-rev[j-k-1];         
//    }
 
//    for(int l=0; l<j; l++){                // it gives output
//        cout<<rev[l];
//     }



// //   BINARY TO DECIMAL
// long long int i,b,ld,n=0,sum=0;
// cout<<"Enter Binary to get Decimal:\t";
// cin>>b; 
//    for(i=b; i!=0; i/=10){
//       ld=i%10;
//       if(ld==0){            // no need to add 0 multiple in sum which is 0
//          n++;
//          continue;           
//       }
//       sum+=(ld*pow(2,n));
//       n++;
//    }
//   cout<<b<<" is Binary of Decimal "<<sum;



// // DECIMAL TO OCTAL
// int d,octal[20];
// cout<<"Enter Decimal To Get Octal:\t";
// cin>>d;
// int i,j;
// for(i=d,j=0; i!=0; i/=8,j++){            // storing rem in array
//     octal[j]=i%8;        
// }
// for(int k=0; k<j/2; k++){                  //reverse of rem as octal without variable
//    octal[k]= octal[k]+octal[j-k-1];
//    octal[j-k-1]= octal[k]-octal[j-k-1];
//    octal[k]= octal[k]-octal[j-k-1]; 
// }
// cout<<"Octal of "<<d<<" is:\t";          //output of octal
// for(int l=0; l<j; l++){
//    cout<<octal[l];
// }



// // OCTAL TO DECIMAL
// int o,ld,decimal=0,n=0;
// cout<<"Enter Octal To get Decimal:\t";
// cin>>o;
// for(int i=o; i!=0; i/=10){
//     ld=i%10;
//     decimal+=ld*pow(8,n);
//     n++;
// }
// cout<<"Decimal of octal "<<o<<" is "<<decimal;
