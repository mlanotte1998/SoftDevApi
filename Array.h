#ifndef PART2_ARRAY_H
#define PART2_ARRAY_H

/**
 * Class: Array
 * An array of any class that extends the Object class and holds arrays of objects.
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
     * Push_front takes the given element and adds it to the front of the array.
     */
    void push_front(Object *element);

    /**
     * Function: push_back
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     * Push_back takes the given element and adds it to the back of the array.
     */
    void push_back(Object *element);

    /**
     * Function: insert
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     * Insert takes the given element and inserts into the array at the given index.
     */
    void insert(Object *element, size_t index);

    /**
     * Function: update
     * Returns: void
     * Arguments:
     *       Object* element : element to be added
     *       size_t index : index of element to be replaced
     * Update takes the given element and replaces the element the given index with this element.
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
    Object *remove(size_t index);

    /**
     * Function: clear
     * Returns: void
     * Arguments:
     * Clears the elements in the array.
     */
    void clear();

    /**
     * Function: add_all
     * Returns: void
     * Arguments:
     *      Array* other : an array to add to this one
     * Add_all takes in another array and adds all of its elements to the end of this array.
     */
    void add_all(Array *other);

};

/**
 * Class: IntArray
 * An array of any class that extends the Object class and holds an array of Integers.
 */
class IntArray : public Object {
public:

    /**
     * Constructor: default
     * Arguments:
     * Constructor for creating an empty int array.
     */
    IntArray();

    /**
     * Destructor
     * Arguments:
     * Destructor deletes the int array.
     */
    ~IntArray();

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
     * are both int arrays, then it checks the values inside.
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
     * Returns: int
     * Arguments:
     *       size_t index : index in the array
     * Get returns the int at the given index or errors if that index does not exist.
     */
    int get(size_t index);

    /**
     * Function: push_front
     * Returns: void
     * Arguments:
     *       int element : element to be added
     * Push_front takes the given int and adds it to the front of the array.
     */
    void push_front(int element);

    /**
     * Function: push_front
     * Returns: void
     * Arguments:
     *       int element : element to be added
     * Push_back takes the given int and adds it to the back of the array.
     */
    void push_back(int element);

    /**
     * Function: insert
     * Returns: void
     * Arguments:
     *       int element : element to be added
     *       size_t index : index that the int should be added at.
     * Insert takes the given int and inserts into the array at the given index.
     */
    void insert(int element, size_t index);

    /**
     * Function: update
     * Returns: void
     * Arguments:
     *       int element : element to be added
     *       size_t index : index of element to be replaced
     * Update takes the given int and replaces the int at the given index with this new int.
     */
    void update(int element, size_t index);

    /**
     * Function: remove
     * Returns: int
     * Arguments:
     *       size_t index : index of int to be removed
     * Remove removes the int at the given index and returns it. If there is nothing at that index then it
     * throws an error.
     */
    int remove(size_t index);

    /**
     * Function: clear
     * Returns: void
     * Arguments:
     * Clears the elements in the array.
     */
    void clear();

    /**
     * Function: add_all
     * Returns: void
     * Arguments:
     *      Array* other : an array to add to this one
     * Add_all takes in another IntArray and adds all of its elements to the end of this array.
     */
    void add_all(IntArray *other);

};

/**
 * Class: BoolArray
 * An array of any class that extends the Object class and holds an array of Booleans.
 */
class BoolArray : public Object {
public:

    /**
     * Constructor: default
     * Arguments:
     * Constructor for creating an empty bool array.
     */
    BoolArray();

    /**
     * Destructor
     * Arguments:
     * Destructor deletes the bool array.
     */
    ~BoolArray();

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
     * are both bool arrays, then it checks the values inside.
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
     * Returns: bool
     * Arguments:
     *       size_t index : index in the array
     * Get returns the boolean at the given index or errors if that index does not exist.
     */
    bool *get(size_t index);

    /**
     * Function: push_front
     * Returns: void
     * Arguments:
     *       bool element : element to be added
     * Push_front takes the given bool and adds it to the front of the array.
     */
    void push_front(bool element);

    /**
     * Function: push_front
     * Returns: void
     * Arguments:
     *       bool element : element to be added
     * Push_back takes the given bool and adds it to the back of the array.
     */
    void push_back(bool element);

    /**
     * Function: insert
     * Returns: void
     * Arguments:
     *       bool element : element to be added
     *       size_t index : index that the bool should be added at.
     * Insert takes the given bool and inserts into the array at the given index.
     */
    void insert(bool element, size_t index);

    /**
     * Function: update
     * Returns: void
     * Arguments:
     *       bool element : element to be added
     *       size_t index : index of element to be replaced
     * Update takes the given bool and replaces the bool at the given index with this new bool.
     */
    void update(bool element, size_t index);

    /**
     * Function: remove
     * Returns: bool
     * Arguments:
     *       size_t index : index of bool to be removed
     * Remove removes the bool at the given index and returns it. If there is nothing at that index then it
     * throws an error.
     */
    bool remove(size_t index);

    /**
     * Function: clear
     * Returns: void
     * Arguments:
     * Clears the elements in the array.
     */
    void clear();

    /**
     * Function: add_all
     * Returns: void
     * Arguments:
     *      Array* other : an array to add to this one
     * Add_all takes in another BoolArray and adds all of its elements to the end of this array.
     */
    void add_all(BoolArray *other);

};

/**
 * Class: FloatArray
 * An array of any class that extends the Object class and holds an array of Floats.
 */
class FloatArray : public Object {
public:

    /**
     * Constructor: default
     * Arguments:
     * Constructor for creating an empty float array.
     */
    FloatArray();

    /**
     * Destructor
     * Arguments:
     * Destructor deletes the float array.
     */
    ~FloatArray();

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
     * are both float arrays, then it checks the values inside.
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
     * Returns: float
     * Arguments:
     *       size_t index : index in the array
     * Get returns the float at the given index or errors if that index does not exist.
     */
    float get(size_t index);

    /**
     * Function: push_front
     * Returns: void
     * Arguments:
     *       float element : element to be added
     * Push_front takes the given float and adds it to the front of the array.
     */
    void push_front(float element);

    /**
     * Function: push_front
     * Returns: void
     * Arguments:
     *       float element : element to be added
     * Push_back takes the given float and adds it to the back of the array.
     */
    void push_back(float element);

    /**
     * Function: insert
     * Returns: void
     * Arguments:
     *       float element : element to be added
     *       size_t index : index that the float should be added at.
     * Insert takes the given float and inserts into the array at the given index.
     */
    void insert(float element, size_t index);

    /**
     * Function: update
     * Returns: void
     * Arguments:
     *       float element : element to be added
     *       size_t index : index of element to be replaced
     * Update takes the given float and replaces the float at the given index with this new float.
     */
    void update(float element, size_t index);

    /**
     * Function: remove
     * Returns: float
     * Arguments:
     *       size_t index : index of float to be removed
     * Remove removes the float at the given index and returns it. If there is nothing at that index then it
     * throws an error.
     */
    float remove(size_t index);

    /**
     * Function: clear
     * Returns: void
     * Arguments:
     * Clears the elements in the array.
     */
    void clear();

    /**
     * Function: add_all
     * Returns: void
     * Arguments:
     *      Array* other : an array to add to this one
     * Add_all takes in another FloatArray and adds all of its elements to the end of this array.
     */
    void add_all(FloatArray *other);

};

#endif
