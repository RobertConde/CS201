# Sort Template with Callback

youtube stuff

https://www.youtube.com/embed/Tp3HCeeqyDs

```c++
template <typename myType>
int OperatorCmp(Type one, Type two)
{
	if (one == two) return 0;
	return (one < two ? -1 : 1);
}

template <typename myType>
void Sort(Vector<Type>,
        int (cmp)(Type one, Type two) = OperatorCmp)
        {
	for()
        }

```