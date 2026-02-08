# a) char a {'q'};
'q' is constant
a is not constant

# b) const int b {0};
0 is constant
b is constant

# c) const double c {5.0};
5.0 is constant
c is not constant

# d) const int d {a*2};
a*2 is not constant
d is not constant

# e) int e {c+1.0};
c+1.0 is not constant
e is not constant

# f) const int f {d*2};
d*2 is constant
f is constant

# g) const int g {getNumber()};
getNumber() is not constant
g is not constant

# h) const int h {};
{} is not categorized whether it is constant or not constant because there is no explicit initializer here
h is constant