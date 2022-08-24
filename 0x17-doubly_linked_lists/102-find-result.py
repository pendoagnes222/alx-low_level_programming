#!/usr/bin/python3

# FInd the biggest palindrome made from the product of two 3-digit numbers
biggest_palindrome = 0
for x in range(100, 1000):
	for y in range(100, 1000):
		if str(x * y)[::-1] == str(x * y):
			biggest_palindrome = x * y

print("Biggest palindrome is:", biggest_palindrome)
