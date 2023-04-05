# Applications 
### Tries are used to implement data structures and algorithms like dictionaries, lookup tables, matching algorithms, etc. 
### They are also used for many practical applications like auto-complete in editors and mobile applications. 
### They are used inphone book search applications where efficient searching of a large number of records is required.


Suppose we want to insert string abc in our hashmap. To do so, first, we would need to calculate the hashcode for it, which would 
require the traversal of the whole string abc. Hence, the time taken will be the length of the entire string irrespective of the
time taken to perform any of the above operations. Thus, we can conclude that the insertion of a string will be O(string_length).

To search a word in the hashmap, we again have to calculate the hashcode of the string to be searched, and for that also, 
it would require O(string_length) time. Similarly, for removing a word from the hashmap, we would have to calculate the hashcode for that string. 
It would again require O(string_length) time. For the same purpose, we can use another data structure known as tries.
