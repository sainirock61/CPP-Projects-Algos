/* ---- track memory allocations ----
*/
#include <iostream>

void* operator new(size_t size) {    //here, we are overriding new operator, linker will link this function instead of lib's new operator
   std::cout << "allocating " << size << " bytes\n";
   return malloc(size);
}//new operator

void operator delete(void* memory, size_t size) {
   std::cout << "freeing " << size << " bytes\n";
   free(memory);
} //delete operator

struct object {
   int x, y, z;
}; //struct object

int main() {
   //object obj;    //this results in stack memory allocation
   object* obj = new object;     //this results into heap allocation, and we have to detect this
   delete(obj);
   
   /* now we can stick break points and see which line of code allocates memory, but we can also use tools like valgrind to track memory*/
} //function-main
