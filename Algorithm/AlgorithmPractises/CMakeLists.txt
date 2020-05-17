cmake_minimum_required(VERSION 3.14)
project(AlgorithmPractises)

set(CMAKE_CXX_STANDARD 14)

add_executable(AlgorithmPractises main.cpp dynamic_programming/fibonacci.cpp dynamic_programming/dynamic.h dynamic_programming/rod.cpp dynamic_programming/market.cpp dynamic_programming/min_max.cpp dynamic_programming/LongestIncreasingSubsequence.cpp sort/sort.h sort/insertion.cpp sort/merge.cpp sort/quick.cpp binarytree/TreeNode.cpp binarytree/TreeNode.h binarytree/BinaryTree.cpp binarytree/BinaryTree.h binarytree/BinarySearchTree.cpp binarytree/BinarySearchTree.h)