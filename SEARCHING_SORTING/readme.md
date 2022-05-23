Implementing different sorting and searching algorithms.

~ Bubble Sort :- It sorts by repeatedly sorting the adjacent elements if they are in the wrong order.
                 It is snot suitable for large data sets.
                 Worst case occurs when the array is reverse sorted. Time complexity :- O(n^2)
                 Best case occurs when the array is sorted. Time Complexity :- O(n)
                 Total number of swaps or comparison in worst case :- n(n-1)/2
                 Stable sort and is in place.
                 
~ Insertion Sort :- Sorts by splitting the array in sorted and unsorted parts.
                    The elements from the unsorted parts are picked and placed in the correct order in the sorted part.
                    Efficient for small data values.
                    It is adaptive in nature (not good for partially sorted array).
                    Worst case time Complexity :- O(n^2)
                    It is inplace and stable.
                    
~ Selection Sort :- The smallest element is placed in the correct position after every pass
                    Best case time complexity - O(N^2)
                    Worst case time complexity - O(N^2)
                    It is an inplace sorting algorithm and doesnt require extra space. 
                    Auxilliary space requirement is :- O(1)
                    It is not a stable sorting algo but can be improvised and made stable with certain changes.
                    The improvisation simply replaces the swap function and uses the shifting technique like in insertion sort.
