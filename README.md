# logs-grammar
Use grammar to parse logs instead of dark regular expression magic

## OSX

By default we will use **clang** C++ compiler. So install **cmake** and **boost** libraries in a way suits better your taste, i.e. **brew**, for that compiler. Then the usual *cmake* commands:

       cd logs-grammar
       mkdir build
       cd build
       cmake ..
       make

**NOTE**: if you happen to work with **Xcode** as **IDE**, remember invoke *cmake* command as:

       cmake -G Xcode ..

## Linux

By default we will use **gcc** C++ compiler. So install **cmake** and **boost** libraries in a way suits better your distro, i.e. **apt-get** or **yum**, for that compiler. Then the usual *cmake* commands reported previously for *OSX*.

**NOTE**: if you happen to work with **NetBeans** as **IDE**, remember import the code as a **cmake** project.

