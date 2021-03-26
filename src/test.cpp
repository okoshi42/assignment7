//
//  test.cpp
//
//  Tests to prove your code works.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#include "Queue.h"
#include "Stack.h"
#include "catch.h"
#include <string>

using namespace std;
using namespace csi281;

TEST_CASE( "Queue Tests", "[queue]" ) {
    SECTION( "Queue w/ int tests" ) {
        Queue<int> q1 = Queue<int>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE
        for (int x = 0; x < 20; x++){
        q1.push(x);
        CHECK(q1.getCount() == x+1); 
        }
        for (int x = 0; x < 15; x++) {
            CHECK(q1.pop() == x);
            CHECK(q1.peek() == x+1);
            CHECK(q1.getCount() == 20 - (x+1));
        }

    }
    
    SECTION( "Queue w/ string tests" ) {
        Queue<string> q2 = Queue<string>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE
        q2.push("strang");
        q2.push("streng");
        q2.push("string");
        q2.push("strong");
        q2.push("strung");
        CHECK(q2.getCount() == 5);
        CHECK(q2.peek() == "strang");
        q2.pop();
        CHECK(q2.peek() == "streng");
    }
}

TEST_CASE( "Stack Tests", "[stack]" ) {
    SECTION( "Stack w/ int tests" ) {
     

        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE
        Stack<int> s1 = Stack<int>();
        for (int x = 0; x < 20; x++) {
            s1.push(x); 
            CHECK(s1.getCount() == x + 1);
        }
        for (int x = 0; x < 15; x++) {
            CHECK(s1.pop() == 20-(x+1));
            CHECK(s1.peek() == 20 - (x + 2));
            CHECK(s1.getCount() == 20 - (x + 1));
        }
    }
    
    SECTION( "Stack w/ string tests" ) {
        Stack<string> s2 = Stack<string>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE
        s2.push("strang");
        s2.push("streng");
        s2.push("string");
        s2.push("strong");
        s2.push("strung");
        CHECK(s2.getCount() == 5);
        CHECK(s2.peek() == "strung");
        s2.pop();
        CHECK(s2.peek() == "strong");
    }
}

