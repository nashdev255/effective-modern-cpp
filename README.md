# effective-modern-cpp
Learn how to write a effective and modern code with reference to Effective Modern C++ written by Scott Meyers.

- [Smart pointers](#Smart-pointers)
  - What are smart pointers?
  - unique_ptr
  - shared_ptr
  - weak_ptr

### Smart pointers
#### What are smart pointers?
According to [Microsoft Document](https://learn.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170), smart pointers are defined in the `std` namespace in the [\<memory\>](https://learn.microsoft.com/en-us/cpp/standard-library/memory?view=msvc-170) header file.
In classic C++, programmers use raw pointer. But with this pointer, programmers have to set where the dynamically allocated object will be destroyed. So, many human error like memory leak has occured in the past.
To deal with this problem, smart pointers were introduced in C++11.

#### unique_ptr

#### shared_ptr

#### weak_ptr
