#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
// Standard normal probability density function
double norm_pdf(const double& x) {
	return (1.0 / (pow(2 * M_PI, 0.5)))*exp(-0.5*x*x);
}

// An approximation to the cumulative distribution function
// for the standard normal distribution
// Note: This is a recursive function
double norm_cdf(const double& x) {
	double k = 1.0 / (1.0 + 0.2316419*x);
	double k_sum = k*(0.319381530 + k*(-0.356563782 + k*(1.781477937 + k*(-1.821255978 + 1.330274429*k))));

	if (x >= 0.0) {
		return (1.0 - (1.0 / (pow(2 * M_PI, 0.5)))*exp(-0.5*x*x) * k_sum);
	}
	else {
		return 1.0 - norm_cdf(-x);
	}
}

int rdn(int y, int m, int d) { /* Rata Die day one is 0001-01-01 */
	if (m < 3)
		y--, m += 12;
	return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
}

//Kirk Call Option
double kirkCall(double x1, double x2, double K,double sigma1, double sigma2, double rho, double T, double r ) {
	double sigma_k = sqrt(pow(sigma2,2.0)-2*rho*sigma1*sigma2*(x1/(x1+K*exp(-r*T)))+pow(sigma1,2.0)*pow(x1/(x1+K*exp(-r*T)),2));
	double optionValue = x2*norm_cdf((log(x2 / (x1 + K*exp(-r*T))) / sigma_k) + (sigma_k / 2)) -
		(x1 + K*exp(-r*T))*norm_cdf((log(x2 / (x1 + K*exp(-r*T))) / sigma_k) - (sigma_k / 2));
	return optionValue;
}

int main() {

	int days = rdn(2012, 9, 1) - rdn(2012, 6, 1);
	double T = days / 365.0;
	double x2 = 2.85 * 42.0;
	double x1 = 93.20;
	double sigma2 = 0.29;
	double sigma1 = 0.36;
	double rho = 0.42;
	double K = 20.0;
	double r = 0.05;


	double kirk = kirkCall(x1, x2, K, sigma1, sigma2, rho, T, r);
	cout << kirk << endl;


	system("PAUSE");
	return 0;
}