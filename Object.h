#include <stdlib.h>

#ifndef PART2_OBJECT_H
#define PART2_OBJECT_H

#pragma once

/*
 * Class: Object
 * Object is a versatile class that has basic functionality like hashing and then is extended by different
 * classes that want to have one base interface that is shared.
 */
class Object {

public:
    size_t hash_; // hash code for the given object

    /*
     * Constructor: default
     * Arguments:
     * Default constructor that sets a hash.
     */
    Object();

    /*
     * Destructor
     * Arguments:
     * Destructor for object would do nothing because it is not storing dynamic data.
     */
    virtual ~Object();

    /*
     * Function: equals
     * Returns: bool
     * Arguments:
     *      Object* other : another object
     * Compares this object and another one to see if they are the same.
     */
    virtual bool equals(Object *other);

    /*
     * Function: hash
     * Returns: size_T
     * Arguments:
     * Hash returns a size_t value representing the given object in a form so that any other object pointer
     * that also points to this object, it returns true because they are the same.
     */
    virtual size_t hash();

    /*
     * Function hash_me
     * Returns: size_t
     * Arguments:
     * Hash_me attempts to create a hash for the object when needed.
     */
    size_t hash_me();
};

#endif
