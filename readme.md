## 🖨️ ft_printf <img src="https://media.giphy.com/media/26tPplGWjN0xLybiU/giphy.gif" width="30px"/>

Implementación de la función `printf` en C, desarrollada como parte de los proyectos del cursus de **42 Madrid**.  
Reproduce el comportamiento de la función original de la librería estándar, gestionando varios tipos de formato y devolviendo el número total de caracteres impresos.

---

## ⚙️ Compilación y uso

```bash
make
````

Esto genera la librería estática:

```
libftprintf.a
```

Para probarla:

```bash
gcc -Wall -Wextra -Werror main.c libftprintf.a
./a.out
```

---

## 🧩 Estructura del proyecto

```
.
├── Makefile
├── ft_printf.c
├── ft_format.c
├── ft_printf.h
├── print_char_str.c
├── print_int_base.c
└── print_pointer.c
```

---

## 📚 Especificadores soportados

| Especificador | Descripción                                                |
| ------------: | ---------------------------------------------------------- |
|          `%c` | Imprime un carácter                                        |
|          `%s` | Imprime una cadena de caracteres                           |
|          `%p` | Imprime un puntero en hexadecimal (`0x...`)                |
|   `%d` / `%i` | Imprime un número entero con signo                         |
|          `%u` | Imprime un número entero sin signo                         |
|   `%x` / `%X` | Imprime un número en hexadecimal (minúsculas / mayúsculas) |
|          `%%` | Imprime el carácter `%`                                    |

---

## 🧠 Detalles técnicos

* Maneja correctamente punteros y valores nulos (`(nil)` y `(null)`).
* No utiliza funciones prohibidas por la Norminette.
* Cumple con las flags: `-Wall -Wextra -Werror`.
* Es totalmente independiente de `printf(3)`.

---

## 💡 Ejemplo de uso

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hola %s, el número es %d y el puntero %p\n", "Mara", 42, &count);
    ft_printf("Total de caracteres impresos: %d\n", count);
    return 0;
}
```

---

## 🛠️ Tecnologías usadas

![C](https://img.shields.io/badge/-C-A8B9CC?style=for-the-badge\&logo=c\&logoColor=white)
![Makefile](https://img.shields.io/badge/-Makefile-000000?style=for-the-badge\&logo=gnu-make\&logoColor=white)

---

## 👩‍💻 Autor

**Mara Martínez (tamamart)**
📧 `tamamart@student.42madrid.com`

