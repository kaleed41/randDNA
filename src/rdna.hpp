#include <string>
#include <random>

using namespace std;

/*
	an integer seed to use to seed the random number generator,
	a string containing the letter bases
	an integer indicating the length of the random sequence to be generated.
*/

string randDNA(int seed, string bases, int n){
	mt19937 engine(seed);//engine accepts seed from user
	string dnaStr = "";// returns data

	int min = 0;//minimum number to generate
	int max = bases.length -1;

	uniform_int_distribution<> uniform(min, max);

	for(int i = 0; i < n; i++){
		dnaStr = dnaStr + bases.at(uniform(engine));
	}

	return dnaStr;
}
