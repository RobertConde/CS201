# Memory Allocation in C++

_Some interesting memory allocation stuff. Below is just the code snippets._


## Pointers

```c++
int natom;
...

great_function(&natom);
```

```c++
int *natom_address;

natom_address = &natom;
```

```c++
cout << "Number of atoms: " << *natom_address << endl;
```

```c++
natom = 7;
natom_address = &natom;
*natom_address = 10;
cout << "Number of atoms: " << natom << endl;
```


## Arrays

```c++
int zvals[10]; /* declare an array of 10 integers */
...
cout << "The z-value of the first atom is: " << zvals[0] << endl;
```

```c++
cout << "The z-value of the first atom is: " << *zvals << endl;
```

```c++

```

```c++

```

```c++

```


## `new[]` and `delete[]`

```c++

```

```c++

```

```c++

```

```c++

```
...