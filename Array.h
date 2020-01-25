#ifndef PART2_ARRAY_H
#define PART2_ARRAY_H

/*
 * Class: Array
 * An array of any class that extends the Object class, so Object and String can all have Arrays.
 */
class Array : public Object {
public:

    Object *array_; // the inner array of Objects.
    size_t length_; // the length of the string.
    char type_: // The type of array it is, with a char representing different classes.
            // For example, object is O and String is S.

            /*
             * Constructor: default
             * Arguments:
             * Constructor for creating an array that has an unknown type for now and a empty length.
             */
            Array();

    /*
     * Constructor: type known
     * Arguments:
     *       type : char representing the type of object that this array will be for.
     * Constructor with the type set already and an empty length.
     */
    Array(char type);

    /*
     * Destructor
     * Arguments:
     * Destructor deletes the object array.
     */
    ~Array();

    /*
     * Function: hash
     * Returns: size_T
     * Arguments:
     * Hash returns a size_t value representing the given list in a form so that any other list that has the same
     * interior elements would have the same hash.
     */
    size_t hash();

    /*
     * Function: equals
     * Returns: bool
     * Arguments:
     *      Object* other : another object
     * Equals compares this array to the given object. First it makes sure the given object is also a array, if it is
     * and the list held inside is the same as the list held inside this array then it returns true, otherwise it
     * returns false.
     */
    bool equals(Object *o);

    /*
     * Function: getLength
     * Returns: size_t
     * Arguments:
     * GetLength returns the length of the array that is stored in this class.
     */
    size_t getLength();

    /*
     * Function: getLength
     * Returns: char
     * Arguments:
     * GetType returns the type of the array that the objects in the array are of.
     */
    char getType();

    /*
     * Function: get
     * Returns: Object*
     * Arguments:
     *       size_t index : index in the array
     * Get returns the element at the given index or errors if that index does not exist.
     */
    Object *get(size_t index);

    /*
     * Function: push_front
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     * Push_front takes the given element and adds it to the front of the array. Error if the element cannot be cast
     * into the the type that the array is then it throws an error. If the type is not defined yet for the list then the
     * type becomes the type that this object is.
     */
    void push_front(Object *element);

    /*
     * Function: push_back
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     * Push_back takes the given element and adds it to the back of the array. If the element cannot be cast
     * into the the type that the array is then it throws an error. If the type is not defined yet for the list then the
     * type becomes the type that this object is.
     */
    void push_back(Object *element);

    /*
     * Function: insert
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     * Insert takes the given element and inserts into the array at the given index. Error if the element cannot
     * be cast into the the type that the array is then it throws an error. If the index does not exist then throw an
     * error. If the type is not defined yet for the list then the type becomes the type that this object is.
     */
    void insert(Object *element, size_t index);

    /*
     * Function: update
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     *       size_t index : index of element to be replaced
     * update takes the given element and replaces the element the given index with this element. Error if the element
     * cannot be cast into the the type that the array is then it throws an error. If the index does not exist then
     * throw an error.
     */
    void update(Object *element, size_t index);

    /*
     * Function: remove
     * Returns: Object*
     * Arguments:
     *       size_t index : index of element to be replaced
     * Remove removes the element at the given index and returns it. If there is nothing at that index then it
     * throws an error.
     */
    Object *remove(Object *element, size_t index);

    /*
     * Function: clear
     * Returns: void
     * Arguments:
     * Clears the elements in the array, but still keeps the type.
     */
    void clear(Object *element, size_t index);

    /*
     * Function: clear
     * Returns: void
     * Arguments:
     * Clears the elements in the array, but still keeps the type.
     */
    void clear(Object *element, size_t index);

    /*
     * Function: add_all
     * Returns: void
     * Arguments:
     *      Array* other : an array to add to this one
     * Add_all takes in another array and adds all of its elements to the end of this array. If the type of the other
     * array is not the same then throw an error.
     */
    void add_all(Array *other);

};

#endif
