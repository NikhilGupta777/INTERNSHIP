/*
[1]: Basic declaration of lambda fun (^)

    auto add = [](int a, int b)
    {          ^
        return a + b;
    };

[2]: (=) & call by value and ref by int and (&)

    auto add = [=](int a)
    {
        return x + y + a;
    };
    cout << "Sum : " << add(5) << endl; // output : sum = 35

    auto addByRef = [&x, &y](int a)
    {
        x = 30; // modifying x
        return x + y + a;
    };

[3]: sort function

    sort(numbers.begin(), numbers.end(), [](int a, int b)
         { return a < b; });

[4]: mutable to make a copy of a variable and make it changeable

    auto modifyX = [x]() mutable
    {
        x = 20; // this modifies the local copy of x, not the original one (x)
        cout << "Inside Lambda, x = " << x << endl;
    };

[5]: static_cast(changes the datatype(conversion of the variables to another))

    auto divide = [](int a, int b) -> double
    {
        if (b == 0)
        {
            return 0;
        }
        return static_cast<double>(a) / b;
    };

[6]: for_each (for simple iteration of the numbers and to be sorted)

    for_each(numbers.begin(), numbers.end(), [](int n)
             { cout << n << " "; });

[7]: lambda to find the first even number

    auto it = find_if(numbers.begin(), numbers.end(), [](int n)
                      {
                          return n % 2 == 0; // predicate to find even numbers
                      });


*/