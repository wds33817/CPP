int a[3];   // 3 * sizeof(int)

Arrays decay to pointers when passed to functions

void f(int[] a)  // sizeof(int*)

smart pointer used
vector<Person*> people;

vector<unique_ptr<Person>> people;

containers have Iterator to have access to data in container,
begin() points to the first element,
end() points to one past the last element.


Input iterator
Forward iterator
Bi-directional iterator
Random-access iterator

auto as = std::begin(array);// Get iterator for built-in array
auto ae = std::end(array);

std::cout << as[3] << "\n";
std::cout << *(as + 3) << "\n";// Arrays have random-access iterators

std::vector<int> vec = {1, 2, 3, 4, 5};
int lastElement = vec.back();


std::array<int, 10> arr;
std::sort(
    arr.begin(), arr.end(),
    [](int a, int b) {return b < a;}
);

int arr[] {7, 1, 5, 6, 2, 4, 3};
std::sort(std::begin(arr), std::end(arr));



vector<int> vec;
vector<int>::iterator it = vec.begin(); // iterator is a nested type

for (; it != vec.end(); it++) {
	cout << *it << "\n"; // *it to dereference to get the value
}



Generic programming by templates

standard allocators 

template<
	class T,
	class Allocator = std::allocator<T>
> class vector


/*
#include <iostream>
#include <vector>
#include <stdio.h>

const char *find(const char *s, char c) {
    while (s && *s != c) ++s;
    return s;
}

int main() {
    std::cout << "Working with generics" << std::endl;
    const char *s = "Generic programming is cool";
    auto result = find(s, 'g');
    if (result)
        std::cout << result << std::endl;
    return 0;
}
*/



/*

const char *find(const char *s, const char *e, char c) {
    while (s != e && *s != c) ++s;
    return s;
}

int main() {
    std::cout << "Working with generics" << std::endl;
    const char *string = "Generic programming is cool";
    const char *s = string + 10;
    const char *e = string + 22;
    auto result = find(s, e, 'g');
    if (result)
        std::cout << result << std::endl;
    return 0;
}
*/



/*

template<typename T, typename U>
T *find(T *start, T *end, U c) {
    while (start != end && *start != c) ++start;
    return start;
}

int main() {
    std::cout << "Working with generics" << std::endl;
    const char *string = "Generic programming is cool";
    const char *s = string + 10;
    const char *e = string + 22;
    auto result = find(s, e, 'g');
    if (result)
        std::cout << result << std::endl;

    int arr[] = {1,2,3,4,5,6};
    int *end = arr+6;
    int *result2 = find(arr, end, 4);
    if (result2)
        std::cout << *result2 <<std::endl;

    return 0;
}
*/



/*

template<typename T, typename Iterator>
Iterator find(Iterator start, Iterator end, T c) {
    while (start != end && *start != c) ++start;
    return start;
}

int main() {
    std::cout << "Working with generics" << std::endl;
    const char *string = "Generic programming is cool";
    const char *s = string + 10;
    const char *e = string + 22;
    auto result = find(s, e, 'g');
    if (result)
        std::cout << result << std::endl;

    int arr[] = {1,2,3,4,5,6};
    int *end = arr+6;
    int *result2 = find(arr, end, 4);
    if (result2)
        std::cout << *result2 <<std::endl;

    return 0;
}
*/
