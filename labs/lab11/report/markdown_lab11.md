## **Отчёт по лабораторной работе №11**
#### **Дугина Виктория Игоревна**
**Цель работы**: изучить основы программирования в оболочке ОС UNIX. Научится писать более
сложные командные файлы с использованием логических управляющих конструкций
и циклов.


### **Выполнение работы**

#### 1. Используя команды getopts grep, написать командный файл, который анализирует командную строку с ключами.
<p>
<img src="Screens/1.1.png" width="770">
<em>Рис 1.1</em>
</p>

Работа программы.
<p>
<img src="Screens/1.2.png" width="770">
<em>Рис 1.2</em>
</p>

#### 2. Написать на языке Си программу, которая вводит число и определяет, является ли оно больше нуля, меньше нуля или равно нулю. Затем программа завершается с помощью функции exit(n), передавая информацию в о коде завершения в оболочку. Командный файл должен вызывать эту программу и, проанализировав с помощью команды $?, выдать сообщение о том, какое число было введено.

<p>
<img src="Screens/2.1.png" width="770">
<em>Рис 2.1 - Код Си</em>
</p>

<p>
<img src="Screens/2.2.png" width="770">
<em>Рис 2.2 - Код</em>
</p>

Работа программы. Программа запущена дважды.
<p>
<img src="Screens/2.3.png" width="770">
<em>Рис 2.3</em>
</p>

#### 3. Написать командный файл, создающий указанное число файлов, пронумерованных последовательно от 1 до 𝑁 (например 1.tmp, 2.tmp, 3.tmp,4.tmp и т.д.). Число файлов, которые необходимо создать, передаётся в аргументы командной строки. Этот же командный файл должен уметь удалять все созданные им файлы.

<p>
<img src="Screens/3.1.png" width="770">
<em>Рис 3.1 - Код</em>
</p>

Работа программы.
<p>
<img src="Screens/3.2.png" width="770">
<em>Рис 3.2</em>
</p>

Созданные файлы.
<p>
<img src="Screens/3.3.png" width="770">
<em>Рис 3.3</em>
</p>

#### 4. Написать командный файл, который с помощью команды tar запаковывает в архив все файлы в указанной директории. Модифицировать его так, чтобы запаковывались только те файлы, которые были изменены менее недели тому назад (использовать команду find).

**Вывод**: я изучила основы программирования в оболочке ОС UNIX. Научилась писать более
сложные командные файлы с использованием логических управляющих конструкций
и циклов.

### **Контрольные вопросы**
#### 1. Каково предназначение команды getopts?
#### 2. Какое отношение метасимволы имеют к генерации имён файлов?
#### 3. Какие операторы управления действиями вы знаете?
#### 4. Какие операторы используются для прерывания цикла?
#### 5. Для чего нужны команды false и true?
#### 6. Что означает строка if test -f man$s/$i.$s, встреченная в командном файле?
#### 7. Объясните различия между конструкциями while и until.
