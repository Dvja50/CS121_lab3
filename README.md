# CS121_lab3
## Algorithim for procedural horse race
## data
```
make a constant int NUM_HORSES
make a constant int TRACK_LENGTH
```

```
# main()
```

make an array of 5 0 values, call it horses
set keepGoing to true

while keepGoing:
         run through each horse in array:
         advance that horse
         print that horses lane
         if that horse won
         set keepGoing to false
         ask user for input to start next turn
```
##advance()
```
        given a horse number and the array of horses
        roll a 0 or 1 value, put it in coin
        add coin to the horse's position value in the array
```
## printlane()
```
given a horse number and the array of horses
loop from zero to TRACK_LENGTH
        if the current loop index is equal to the horse's value
        print the horses id
        otherwise
        print a .
```

##isWinner()
```
        result = false
        given a horse number and the array of horses if the current horses value is equal to the TRACK_LENGTH
        result = true
        print "Horse {id} won!"
        return result
```