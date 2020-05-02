// RUN: clang++ -Xclang -load -Xclang %shlibdir/libHelloWorld%shlibext -Xclang -plugin -Xclang hello-world -c %s 2>&1 | FileCheck %s

#include <vector>

// There's no straightforward way to write a test for any STL header so that it
// works reliably across different platforms. Indeed - the expected output
// depends on the actual implementation of the header file.
//
// Instead, this test makes sure that this translation unit is processed
// successfully (i.e. the plugin does not crash).

// CHECK-NOT: (clang-tutor)  no declarations found
// CHECK: (clang-tutor)
