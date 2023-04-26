# insertion-sort

Insertion sort is an algorithm used to sort a collection of elements in ascending or descending order. 
The basic idea behind the algorithm is to divide the list into two parts: a sorted part and an unsorted part.

Initially, the sorted part contains only the first element of the list, while the rest of the list is in the unsorted part. 
The algorithm then iterates through each element in the unsorted part, picking one at a time, and inserts it into its correct position in the sorted part.

To do this, the algorithm compares the current element with each element in the sorted part, starting from the rightmost element. 
It continues to move to the left until it finds an element that is smaller (if sorting in ascending order) or larger (if sorting in descending order)
than the current element.

Characteristics of Insertion Sort:
This algorithm is one of the simplest algorithm with simple implementation
Basically, Insertion sort is efficient for small data values
Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.

Insertion Sort Algorithm 
To sort an array of size N in ascending order: 

Iterate from arr[1] to arr[N] over the array. 
Compare the current element (key) to its predecessor. 
If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
