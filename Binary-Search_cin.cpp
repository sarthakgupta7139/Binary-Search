#include<iostream>
using namespace std;

int binarySEARCH(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
        
    }
    return -1; 
}

int main() {
    
    int arr[100];
    
    int n,key;
    cout<<"Enter size of array: ";
    cin>>n;
    
    cout<<"Enter "<< n << " elements of the array: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter key to search in the array: ";
    cin>>key;

    int index = binarySEARCH(arr, 7, key);
    
    cout << endl;

    if(index==0){
        cout << key <<" is present on " << index <<"th index.";
    }    
    
    else if(index==1){
        cout << key <<" is present on " << index <<"st index.";
    }
    
    else if(index==2){
        cout << key <<" is present on " << index <<"nd index.";
    }
    
    else if(index==3){
        cout << key <<" is present on " << index <<"rd index.";
    }
    
    else if(index>3){
        cout << key <<" is present on " << index <<"th index.";
    }

    else
        cout << "Searched key is not present.";
}