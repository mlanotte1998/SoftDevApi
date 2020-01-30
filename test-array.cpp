//lang::CwC
#include <stdio.h>
#include "sbject.h"
#include "string.h"
#include "array.h"

void FAIL() { exit(1); }

void OK(const char *m) {
    printf("%s Test Passed\n", m);
}

void t_true(bool p) {
    if (!p) {
        printf("Test Failed\n");
        FAIL();
    } else {
        printf("Test Passed\n");
    }
}

void t_false(bool p) {
    if (p) {
        printf("Test Failed\n");
        FAIL();
    } else {
        printf("Test Passed\n");
    }
}

void test_object_array() {
    Object *o1 = new Object();
    Object *o2 = new Object();
    Object *o3 = o1;
    Object *o4 = new Object();
    Array *a1 = new Array();
    a1->push_back(o1);
    t_true(a1->getLength() == 1);
    t_true(a1->get(0)->equals(o1));
    a1->push_back(o2);
    t_true(a1->get(0)->equals(o1));
    t_true(a1->get(1)->equals(o2));
    t_true(a1->getLength() == 2);
    a1->push_front(o4);
    t_true(a1->get(0)->equals(o4));
    t_true(a1->get(1)->equals(o1));
    t_true(a1->get(2)->equals(o2));
    t_true(a1->getLength() == 3);
    a1->remove(1);
    t_true(a1->get(0)->equals(o4));
    t_true(a1->get(1)->equals(o2));
    t_true(a1->getLength() == 2);
    a1->update(o1, 1);
    t_true(a1->get(0)->equals(o4));
    t_true(a1->get(1)->equals(o1));
    t_true(a1->getLength() == 2);
    a1->insert(o2, 1);
    t_true(a1->get(0)->equals(o4));
    t_true(a1->get(1)->equals(o2));
    t_true(a1->get(2)->equals(o1));
    t_true(a1->getLength() == 3);
    Array *a2 = new Array();
    a1->push_back(o1);
    a2->push_back(o2);
    a1->add_all(a2);
    t_true(a1->get(0)->equals(o4));
    t_true(a1->get(1)->equals(o2));
    t_true(a1->get(2)->equals(o1));
    t_true(a1->get(3)->equals(o1));
    t_true(a1->get(4)->equals(o2));
    t_true(a1->getLength() == 5);
    t_false(a1->equals(a2));
    t_true(a1->equals(a1));
    a1->clear();
    t_true(a1->getLength() == 0);
    t_false(a1->hash() == a2->hash());
    delete a1;
    delete a2;
    delete o1;
    delete o2;
    delete o3;
    delete o4;
    OK("Object Tests Passed");
}

void test_string_array() {
    String *s1 = new String("hello");
    String *s2 = new String("world");
    String *s3 = s1;
    String *s4 = new String("helloworld");
    Array *a1 = new Array();
    a1->push_back(s1);
    t_true(a1->getLength() == 1);
    t_true(a1->get(0)->equals(s1));
    a1->push_back(s2);
    t_true(a1->get(0)->equals(s1));
    t_true(a1->get(1)->equals(s2));
    t_true(a1->getLength() == 2);
    a1->push_front(s4);
    t_true(a1->get(0)->equals(s4));
    t_true(a1->get(1)->equals(s1));
    t_true(a1->get(2)->equals(s2));
    t_true(a1->getLength() == 3);
    a1->remove(1);
    t_true(a1->get(0)->equals(s4));
    t_true(a1->get(1)->equals(s2));
    t_true(a1->getLength() == 2);
    a1->update(s1, 1);
    t_true(a1->get(0)->equals(s4));
    t_true(a1->get(1)->equals(s1));
    t_true(a1->getLength() == 2);
    a1->insert(s2, 1);
    t_true(a1->get(0)->equals(s4));
    t_true(a1->get(1)->equals(s2));
    t_true(a1->get(2)->equals(s1));
    t_true(a1->getLength() == 3);
    Array *a2 = new Array();
    a2->push_back(s1);
    a2->push_back(s2);
    a1->add_all(a2);
    t_true(a1->get(0)->equals(s4));
    t_true(a1->get(1)->equals(s2));
    t_true(a1->get(2)->equals(s1));
    t_true(a1->get(3)->equals(s1));
    t_true(a1->get(4)->equals(s2));
    t_true(a1->getLength() == 5);
    t_false(a1->equals(a2));
    t_true(a1->equals(a1));
    a1->clear();
    t_true(a1->getLength() == 0);
    delete a1;
    delete a2;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    OK("String Array Tests Passed");
}

