# logs-grammar

Use grammar to parse logs instead of dark regular expression magic.

![Grammar](images/grammar.png)
<!-- java -jar /opt/plantuml/plantuml.jar README.md -o images -->
<!--
@startuml grammar.png
top to bottom direction
skinparam packageStyle rect
actor "Different experts\non several features" as E 
rectangle "Grammar" {
E -left-> (Business\nLogic) : Knownledge\non client's systems 
(Business\nLogic) .> (Grammar\nRules)  
}
note top of (Business\nLogic)
    Knownledge on
expected log entries
end note
note top of (Grammar\nRules)
       Written in a way that
let us resuse them several times
end note
rectangle "Software\nUnder\nTest" as SUT {
(Raw\nLogs)
}
actor "Logs\nAnalytics" as LA
rectangle "Tools" {
(Raw\nLogs)  -down-> (Binary) : complex\nlogs
(Grammar\nRules) -> (Library) : automatic\nbuild
(Library) .> (Binary) 
(Binary) -down-> LA : simpler\nlogs
}
note bottom of (Library)
 Choose at real-time
what libraries to use
end note
@enduml
-->

## Install

In the very beginning, the focus will be on **Linux** platforms for **gcc** and **OSX** for **clang**. Later on **Solaris** will be tackle, including *fake* **cross-compilation** for mixing *Solaris* and *gcc* binaries.

![Solaris installation](images/fake-cross-compilation)
<!--
@startuml fake-cross-compilation.png
top to bottom direction
rectangle "Solaris\non esteroids"  {
(C++11\nlibraries) as C11L 
}
rectangle "Client-like\nSolaris" {
(Production\nlibraries) as PL
}
C11L .> PL : STATIC\nCompiled\nBINARIES
@enduml
-->

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
