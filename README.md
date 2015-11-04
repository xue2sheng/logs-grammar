# logs-grammar

Use grammar to parse logs instead of dark regular expression magic.

## Install

In the very beginning, the focus will be on **Linux** platforms for **gcc** and **OSX** for **clang**. Later on **Solaris** will be tackle, including *fake* **cross-compilation** for mixing *Solaris* and *gcc* binaries.

Related to **IDE**'s, **Netbeans** will be tested on **Linux** (local) and **Solaris** (remote). On **OSX** **Xcode** will be used instead.

If there is time left, **Windows** might be tested as well once its planned **clang** support is included on its *Community Edition* for **Visual Studio**.

### Install on OSX

By default we will use **clang** C++ compiler. So install **cmake** and **boost** libraries in a way suits better your taste, i.e. **brew**, for that compiler. Then the usual *cmake* commands:

       cd logs-grammar
       mkdir build
       cd build
       cmake ..
       make

**NOTE**: if you happen to work with **Xcode** as **IDE**, remember invoke *cmake* command as:

       cmake -G Xcode ..

### Install on Linux

By default we will use **gcc** C++ compiler. So install **cmake** and **boost** libraries in a way suits better your distro, i.e. **apt-get** or **yum**, for that compiler. Then the usual *cmake* commands reported previously for *OSX*:

       cd logs-grammar
       mkdir build
       cd build
       cmake ..
       make

**NOTE**: if you happen to work with **NetBeans** as **IDE**, remember import the code as a **cmake** project.

## Binaries 

Just a **C++11** project, based on **boost** libraries for code and **unit tests**. It's build using **cmake** utility so you can check out binaries with:

       cd logs-grammar/build
       src/logs-grammar

And unit test with:

       cd logs-grammar/build 
       test/unitTest

But you'd better use a more friendly **IDE** as **Xcode** or **NetBeans**.
