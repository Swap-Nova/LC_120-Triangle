* For each step, you may move to an adjacent number of the row below.
* More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.

### Approach:
* We can solve this question via recursion. We have to make 2 recursive calls.
* The first call will be for moving downwards and the second call will be adjacent downwards.

<h5> In this the base case would be: </h5>

```cpp
if(row == triangle.size() - 1) return triangle[row][col];
```

### Returning minimum sum:

```cpp
/* case-1: moving down */
int down = triangle[row][col] + solve(triangle, row+1, col);

/* case-2: moving adjacent down */
int adjacent = triangle[row][col] + solve(triangle, row+1, col+1);

return min(down, adjacent);
```
