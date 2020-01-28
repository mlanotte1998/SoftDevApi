//lang::CwC
#include <stdio.h>
#include "Object.h"
#include "String.h"
#include "Array.h"

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

void test_object() {
    Object *o1 = new Object();
    Object *o2 = new Object();
    Object *o3 = o1;
    t_true(o1->equals(o1));
    t_true(o1->equals(o3));
    t_false(o1->equals(o2));
    t_false(o2->equals(o3));
    delete o1;
    delete o2;
    delete o3;
    OK("Object Tests Passed");
}

void test_string() {
    String *s1 = new String("hello");
    String *s2 = new String("world");
    String *s3 = o1;
    String *s4 = new String("helloworld");
    String *s5 = s1->concat(s2);
    t_true(s1->equals(s1));
    t_true(s1->equals(s3));
    t_false(s1->equals(s2));
    t_false(s2->equals(s3));
    t_true(s4->equals(s5));
    t_false(s5->equals(s3));
    t_true(s2->size() == 5);
    t_true(s1->compare(s2) < 0);
    t_true(s1->compare(s3) < 0);
    t_false(s2->compare(s3) <= 0);
    char* helloDup = s1->to_string();
    t_true(helloDup[0] == 'h');
    t_true(helloDup[1] == 'e');
    t_true(helloDup[2] == 'l');
    t_true(helloDup[3] == 'l');
    t_true(helloDup[4] == 'o');
    String *s1Copy = new String("hello");
    t_true(s1->hash_me_() == s1Copy->hash_me_());
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete s5;
    delete[] helloDup;
    delete s1Copy;
    OK("Object Tests Passed");
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
    Array *a2 = new Array(o1);
    a2->push_back(o2);
    a1->add_all(a2);
    t_true(a1->get(0)->equals(o4));
    t_true(a1->get(1)->equals(o2));
    t_true(a1->get(2)->equals(o1));
    t_true(a1->get(3)->equals(o1));
    t_true(a1->get(4)->equals(o2));
    t_true(a1->getLength() == 5);
    a1->clear();
    t_true(a1->getLength() == 0);
    t_false(a1->hash() == a2->hash())
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
    String *s3 = o1;
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
    Array *a2 = new Array(s1);
    a2->push_back(s2);
    a1->add_all(a2);
    t_true(a1->get(0)->equals(s4));
    t_true(a1->get(1)->equals(s2));
    t_true(a1->get(2)->equals(s1));
    t_true(a1->get(3)->equals(s1));
    t_true(a1->get(4)->equals(s2));
    t_true(a1->getLength() == 5);
    a1->clear();
    t_true(a1->getLength() == 0);
    delete a1;
    delete a2;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    OK("Object Tests Passed");
    OK("Object Tests Passed");
}

int main() {
    test_object();
    test_string();
    test_object_array();
    test_string_array();
    return 0;
}

