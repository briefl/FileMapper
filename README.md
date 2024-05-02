# FileMapper

FileMapper - это фреймворк, упрощающий открытие файлов через различные приложения. Он предоставляет удобный интерфейс для регистрации приложений, управления форматами файлов и открытия файлов с помощью зарегистрированных приложений.

# Описание

Демо-приложение позволяет зарегистрировать программы для определенных форматов файлов и определять системные приложение по умолчанию для каждого формата. Кроме того, оно позволяет открывать файлы с помощью зарегистрированных приложений.

# Установка

Расммотрим установку на Linux Unbuntu
Скачайте и установите бесплатную комьюните версию Qt Framework.(https://www.qt.io/product/framework)
![изображение](https://github.com/briefl/FileMapper/assets/168663803/b3618322-8c44-4e8f-b808-d41a5f91d22d)

Далее вам понадобиться Git, откройте терминал:

Установите Git с помощью данной команды
```
$ sudo apt install git
```
Далее перейдите в папку, в которую вы хотите клонировать репризиторий
```
$ cd /путь/к/вашей/папке
```
Клонируйте туда git-репризиторий
```
$ git clone https://github.com/briefl/FileMapper.git
```
готово

# Использование

Перейдите в папку, в которую вы клонировали git репризиторий и найдите там папку Build
![изображение](https://github.com/briefl/FileMapper/assets/168663803/c8607f45-64cc-4942-a1be-e6b3d0490fd5)
Перейдите в неё, и в следующую папку Desktop_Qt_6_8_0-Debug.
![изображение](https://github.com/briefl/FileMapper/assets/168663803/3ed33dbc-18c9-4861-b0b0-b422c3dce689)
Откройте файл FileMapper. Готово, приложение запущено.(Убедитесь что в свойствах файла, переключатель включен на "Исполняемый как приложение"
![изображение](https://github.com/briefl/FileMapper/assets/168663803/7b39f90b-4d69-4c81-8145-f5b9a1d5a696)

![изображение](https://github.com/briefl/FileMapper/assets/168663803/1b18d7b6-6e7d-4b40-b646-d2c33b56f632)


# Примеры

Рассмотрим пример работы в Linux Unbuntu, в котором пользователь хочет открыть файл формата txt, предварительно дав понять приложению с помощью чего его открывать
![изображение](https://github.com/briefl/FileMapper/assets/168663803/cf4dcba8-088f-407d-8cbb-9cd54ecc097e)
Здесь мы вводим путь к исполняемому файлу приложения, в данном случае к Текстовому редактору и формат данных, который должен открываться через это приложение, то есть txt

Нажмём кнопку Register Application и после Show Registered Formats
![изображение](https://github.com/briefl/FileMapper/assets/168663803/e33420f8-50c8-4ada-8559-399a9dfb26d0)
Теперь приложение Текстовый редактор зарегестрировано для открытия файлов .txt и мы можем открыть какой-либо файл указав к нему путь и нажать на кнопку Open File
![изображение](https://github.com/briefl/FileMapper/assets/168663803/5586b4e2-a116-45fd-ad3c-5a8b62b7de50)

В этом примеры мы зарегестрировали приложение Libre Office Writer для открытия txt файлов и вот что получилось
![изображение](https://github.com/briefl/FileMapper/assets/168663803/75f8b49f-ef73-4597-95e2-6fea81892d12)

Также, если пользователь укажет путь к файлу, на формат которого не зарегестрировано ни одно приложение, то программа откроет его через приложение по умолчанию для этого формата и также зарегестрирует дефолтное приложение для него
![изображение](https://github.com/briefl/FileMapper/assets/168663803/f00e0840-ee08-48b5-9e30-3c1b7c890dcc)

