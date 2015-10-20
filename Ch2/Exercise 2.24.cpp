/*Exercise 2.24: Why is the initialization of p legal but that of lp illegal ?
int i = 42; void *p = &i; long *lp = &i;*/

int main (){

	int i = 42; 
	void *p = &i; /*The type void* is a special pointer type that can hold the address of any object. Like
any other pointer, a void* pointer holds an address, but the type of the object at
that address is unknown.*/
	long *lp = &i;//Error: you can't assingn the address of an integer to pointer of type long.


}

/*The type void* is a special pointer type that can hold the address of any object. Like
any other pointer, a void* pointer holds an address, but the type of the object at
that address is unknown.*/
/*There are only a limited number of things we can do with a void* pointer: We can
compare it to another pointer, we can pass it to or return it from a function, and we
can assign it to another void* pointer. We cannot use a void* to operate on the
object it addresses¡ªwe don¡¯t know that object¡¯s type, and the type determines what
operations we can perform on the object.*/
/*Generally, we use a void* pointer to deal with memory as memory, rather than
using the pointer to access the object stored in that memory.*/