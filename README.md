# Vector Dot-Product Implementation in C++

---
## Introduction

The *Dot product* is a fundamental operation in *Linear Algebra*[^1], defined mathematically as:

$$
\mathbf{a} \cdot \mathbf{b} = \sum_{i=1}^{n} a_i \cdot b_i
$$

This document provides an explanation of the implementation, example code, performance comparisons, and visual representation of the vector dot-product algorithm.

---


# Famous Quote regrading Dot-Product
>"The vector[^2] dot product is more than just a mathematical operation; it reveals the alignment and interaction between two vectors, forming the cornerstone of projections and orthogonality in geometry."



---
## Image describing dot product 
![Dot-Product](https://i.ytimg.com/vi/0iNrGpwZwog/sddefault.jpg)

---
## Steps to Calculate the Dot Product of Two Vectors

### Ordered List (with Nested Steps)
1. *Initialize the vectors*  
   1.1. Define the first vector \(v1\).  
   1.2. Define the second vector \(v2\).  
   1.3. Ensure both vectors have the same size.  
2. *Multiply corresponding elements*  
   2.1. Iterate through each index \(i\) of the vectors.  
   2.2. Compute the product \(v1[i] \cdot v2[i]\).  
   2.3. Store the result in a temporary list or variable.  
3. *Sum the products*  
   3.1. Use a loop or built-in function to sum all stored products.  
   3.2. Return or print the final result.

### Checklist
- [x] Verify that the vectors have the same size.
- [x] Iterate through both vectors and multiply corresponding elements.
- [x] Store intermediate results.
- [x] Compute the sum of the intermediate results.
- [ ] Test the implementation with sample inputs.
---
# Alerts to keep in mind while doing vector dot product 
> [!Note]
> The dot product is only defined for vectors of the same size. Ensure both vectors have equal dimensions before performing the operation.

> [!Tip]
> The dot product can be used to determine if two vectors are orthogonal. If the dot product equals zero, the vectors are perpendicular.

> [!Warning]
>  Mismatched vector sizes will result in incorrect computations or runtime errors. Always validate the sizes beforehand.

> [!Note]
> The dot product has applications in physics, machine learning, and computer graphics for tasks like calculating projections and measuring similarity.

## Comparison of Dot Product Calculation Methods

| *Method/Algorithm*       | *Description*                         | *Time Complexity* | *Space Complexity* |
|-----------------------------|-----------------------------------------|----------------------|-----------------------|
| *Naive Iteration*         | Iterates through the vectors and computes the sum of element-wise products. | \(O(n)\)             | \(O(1)\)             |
| *Using STL Functions*     | Utilizes C++ STL functions like std::transform and std::inner_product. | \(O(n)\)             | \(O(1)\)             |
| *Divide and Conquer*      | Splits the vectors into smaller parts and calculates recursively.           | \(O(n \log n)\)      | \(O(\log n)\)        |
| *Parallel Processing*     | Divides the workload among multiple processors for concurrent computation. | \(O(n/p)\) where \(p\) = processors | \(O(1)\)             |
| *GPU Acceleration*        | Uses GPU cores for parallel processing on a massive scale.                  | \(O(n/p)\) where \(p\) = GPU threads | \(O(1)\)             |

> [!Note]
> For most use cases, the naive iteration and STL-based methods are sufficient. However, for large-scale computations, parallel processing and GPU acceleration are more efficient.

## Implementation

Below is my implementation in *C++*:

cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1 ={1,2,3};
    vector<int> v2 ={3,4,5};
    vector<int> v3;
    for(int i=0; i<3; ++i){
        v3.push_back(v1[i] * v2[i]);
    }
    for(int i=0; i<3; ++i){
        cout << v3[i] << endl;
    }
    return 0;
}

## Suggested Readings for Vector Dot Product

Here are some useful resources to learn more about vector dot products:

1. *Basics of Vector Dot Product*  
   [Khan Academy - Introduction to the Dot Product](https://www.khanacademy.org/math/linear-algebra/vectors-and-spaces/dot-cross-products/a/dot-product-introduction)

2. *Applications in Machine Learning*  
   [Dot Products in Machine Learning - Towards Data Science](https://towardsdatascience.com/dot-products-in-machine-learning-d12c2afdd35e)

3. *Geometric Interpretation*  
   [3Blue1Brown - Essence of Linear Algebra (Chapter 4: Dot Product)](https://www.youtube.com/watch?v=LyGKycYT2v0)

4. *Computational Approaches*  
   [GeeksforGeeks - Dot Product of Two Vectors](https://www.geeksforgeeks.org/dot-product-of-two-vectors/)

5. *Optimization with Parallel Processing*  
   [Intel Developer Zone - Optimizing Vector Dot Product Using Parallelism](https://www.intel.com/content/www/us/en/developer/articles/technical/parallel-computing-dot-product.html)

6. *Python Implementation*  
   [Real Python - Vector Calculations in NumPy](https://realpython.com/numpy-linear-algebra/)

> [!Tip]
> Start with the basics and gradually explore advanced topics like optimization and applications in specific domains.

---
[^1]:Linear Algebra is the field of mathematics which deals with matrices, vectors and their related operations.
[^2]:Vector is a 1 dimensional matrix in linear algebra
