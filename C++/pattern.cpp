//Question to print square pattern
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){//outer loop
//         for(int j=1;j<=n;j++){//inner loop
//             cout<< j <<" ";
//         }  
//         cout<<endl;  
//     }
//     return 0;
// }

//Question to print square pattern
// *  *  *  * 
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *


// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
    
//     cout<<" * ";
//     }
//     cout<<endl;
// }
// return 0;
// } 

//Question to print a  square patter 
// A B C D 
// A B C D 
// A B C D 
// A B C D 

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){//outer loop
//         char ch ='A';
//     for(int j=0; j<n; j++){//inner loop
//         cout <<ch<<" ";
//         ch=ch+1;//char+int
//     }
//     cout <<endl;

//     }
//     return 0;

// }
//Question to print a pattern 
// 123
// 456
// 789

// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     int num=1;
//     for(int i=0;i<n;i++){//outer loop
//         for(int j=0;j<n;j++){//inner loop
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;

// }

//Question to print a triangle pattern
// *  
// *  *
// *  *  *
// *  *  *  * 
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<'*'<<"  ";

//         }
//         cout<<endl;

//     }
//     return 0;
//}
//question to print a triangle pattern 
// 1
// 22
// 333
// 4444
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<(i+1);
//         }
//         cout<<endl;
//     }
// return 0;
 // }
 #include<iostream>
 using namespace std;
 int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
        
        cout<<ch;


        }
        cout<<endl;
          ch++;

    }
    return 0;
 }

    