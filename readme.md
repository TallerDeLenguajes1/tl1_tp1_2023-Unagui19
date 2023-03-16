## PUNTO2

- ¿Qué es el archivo .gitignore?
El archivo .gitignore, es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto.

- ¿Por qué es conveniente incluirlo?

Porque puede ocurrir que durante nuestro manejo de esos archivos se creen archivos secundarios que se crean por herramientas externas, que no son relevantes y que su información es cambiante con el tiempo y no nos aporta nada.
Por ejemplo, quizás en nuestro repositorio debido a la herramienta que utilizamos, se generan archivos temporales, archivos logs, o similares que no nos sirven para nada y sobre los que no queremos tener control de versiones.
Al editar archivos de nuestro repositorio, quizás el editor que utilizamos genera archivos temporales de recuperación, quizás se generen bases de datos temporales, que tampoco queremos que git les siga el rastro.
Todos esos casos y muchos más se pueden especificar dentro del archivo .gitignore y así indicarle a git que se ahorre el trabajo de controlar esos archivos.

- ¿Cómo configuraría el archivo .gitignore?
Primero creo el archivo , y en el agrego los archivos que quiero que sean ignorados con reglas especificas según el tipo de archivo.