/* 
 * File: MarkSort_Static_Array
 * Author: Jose Morales
 * Purpose: Utilize MarkSort
 * Created on September 12, 2016, 1:04 PM
 */

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random number generator Library
#include <ctime>    //Time Library
using namespace std;

//Global Constants

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void mrkSort(int [],int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int perLine=10;
    const int SIZE=100;
    int array[SIZE];
    
    //Input Data
    fillAry(array,SIZE);
    
    //Display 
    prntAry(array,SIZE,perLine);
    
    //Process Data
    mrkSort(array,SIZE);
    
    //Output Data
    prntAry(array,SIZE,perLine);
    return 0;
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}