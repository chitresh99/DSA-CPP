sizeof(arr) returns the total size of the array in bytes. For an array of 5 integers, each 4 bytes, this would be 5 * 4 = 20 bytes.
sizeof(arr[0]) returns the size of one integer element, which is 4 bytes.
The division sizeof(arr) / sizeof(arr[0]) results in 20 / 4 = 5, which is the number of elements in the array.