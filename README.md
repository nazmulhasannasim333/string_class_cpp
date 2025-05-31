## C++ String Built-in Functions

The C++ `std::string` class provides a variety of built-in functions for working with strings efficiently. Here’s a concise reference for common string operations:

### Capacity Functions

| Function         | Description                                         |
|------------------|-----------------------------------------------------|
| `s.size()`       | Returns the number of characters in the string.     |
| `s.max_size()`   | Returns the maximum number of characters possible.  |
| `s.capacity()`   | Returns the current allocated storage capacity.     |
| `s.clear()`      | Removes all characters, making the string empty.    |
| `s.empty()`      | Checks if the string is empty (`true`/`false`).     |
| `s.resize(n)`    | Changes the string size to `n` characters.          |

### Element Access

| Function         | Description                                         |
|------------------|-----------------------------------------------------|
| `s[i]`           | Accesses the character at index `i`.                |
| `s.at(i)`        | Safely accesses the character at index `i`.         |
| `s.back()`       | Returns the last character.                         |
| `s.front()`      | Returns the first character.                        |

### Modifiers

| Function             | Description                                       |
|----------------------|---------------------------------------------------|
| `s += t`             | Appends string `t` to `s`.                        |
| `s.append(t)`        | Appends string `t` to `s`.                        |
| `s.push_back(c)`     | Adds character `c` to the end.                    |
| `s.pop_back()`       | Removes the last character.                       |
| `s = t`              | Assigns string `t` to `s`.                        |
| `s.assign(t)`        | Assigns string `t` to `s`.                        |
| `s.erase(pos, len)`  | Removes `len` characters from position `pos`.     |
| `s.replace(pos, len, t)` | Replaces `len` characters at `pos` with `t`.  |
| `s.insert(pos, t)`   | Inserts string `t` at position `pos`.             |

### Iterators

| Function         | Description                                             |
|------------------|--------------------------------------------------------|
| `s.begin()`      | Returns an iterator to the first character.            |
| `s.end()`        | Returns an iterator past the last character.           |

---

**Example Usage:**
```cpp
std::string s = "hello";
s.push_back('!');
std::cout << s; // Output: hello!
```

> *Tip: Refer to [cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string) for the full documentation on `std::string` methods.*
