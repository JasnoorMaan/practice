## Appartments

In this example, there are 4 available apartments and 3 applicants. The size difference limit is 5. The first applicant can be matched with the second apartment, and the second applicant can be matched with the fourth apartment.

## Approach

One possible approach to solve this problem is to sort both the lists of apartment sizes and applicant size ranges. Then, iterate through both lists and use two pointers to find suitable matches within the size difference limit.

## Constraints

- 1 ≤ n, m ≤ 2 * 10^5
- 1 ≤ k ≤ 10^9
- 1 ≤ apartment size, applicant size ≤ 10^9

## Note

This problem is part of the CSES Problem Set and can be found at: [Apartments - CSES Problem Set](https://cses.fi/problemset/task/1084)
