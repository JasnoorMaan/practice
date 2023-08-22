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



In this example, there are 5 available tickets and 3 customers. The customers' desired maximum prices are 4, 8, and 3. The first customer can buy a ticket at price 3, the second customer can buy a ticket at price 8, and the third customer cannot find a ticket within their desired price.

## Concert Tickets

## Approach

One possible approach to solve this problem is to use a multiset or a priority queue to keep track of available ticket prices. Iterate through the customers' desired prices and for each customer, find the closest ticket price that is less than or equal to their desired price.

## Constraints

- 1 ≤ n, m ≤ 2 * 10^5
- 1 ≤ ticket price, customer's maximum price ≤ 10^9

## Note

This problem is part of the CSES Problem Set and can be found at: [Concert Tickets - CSES Problem Set](https://cses.fi/problemset/task/1091)
