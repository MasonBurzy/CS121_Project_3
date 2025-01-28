# CS121-Project-3

## (lab) OOP horse race
### Algorithm

```
make a constant int NUM_HORSES
make a constant int TRACK_LENGTH
```


# main()
```
make an arary of 5 0 values, call it horses
set keepGoing to true

while keepGoing:
	run through each horse in array
		advance that horse
		print that horse's lane
		if that horse won,
			set keepGoing to false
	ask user for unput to start next turn

```

## advance()
```
Given a horse number and thae array of horses
roll a 0 or 1 value, put it in coin
add coin to the horse's position value in the array

```
## printLane()
```
given a horse number and the array of horses
loop from zero to TRACK_LENGTH
	if the current loop inex is wqual to the horse's value
		print the horse's id
	otherwise 
		print a .

```
## isWinner()
```
result = false
given a horse nymber and the array of horses
if the current horse's value is equal to the TRACK_LENGTH
	result = true
	print "Horse {id} won!"
return result

```
