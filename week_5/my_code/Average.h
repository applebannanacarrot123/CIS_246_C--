// David Kovalev
// Homework #5
// Class with an overloaded averaging function

double computeAverage(int, int);
double computeAverage(int, int, int);
double computeAverage(double, double);
double computeAverage(double, double, double);


// Int functions
double computeAverage(int a, int b){
	return (a + b) / 2.0;
}

double computeAverage(int a, int b, int c){
	return (a + b + c) / 3.0;
}

// Double functions
double computeAverage(double a, double b){
	return (a + b) / 2.0;
}

double computeAverage(double a, double b, double c){
	return (a + b + c) / 3.0;
}

