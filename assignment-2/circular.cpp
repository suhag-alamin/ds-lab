#include <bits/stdc++.h>
using namespace std;

  // Print from index 0 to len(cir) - 1


 void printFullLinear(int* cirArry, int len){ //Easy

   // int size = sizeof(cirArry)/sizeof(cirArry[0]);
    cout<<"size "<<len<<"\n";
    for(int i =0 ;i<len;i++){

        cout<<cirArry[i%len]<<" ";
    }


}

  // Print from start index and total size elements

     void printForward(int cirArry[], int start, int len){ //Easy
    for(int i = start ;i<len;i++){

        cout<<cirArry[i%len]<<" ";
    }
      
      }
      



  void printBackward(int cirArry[], int len){ //Easy
    for(int i = len-1 ;i>=0;i--){

      cout<<cirArry[i%len]<<" ";
    }

    }

  // remove all zeros and return a new arry with no zeros

  void linearize(int cirArry[], int len){ //Medium
    int newarr[len];
    int j = 0;
    for(int i =0 ;i<len;i++){

        if(cirArry[i%len]!=0){
            newarr[j]=cirArry[i%len];
            j++;
        }
    }
    for(int i =0 ;i<j;i++){

        cout<<newarr[i]<<" ";
    }

    }

  // Do not change the Start index and return a resized new array
  // initialize new cells with zeros

  void resizeStartUnchanged(int cirArry[],int newcapacity, int len){ //Medium
    int newarr[newcapacity];
    for(int i =0 ;i<newcapacity;i++){

        if(i<len){
            newarr[i]=cirArry[i];
        }
        else{
            newarr[i]=0;
        }
    }
    for(int i =0 ;i<newcapacity;i++){

        cout<<newarr[i]<<" ";
    }

    }

  // This method will shift the values n index left and print the new array
  int shiftLeft(int cirArry[],int n, int len){ //Hard

    int newarr[len];
    for(int i = n, j = 0;i<len+n;i++, j++){

      cout<<cirArry[i%len]<<" ";
      newarr[j]= cirArry[i%len];
    }

}


  // This method will shift the values n index right and print the new array
  void shiftRight(int cirArry[], int n, int len){ //Medium
    int newarr[len];
    for(int i = len-n, j = 0;i<len+n;i++, j++){

      cout<<cirArry[i%len]<<" ";
      newarr[j]= cirArry[i%len];
    }
  }

  // This method will check the given array across the base array and if they are equivalent interms of values //return ; true, or else //return ; false
 void equivalent(int cirArry[], int cir_arr[], int len){ //Medium
    int newarr[len];
    for(int i =0 ;i<len;i++){

        if(cirArry[i%len]!=cir_arr[i%len]){
            cout<<"false";
            return;
        }
    }
    cout<<"true";

    }

  // the method take another circular array and returns a linear array containing the common elements between the two circular arrays.
  void intersection(int cirArry[], int c2[], int len){ //Medium
    int newarr[len];
    int j = 0;
    for(int i =0 ;i<len;i++){

        if(cirArry[i%len]==c2[i%len]){
            newarr[j]=cirArry[i%len];
            j++;
        }
    }
    for(int i =0 ;i<j;i++){

        cout<<newarr[i]<<" ";
    }

    }



int main() {

  int start = 0;
  int len = 9;
  int cirArry[] = {43,5,65,23,0,3,5,9,9};
    printFullLinear(cirArry,len);
    cout<<"\n";
    printBackward(cirArry,len);
    cout<<"\n";
    cout<<"\nshifted array ";
    shiftLeft(cirArry, 3, len);



    return 0;
}
