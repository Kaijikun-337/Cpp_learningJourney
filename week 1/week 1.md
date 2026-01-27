# This folder for first week's assignments 

## Day 1:
On the first day I distinguished the difference between capacity and size. In Capacity Experiment.cpp you can see the code that detects both capacity and size changes.
* Size: is for the elements that are currently in the vector
* Capacity: is allocation of memory. 

## Day 2:
On the second day I learned about map, but as it turned out under the hood it's just the Red-Black Tree which balances itself and is good in sorting the elements. Though the average time complexity is impressive, it's O(log(n)). While other binary trees are just O(n)
* Map: is Red-Black tree under the hood. Good at sorting

## Day 3:
On the third day I learned about unordered_map, this map's average time complexity is way more better than the regular map's one it's O(1). However, it's not sorting at all.   
* Unordered_Map: is Hash Table under the hood. Good at fast access

## Day 4:
On the fourth day I learned how to iterate through vectors, sets, etc.  
* Iterator: this is used as i variable in regular for loops to go through each element in vector (as it is shown in my example)

## Day 5:
On the fifth day I wrote one interesting code that shows in practice that pointers DO NOT update simultaneously with vector when it resizes.

## Day 6:
On the sixth day I learned what volatile and string_view are. As it turned out, the volatile is sort of a flag that gives the CPU a signal to read from RAM. It is widely used in hardware registers/signals. Meanwhile, string_view is a non-owning reference, meaning that it can point to string just like char* but it (string_view) knows the length of the string and thus making it more flexible.
* String_view: is just a buffed char*, it's so buffed that it can easily handle any contiguous character sequence

## Day 7:
On the last day of the first week, I wrote a code that shows where it safe to use string_view
