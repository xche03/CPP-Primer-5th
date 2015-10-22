/*Exercise 2.26: Which of the following are legal ? For those that are illegal,
explain why.
(a) const int buf;
(b) int cnt = 0;
(c) const int sz = cnt;
(d) ++cnt; ++sz;*/

int main() {

	const int buf; //'buf': 'const' object must be initialized if not 'extern'
	int cnt = 0;
	const int sz = cnt;
	++cnt; ++sz; //'sz': you cannot assign to a variable that is const
}