void test_bool_array() {
    BoolArray *a1 = new BoolArray();
    a1->push_back(true);
    t_true(a1->getLength() == 1);
    t_true(a1->get(0));
    a1->push_back(false);
    t_true(a1->get(0));
    t_true(!a1->get(1));
    t_true(a1->getLength() == 2);
    a1->push_front(true);
    t_true(a1->get(0));
    t_true(a1->get(1));
    t_true(!a1->get(2));
    t_true(a1->getLength() == 3);
    a1->remove(2);
    t_true(a1->get(0));
    t_true(a1->get(1));
    t_true(a1->getLength() == 2);
    a1->update(false, 1);
    t_true(a1->get(0));
    t_true(!a1->get(1));
    t_true(a1->getLength() == 2);
    a1->insert(false, 0);
    t_true(!a1->get(0));
    t_true(a1->get(1));
    t_true(!a1->get(2));
    t_true(a1->getLength() == 3);
    BoolArray *a2 = new BoolArray();
    a2->push_back(false);
    a2->push_back(true);
    a1->add_all(a2);
    t_true(!a1->get(0));
    t_true(a1->get(1));
    t_true(!a1->get(2));
    t_true(!a1->get(3));
    t_true(a1->get(4));
    t_true(a1->getLength() == 5);
    t_false(a1->equals(a2));
    t_true(a1->equals(a1));
    BoolArray *a3 = new BoolArray();
    a3->push_back(false);
    a3->push_back(true);
    t_true(a2->equals(a3));
    a1->clear();
    t_true(a1->getLength() == 0);
    delete a1;
    delete a2;
    OK("BoolArray Tests Passed");
}

void test_int_array() {
    IntArray *a1 = new IntArray();
    a1->push_back(50);
    t_true(a1->getLength() == 1);
    t_true(a1->get(0) == 50);
    a1->push_back(20);
    t_true(a1->get(0) == 50);
    t_true(a1->get(1) == 20);
    t_true(a1->getLength() == 2);
    a1->push_front(70);
    t_true(a1->get(0) == 70);
    t_true(a1->get(1) == 50);
    t_true(a1->get(2) == 20);
    t_true(a1->getLength() == 3);
    a1->remove(1);
    t_true(a1->get(0) == 70);
    t_true(a1->get(1) == 20);
    t_true(a1->getLength() == 2);
    a1->update(30, 1);
    t_true(a1->get(0) == 70);
    t_true(a1->get(1) == 30);
    t_true(a1->getLength() == 2);
    a1->insert(5, 0);
    t_true(a1->get(0) == 5);
    t_true(a1->get(1) == 70 );
    t_true(a1->get(2) == 30);
    t_true(a1->getLength() == 3);
    IntArray *a2 = new IntArray();
    a2->push_back(10);
    a2->push_back(90);
    a1->add_all(a2);
    t_true(a1->get(0) == 5);
    t_true(a1->get(1) == 70);
    t_true(a1->get(2) == 30);
    t_true(a1->get(3) == 10);
    t_true(a1->get(4) == 90);
    t_true(a1->getLength() == 5);
    t_false(a1->equals(a2));
    t_true(a1->equals(a1));
    IntArray *a3 = new IntArray();
    a3->push_back(10);
    a3->push_back(90);
    t_true(a2->equals(a3));
    a1->clear();
    t_true(a1->getLength() == 0);
    delete a1;
    delete a2;
    OK("IntArray Tests Passed");
}

void test_float_array() {
    FloatArray *a1 = new FloatArray();
    a1->push_back(50.5);
    t_true(a1->getLength() == 1);
    t_true(a1->get(0) == 50.5);
    a1->push_back(20);
    t_true(a1->get(0) == 50.5);
    t_true(a1->get(1) == 20);
    t_true(a1->getLength() == 2);
    a1->push_front(70.1);
    t_true(a1->get(0) == 70.1);
    t_true(a1->get(1) == 50.5);
    t_true(a1->get(2) == 20);
    t_true(a1->getLength() == 3);
    a1->remove(1);
    t_true(a1->get(0) == 70.1);
    t_true(a1->get(1) == 20);
    t_true(a1->getLength() == 2);
    a1->update(30.45, 1);
    t_true(a1->get(0) == 70.1);
    t_true(a1->get(1) == 30.45);
    t_true(a1->getLength() == 2);
    a1->insert(5.999, 0);
    t_true(a1->get(0) == 5.999);
    t_true(a1->get(1) == 70.1);
    t_true(a1->get(2) == 30.45);
    t_true(a1->getLength() == 3);
    FloatArray *a2 = new FloatArray();
    a2->push_back(10.2);
    a2->push_back(90.12345);
    a1->add_all(a2);
    t_true(a1->get(0) == 5.999);
    t_true(a1->get(1) == 70.1);
    t_true(a1->get(2) == 30.45);
    t_true(a1->get(3) == 10.2);
    t_true(a1->get(4) == 90.12345);
    t_true(a1->getLength() == 5);
    t_false(a1->equals(a2));
    t_true(a1->equals(a1));
    FloatArray *a3 = new FloatArray();
    a3->push_back(10.2);
    a3->push_back(90.12345);
    t_true(a2->equals(a3));
    a1->clear();
    t_true(a1->getLength() == 0);
    delete a1;
    delete a2;
    OK("FloatArray Tests Passed");
}

int main() {
    test_object_array();
    test_string_array();
    test_bool_array();
    test_int_array();
    test_float_array();
    return 0;
}

