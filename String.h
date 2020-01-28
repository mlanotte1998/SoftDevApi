#ifndef PART2_STRING_H
#define PART2_STRING_H

#pragma once
//lang::CwC
#include "object.h"
#include <stdlib.h>
#include <cassert>

using namespace std;

/**
 * Class: String
 * String is used to make working with char* 's easier by having an object with easy to use functions
 * available. String acts as a wrapper for a char* and also holds the length of the inner char*
 */
class String : public Object {
public:
    char *val_; // the inner char array represented by the string
    size_t size_; // the length of the string

    /**
     * Constructor: word given
     * Arguments:
     *       const char* word // inner word
     * Constructor with the word that the user wants to be represented by a string is passed in by a char*.
     * The length is found for the word and held in the object.
     */
    String(char *s) {
        size_ = strlen(s);
        val_ = duplicate(s);
    }

    /**
     * Constructor: word given
     * Arguments:
     *       const char* word // inner word
     * Constructor with the word that the user wants to be represented by a string is passed in by a char*.
     * The length is found for the word and held in the object.
     */
    String(const char *s) {
        size_ = strlen(s);
        val_ = duplicate(s);
    }

    /** This constructor takes ownership of the char* s. The char*
     *  will be delete with the string. Use with caution. The first
     *  argument is there to differentiate this constructor from the
     *  standard one. */
    String(bool steal, char *s) {
        assert(steal);
        size_ = strlen(s);
        val_ = s;
    }

    /**
     * Destructor
     * Arguments:
     * Destructor deletes the inner word from memory since it is an allocated char*.
     */
    ~String() { delete[] val_; }

    /**
     * Function: equals
     * Returns: bool
     * Arguments:
     *      Object* other : another object
     * Equals compares this string to the given object. First it makes sure the given object is also a string, if it is
     * and the word held inside is the same as the word held inside this string then it returns true, otherwise it
     * returns false.
     */
    bool equals(Object *other) {
        if (other == nullptr) return false;
        String *tgt = dynamic_cast<String *>(other);
        if (tgt == nullptr) return false;
        return compare(tgt) == 0;
    }

    /**
     * Function: compare
     * Returns: int
     * Arguments:
     *      String* other : another string
     * Compare takes in another String object and compares it with itself to determine which comes first
     * alphabetically. any negative integer means this comes first, 0 means they are the same word, and
     * any positive integer means that the given string "other" is before this.
     */
    int compare(String *tgt) { return strcmp(val_, tgt->val_); }

    /**
     * Function hash_me
     * Returns: size_t
     * Arguments:
     * Hash_me attempts to create a hash for the string when needed.
     */
    size_t hash_me_() {
        size_t hash = 0;
        for (size_t i = 0; i < size_; ++i)
            hash = val_[i] + (hash << 6) + (hash << 16) - hash;
        return hash;
    }

    /**
     * Function: size
     * Returns: size_t
     * Arguments:
     * Size returns the length of the string that is stored in the object.
     */
    size_t size() { return size_; }

    /**
     * Function: concat
     * Returns: String*
     * Arguments:
     *      String* other : another string
     * Concat takes in a string and adds it to the end of this string and returns the result.
     */
    String *concat(String *other) {
        char *res = new char[size_ + other->size() + 1];
        for (size_t i = 0; i < size_; i++)
            res[i] = val_[i];
        for (size_t i = size_, j = 0; i < size_ + other->size(); i++, j++)
            res[i] = val_[j];
        res[size_] = '\0';
        return new String(true, res);
    }

    /**
    * Function: to_string
    * Returns: char*
    * Arguments:
    * Return a newly allocated char* describing that is a duplicate of this string.
    */
    char *to_string() { return duplicate(val_); }

    /**
     * Function: print
     * Returns: void
     * Arguments:
     * Prints the string
     */
    void print() { p("String(\"").p(val_).p("\")"); }
};

#endif
