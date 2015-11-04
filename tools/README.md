# TOOLS

Some extra tools will be used to make our lives easier.

## PlantUML

In order to generate **Graphs** from **UML** pure text inputs, [PlantUML](http://plantuml.com) will be used. Have a look to its [PDF documentation](PlantUML_Language_Reference_Guide.pdf) for further details.

**NOTE:** Don't forget to install **graphviz** utilities, as **dot**, before using *plantuml*.

Provided **plantuml jar file** is saved on */opt/plantuml* folder, you can invoke its help with the following command:

        java -jar /opt/plantuml/plantuml.jar -help

The typical command will look like:

        java -jar /opt/plantuml/plantuml.jar README.md -o images

## RevealJS

In order to generate **Slides** reusing **Markdown** and **PlantUML** from *README.md* files, [RevealJS](https://github.com/hakimel/reveal.js) will be used.

