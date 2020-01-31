# Part 2 Code Description 

At a high level, the api is made for being able to use any type of object in the 
array class that was made. A basic Object class was made along with String to be used
for testing. The String class extends the Object class and this is required for any object
that wants to work with the array because the array holds a list of pointers to objects in memory. So the list has 
pointers to any type of object that is desired. So any object (including a string) can be passed into the main array. Primitives on the other hand work with their respective primitive type array: IntArray, BoolArray, and FloatArray. Each of those has return values corresponding to the primitive of that array instead of objects and also only that primitive can be passed in when adding elements to the array. 
This design allows for a few ways to implement the api. Each array could hold actual arrays of the primitives, or under the hood there could be objects made for each primitive that get passed into a normal object array. 
