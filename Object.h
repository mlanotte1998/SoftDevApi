#ifndef PART2_OBJECT_H
#define PART2_OBJECT_H

#include <stdlib.h>
#include "helper.h"

#pragma once
//lang::CwC

/**
 * Class: Object
 * Object is a versatile class that has basic functionality like hashing and then is extended by different
 * classes that want to have one base interface that is shared.
 */
class Object : public Sys {
public:

    size_t hash_;  // hash code for the given object

    /**
     * Constructor: default
     * Arguments:
     * Default constructor that sets a hash.
     */
    Object() { hash_ = 0; }

    /**
     * Destructor
     * Arguments:
     * Destructor for object would do nothing because it is not storing dynamic data but is virtual so that
     * subclasses can.
     */
    virtual ~Object() {}

    /**
     * Function: hash
     * Returns: size_T
     * Arguments:
     * Hash returns a size_t value representing the given object in a form so that any other object pointer
     * that also points to this object, it returns true because they are the same.
     */
    size_t hash() { return hash_ ? hash_ : hash_ = hash_me_(); }

    /**
     * Function hash_me
     * Returns: size_t
     * Arguments:
     * Hash_me attempts to create a hash for the object when needed.
     */
    virtual size_t hash_me_() { return 0; }

    /**
     * Function: equals
     * Returns: bool
     * Arguments:
     *      Object* other : another object
     * Compares this object and another one to see if they are the same.
     */
    virtual bool equals(Object *other) { return this == other; }

    /**
     * Function: to_string
     * Returns: char*
     * Arguments:
     * Return a newly allocated char* describing the object.
     */
    virtual char *to_string() { return duplicate("Object"); }

    /**
     * Function: print
     * Returns: void
     * Arguments:
     * Prints the object
     */
    virtual void print() { pln("object"); }
}

#endif
