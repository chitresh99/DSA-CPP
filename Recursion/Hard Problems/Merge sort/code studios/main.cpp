// void merge(vector < int > & arr,int s,int e){

    
//     int mid = (s+e)/2;

//     //we have to create two arrays
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     //creating two arrays
//     int *first = new int[len1];
//     int *second = new int[len2];
    
//     // int k starts from the starting

//     //for first array
//     int k = s;
    

//     //copying values in array
//     for(int i = 0; i < len1 ; i++){
//      first[i] = arr[k++];
//     }
    

//     //for second array
//     k = mid + 1; //mpving the pointer one ahead of 
//     for(int i = 0; i < len2 ;i++){
//         second[i]= arr[k++];
//     }

//     //merge 2 sorted arrays

//     int index1 = 0;
//     int index2 = 0;
//     k = s; //index of main array

//     while(index1 < len1 && index2 < len2){ // we are adding the while loop to keep everything inside arrays
//           if(first[index1] < second[index2]){
//             arr[k++] = first [index1++];//inserting the first element
//           }
//           else{
//             arr[k++] = second[index2++]; 
//           }
//     }

//     //checking for a different condition

//     while(index1 < len1){
//         arr[k++] = first [index1++];
//     }

//     while ( index2 < len2){
//         arr[k++] = second[index2++];
//     }
// }

// void solve(vector < int > & arr,int s, int e){
    
//     //base case
//     if(s >= e) { //if s and e are on the same element then you have to return
//        return; 
//     }

//     int mid = (s+e)/2;

//     //sorting the left part
//     solve(arr,s,mid);

//     //sorting the right part
//     solve(arr,mid+1,e);

//     //merge
//     merge(arr,s,e);
    

// }

// void mergeSort(vector < int > & arr, int n) {
//     // Write your code here.
//     solve(arr,0,n-1);
// }

//Question link :- https://www.naukri.com/code360/problems/merge-sort_920442?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_14&leftPanelTabValue=SUBMISSION 