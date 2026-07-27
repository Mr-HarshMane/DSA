#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[4]={2,7,11,15};
    int st = 0;
    int end = 3;

    int desiredSum = 9;
    int currSum = 0;

    while(st<end){
      currSum = arr[st]+arr[end];
          if(currSum<desiredSum){
            st++;
          }else if(currSum>desiredSum){
            end--;
          }else if(currSum == desiredSum){
              cout<<st<<","<<end;
              st = end + 1;
          }




    }
    return 0;
}
