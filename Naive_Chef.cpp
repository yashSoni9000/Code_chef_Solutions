#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

double calculate_probability(int N, int A, int B, vector<int>& faces) {
    double p_A = count(faces.begin(), faces.end(), A) / static_cast<double>(N); // Probability of getting A on first toss
    double p_B = count(faces.begin(), faces.end(), B) / static_cast<double>(N); // Probability of getting B on second toss

    // Probability of winning is product of probabilities of getting A and B
    double p_win = p_A * p_B;

    return p_win;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	     int N, A, B;
        cin >> N >> A >> B;
        vector<int> faces(N);
        for (int i = 0; i < N; i++) {
            cin >> faces[i];
        }

        // Call the function to calculate probability of winning
        double p_win = calculate_probability(N, A, B, faces);

        // Print the result with 10 decimal places
        cout << fixed << setprecision(10) << p_win << endl;
	}
	return 0;
}

// I didnt knew some concept of probability so i took some help and understood this question
/*
 we define a function called calculate_probability that takes in four parameters: N (the number of faces on the die), A (the number 
 Chef needs to get on the first toss), B (the number Chef needs to get on the second toss), and faces (a vector of integers 
 representing the numbers on the faces of the die).

Inside the calculate_probability function, we first calculate the probabilities of getting A and B on the first and second tosses, 
respectively. We use the count function from the algorithm library to count the occurrences of A and B in the vector faces, and 
divide the counts by N to get the probabilities. We store these probabilities in variables p_A and p_B.

Next, we calculate the probability of winning by multiplying p_A and p_B together, and store the result in a variable called p_win.

The calculate_probability function returns the calculated probability of winning.

In the main function, we first read in the number of test cases T from the input.

We then loop T times to process each test case. Inside the loop, we read in the values for N, A, B, and the numbers on the faces of 
the die into the respective variables.

We call the calculate_probability function with the input values of N, A, B, and faces to calculate the probability of winning for the current test case, and store the result in a variable called p_win.

Finally, we output the calculated probability of winning for the current test case with 10 decimal places using fixed and 
setprecision from the iomanip library.

The loop continues for each test case, and the program outputs the probabilities of winning for all test cases as 
per the given constraints.
*/