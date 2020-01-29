#ifndef PART2_ARRAY_H
#define PART2_ARRAY_H

/**
 * Class: Array
 * An array of any class that extends the Object class, so Object and String can all have Arrays.
 */
class Array : public Object {
public:

    /**
     * Constructor: default
     * Arguments:
     * Constructor for creating an empty array.
     */
    Array();

    /**
     * Destructor
     * Arguments:
     * Destructor deletes the object array.
     */
    ~Array();

    /**
     * Function: hash
     * Returns: size_T
     * Arguments:
     * Hash returns a size_t value representing the given list in a form so that any other list that has the same
     * interior elements would have the same hash.
     */
    size_t hash();

    /**
     * Function: equals
     * Returns: bool
     * Arguments:
     *      Object* other : another object
     * Equals compares this array to the given object. First it makes sure that the two objects
     * are both arrays, then it checks the values inside.
     */
    bool equals(Object *o);

    /**
     * Function: getLength
     * Returns: size_t
     * Arguments:
     * GetLength returns the length of the array that is stored in this class.
     */
    size_t getLength();

    /**
     * Function: get
     * Returns: Object*
     * Arguments:
     *       size_t index : index in the array
     * Get returns the element at the given index or errors if that index does not exist.
     */
    Object *get(size_t index);

    /**
     * Function: push_front
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     * Push_front takes the given element and adds it to the front of the array. Checks the type of other objects
     * in the array and if this new object is of a type higher in the hierarchy then the array needs to be changed
     * to match this new type.
     */
    void push_front(Object *element);

    /**
     * Function: push_back
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     * Push_back takes the given element and adds it to the back of the array. Checks the type of other objects
     * in the array and if this new object is of a type higher in the hierarchy then the array needs to be changed
     * to match this new type.
     */
    void push_back(Object *element);

    /**
     * Function: insert
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     * Insert takes the given element and inserts into the array at the given index. Checks the type of other objects
     * in the array and if this new object is of a type higher in the hierarchy then the array needs to be changed
     * to match this new type. Errors if the index does not exist or it is not the index that would come next.
     */
    void insert(Object *element, size_t index);

    /**
     * Function: update
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     *       size_t index : index of element to be replaced
     * Update takes the given element and replaces the element the given index with this element. Checks the type of
     * other objects in the array and if this new object is of a type higher in the hierarchy then the array needs
     * to be changed to match this new type. Errors if the index does not exist.
     */
    void update(Object *element, size_t index);

    /**
     * Function: remove
     * Returns: Object*
     * Arguments:
     *       size_t index : index of element to be replaced
     * Remove removes the element at the given index and returns it. If there is nothing at that index then it
     * throws an error.
     */
    Object *remove(Object *element, size_t index);

    /**
     * Function: clear
     * Returns: void
     * Arguments:
     * Clears the elements in the array, but still keeps the type.
     */
    void clear(Object *element, size_t index);

    /**
     * Function: add_all
     * Returns: void
     * Arguments:
     *      Array* other : an array to add to this one
     * Add_all takes in another array and adds all of its elements to the end of this array. Has one array of the
     * hierarchical type that is the highest from the two arrays.
     */
    void add_all(Array *other);

};

#endif
