/*

                                        Those who can not remember the past 
                                        are condemned to repeat it. 
                                                                       ~DP

*/
 

different way to solve dp problem 1 -> tabulation     -> bottom up 
                                  2 -> memoization    -> top down

when we have overlaping sub-problem then use dp 

steps to solve dp 1 -> recursion 
                  2 -> memoization -> try to go from the required answer to the base case
                  3 -> tabular -> try to go from the base case to the required answer 
                  4 -> tabular with space optimization (the best way to slove the question)



to solve dp problem 1st think that can the problem be solve by recursion (neglict the time)

identify dp problem -> 1 - count total no of ways 
                       2 - min output or max output 
                       3 - try all possible ways , count, bestway -> recursion can be use in this problem

now write recursive code and then convert it to dp by the steps below 
1 -> try to represent the problem in to a index
2 -> do all possible steps on that index according to the problem
3 -> if problem says count all the ways then sum all the staf , if problem says find min then find the min form the dp array