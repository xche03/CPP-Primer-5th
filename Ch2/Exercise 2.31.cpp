/*Exercise 2.30: For each of the following declarations indicate whether the
object being declared has top-level or low-level const.
const int v2 = 0; int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;*/

/*Exercise 2.31: Given the declarations in the previous exercise determine
whether the following assignments are legal. Explain how the top-level or
low-level const applies in each case.
Click here to view code image
r1 = v2;
p1 = p2; p2 = p1;
p1 = p3; p2 = p3;*/


int main() {

	const int v2 = 0; int v1 = v2;// v2 has high-level const.
	int *p1 = &v1, &r1 = v1;//p1 has nothing.
	int i = 0;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;//p2 has low-level const.
												  //p3 has both high-level const and low-level const, r2 has both low-level and low-level const


	r1 = v2;//ok: 
	p1 = p2; p2 = p1;//error: p1 is not a pointer to const type. low-level const can't be ignored.
	p1 = p3; p2 = p3;//error: p1 is not a pointer to const type. low-level const can't be ignored.


	return 0;
}