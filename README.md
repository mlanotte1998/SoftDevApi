# Part 2 Code Description 

At a high level, the api is made for being able to use any type of object in the 
array class that was made. A basic Object class was made along with String to be used
for testing. The String class extends the Object class and this is required for any object
that wants to work with the array because the array holds a list of pointers to objects in memory. So the list has 
pointers to any type of object that is desired. The type of array that the created array has is held
in a member value so that when adding new items or attempting to get items from the array, the character
acting as an enum for the type that tha array is can be used in switch statements to make sure the types 
are what is desired. While this array is very customizable
and new types of objects can be used in it, any time a new object extending class is created, there needs 
to be a change to add that case to the switch statements in the array header. The switch statement for the most
part can be abstracted out because it will always be fairly similar , the only types of behavior that the array
needs a switch statement for is making sure something is the known type and checking the type of something
when adding the first object to an array with no known type. But still adding a new object class requires another
enum and addition to the switch statements. The array class has all of the basic functionality for that an array needs,
including adding values to the front, back, at a certain index, and clearing, removing, and updating elements. 
The array class also had getters for the length, getting elements, and getting the type so that the type can
be known before trying to add an object into the array. 