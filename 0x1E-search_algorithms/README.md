# 0x1E. C - Search Algorithms

Task on the different types of search algorithms with their time and space complexity. 

## 0. Linear search
 A function that searches for a value in an array of integers using the Linear search algorithm

 ## 1. Binary search
A function that searches for a value in a sorted array of integers using the Binary search algorithm

##  2. Big O #0
the time complexity (worst case) of a linear search algorithm 

## 3. Big O #1
space complexity (worst case) of an iterative linear search algorithm in an array of size n

## 4. Big O #2
the time complexity (worst case) of a binary search in an array of size n

## 5. Big O #3
the space complexity (worst case) of a binary search in an array of size n

## 6. Big O #4
the space complexity of this function / algorithm

```C
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```