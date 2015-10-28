/*Exercise 3.27: Assuming txt_size is a function that takes no arguments
and returns an int value, which of the following definitions are illegal?
Explain why.
unsigned buf_size = 1024;
(a) int ia[buf_size];
(b) int ia[4 * 7 - 14];
(c) int ia[txt_size()];
(d) char st[11] = "fundamental";*/

int txt_size() {

	return 1024;
}

int main() {

	unsigned buf_size = 1024;
	int ia[buf_size];//error:buf_size is not constant.
	int ia[4 * 7 - 14];//ok. 
	int ia[txt_size()];//error: the return value of txt_size() is not constexpr
	char st[11] = "fundamental";//error: dimension is wrong.

}