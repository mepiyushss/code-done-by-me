// C++ Code to implement the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the total sum of
// occurrences of all vowels
int vowel_calc(string s)
{
int n = s.length();

// Variable to store the answer
int totalOccurrences = 0;

for (int i = 0; i < n; i++) {

	// Count of total occurrences of
	// current character
	int totalOccurrenceForCharInAllSubstrings
	= (i + 1) * (n - i);

	char ch = s[i];

	// if the current character is a vowel
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O'
		|| ch == 'U'||ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
		|| ch == 'u') {

	// Add the occurrences of current
	// character to the answer
	totalOccurrences
		+= totalOccurrenceForCharInAllSubstrings;
	}
}

// Return the total sum
// of occurrences of vowels
return totalOccurrences;
}

// Driver Code
int main()
{
string s = "ACID";

// Function Call
cout << vowel_calc(s);
}

// This code is contribute by Samim Hossain Mondal.
