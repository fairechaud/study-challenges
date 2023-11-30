
Go's paradigm is a mix of several ideas, rather than strictly adhering to one. This causes confusion, as it has features reminiscent of Object-Oriented Programming (OOP), but works very differently under the hood. Here's a breakdown for someone coming from OOP:

1. No Classes, But There Are 'Types' and 'Methods':

Go has structs to bundle data, and functions attached to them called methods. This looks like a class, but...
There's no inheritance hierarchy. No class Animal that Dog inherits from.
Instead, composition is used: one struct can be embedded in another, gaining its fields/methods.
This is more flexible than strict inheritance, but requires different thinking about code organization.
2. Interfaces Are NOT Contracts Like in OOP:

In OOP, an interface defines what methods a class MUST have. In Go, it's more like a capability check.
Any type, regardless of its structure, can implement an interface as long as it has the required methods, even if they're from embedding, not its own definition.
This makes Go duck typing: if it walks like a duck (has the methods), it's treated AS a duck, regardless of its underlying type.
This is powerful for decoupling code, but can be confusing if you expect interfaces to dictate strict type relationships like in OOP.
3. Go Favors Composition Over Inheritance:

This is a core principle of the language. Rather than deep hierarchies, small, composable pieces are preferred.
This leads to less emphasis on 'encapsulation' (hiding internal data) common in OOP, as data is often passed around explicitly.
Some find this less elegant, but it forces thinking about data flow, which is good for concurrency (Go's strong suit).
4. Concurrency Is a First-Class Citizen:

Go makes it easy to run tasks simultaneously, with language features supporting this style.
This IS NOT the same as parallelism (using multiple CPU cores), but about managing many tasks, which OOP isn't designed for.
If your OOP background is single-threaded, this is Go's biggest mental shift.
5. Go Is More Pragmatic Than Dogmatic:

It has OOP-like features for convenience, but doesn't enforce that strict paradigm.
It's opinionated about some things (explicitness over magic), but gives you tools rather than enforcing a Grand Unified Theory of Programming™.
In conclusion, coming from OOP, initially mimic OOP-style to get comfortable, then gradually embrace Go's composition and concurrency mindset. Don't fight the language, use its strengths!

Go, often referred to as Golang, is a programming language that indeed follows a different paradigm compared to traditional Object-Oriented Programming (OOP) languages like Java or C++. Here's an overview of how Go's paradigm differs from OOP:

Go's Programming Paradigm
Procedural with Some Object-Oriented Features: Go is primarily a procedural programming language but it incorporates some features of object-oriented programming. However, it does not follow the OOP paradigm in the traditional sense.

No Class-Object Model: Unlike traditional OOP languages that use a class-based system, Go does not have classes. Instead, it uses structs to bundle related data together.

Methods on Structs: In Go, you can define methods on structs. This is similar to how methods are defined on classes in OOP, but there's no inheritance involved.

Composition over Inheritance: Go prefers composition over inheritance. It uses a concept called embedding to compose structures. This is different from the inheritance model used in traditional OOP, where objects inherit properties and behaviors from parent classes.

Interfaces Are Implicit: Go uses interfaces, but they are much more flexible compared to OOP languages. In Go, a type implements an interface simply by implementing the interface's methods. There's no need to explicitly declare that a type implements an interface.

Concurrency Model: Go has a strong emphasis on concurrency, facilitated by goroutines and channels. This approach to concurrency is quite different from the model used in traditional OOP languages.

Comparison with OOP
Inheritance vs. Composition: OOP relies heavily on inheritance for reusability and polymorphism, whereas Go encourages composition.

Class-Based vs. Struct-Based: OOP uses a class-based system for defining and creating objects, while Go uses structs without the concept of classes.

Encapsulation: Both paradigms support encapsulation, but the approach differs. In OOP, encapsulation is often enforced through access modifiers (like private, protected, public), while Go uses a more convention-based approach (capitalized names for exported members).

Polymorphism: OOP achieves polymorphism through inheritance and interfaces. Go also supports polymorphism but primarily through interfaces and type assertions.

Explicit vs. Implicit Interfaces: In OOP, a class must explicitly declare that it implements an interface, whereas, in Go, this implementation is implicit.

In summary, Go offers a unique blend of procedural programming with some aspects of OOP, focusing on simplicity, efficiency, and ease of concurrency. It avoids the complexity of traditional OOP, especially around inheritance and type hierarchy, favoring a more straightforward and flexible approach.