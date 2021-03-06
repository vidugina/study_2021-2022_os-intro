## **Отчёт по лабораторной работе №3(2)**
#### **Дугина Виктория Игоревна**
**Цель работы**: изучить идеологию и применение средств контроля версий и освоить умения по работе с git.

### **Выполнение работы**
1. Настройка github
Создаём учётную запись на https://github.com.
<p>
<img src="Screens/1.1.png" width="770">
<em>Рис 1.1</em>
</p>

2. Установка программного обеспечения
- Установка git-flow в Fedora Linux
<p>
<img src="Screens/2.1.png" width="770">
<em>Рис 2.1</em>
</p>

- Установка gh в Fedora Linux
<p>
<img src="Screens/2.2.png" width="770">
<em>Рис 2.2</em>
</p>

3. Базовая настройка git
Задаём имя и email, настраиваем utf-8 в выводе сообщений git, настраиваем верификацию и подписание коммитов git, задаём имя начальной ветки (master), параметры autocrlf и safecrlf.
<p>
<img src="Screens/3.1.png" width="770">
<em>Рис 3.1</em>
</p>

4. Создайте ключи ssh
- по алгоритму rsa с ключём размером 4096 бит
<p>
<img src="Screens/4.1.png" width="770">
<em>Рис 4.1</em>
</p>

- по алгоритму ed25519
<p>
<img src="Screens/4.2.png" width="770">
<em>Рис 4.2</em>
</p>

5. Создайте ключи pgp
<p>
<img src="Screens/5.1.png" width="770">
<em>Рис 5.1</em>
</p>

6. Добавление PGP ключа в GitHub
Выводим список ключей и копируем отпечаток приватного ключа и копируем сгенерированный PGP ключ в буфер обмена.
<p>
<img src="Screens/6.1.png" width="770">
<em>Рис 6.1</em>
</p>

Переходим в настройки GitHub (https://github.com/settings/keys), нажимаем кнопку New GPG key и вставляем полученный ключ в поле ввода.
<p>
<img src="Screens/6.2.png" width="770">
<em>Рис 6.2</em>
</p>

7. Настройка автоматических подписей коммитов git
<p>
<img src="Screens/7.1.png" width="770">
<em>Рис 7.1</em>
</p>

8. Настройка gh
<p>
<img src="Screens/8.1.png" width="770">
<em>Рис 8.1</em>
</p>

9. Шаблон для рабочего пространства
- Создание репозитория курса на основе шаблона
Создаём шаблон рабочего пространства и репозиторий.
<p>
<img src="Screens/9.1.png" width="770">
<em>Рис 9.1</em>
</p>

- Настройка каталога курса
Переходим в каталог курса, удаляем лишние файлы, создаём необходимые каталоги и отправляем файлы на сервер.
<p>
<img src="Screens/9.2.png" width="770">
<em>Рис 9.2</em>
</p>
<p>
<img src="Screens/9.3.png" width="770">
<em>Рис 9.3</em>
</p>

**Вывод**: я изучила идеологию и применение средств контроля версий и освоила умения по работе с git.