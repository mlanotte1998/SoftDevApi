#ifndef PART2_STRING_H
#define PART2_STRING_H

#include <stdlib.h>
#include "object.h"

using namespace std;

/*
 * Class: String
 * String is used to make working with char* 's easier by having an object with easy to use functions
 * available. String acts as a wrapper for a char* and also holds the length of the inner char*
 */
class String : public Object {
public:

    char *string_; // the inner char array represented by the string.
    size_t length_; // the length of the string.

    /*
     * Constructor: default
     * Arguments:
     * Default constructor is needed so that an array of Strings can be allocated by doing new String[size].
     */
    String();

    /*
     * Constructor: word given
     * Arguments:
     *       const char* word // inner word
     * Constructor with the word that the user wants to be represented by a string is passed in by a char*.
     * The length is found for the word and held in the object.
     */
    String(const char *word);

    /*
     * Destructor
     * Arguments:
     * Destructor deletes the inner word from memory since it is an allocated char*.
     */
    ~String();

    /*
     * Function: hash
     * Returns: size_T
     * Arguments:
     * Hash returns a size_t value representing the given string in a form so that any other string that has the same
     * interior word would have the same hash.
     */
    size_t hash();

    /*
     * Function: equals
     * Returns: bool
     * Arguments:
     *      Object* other : another object
     * Equals compares this string to the given object. First it makes sure the given object is also a string, if it is
     * and the word held inside is the same as the word held inside this string then it returns true, otherwise it
     * returns false.
     */
    bool equals(Object *o);

    /*
     * Function: getValue
     * Returns: char*
     * Arguments:
     * getValue returns the inner word of the string that is stored in the object.
     */
    char *getValue();

    /*
     * Function: getLength
     * Returns: size_t
     * Arguments:
     * getLength returns the length of the string that is stored in the object.
     */
    size_t getLength();

    /*
     * Function: concat
     * Returns: String*
     * Arguments:
     *      String* other : another string
     * Concat takes in a string and adds it to the end of this string and returns the result.
     */
    String *concat(String *other);

    /*
     * Function: compare
     * Returns: int
     * Arguments:
     *      String* other : another string
     * Compare takes in another String object and compares it with itself to determine which comes first
     * alphabetically. any negative integer means this comes first, 0 means they are the same word, and
     * any positive integer means that the given string "other" is before this.
     */
    int compare(String *other);

};

#endif
