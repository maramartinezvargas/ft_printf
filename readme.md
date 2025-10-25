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

* Para replicar printf es necesario entender funciones variádicas.
* Se debe usar stdarg.h con va_list, va_start, va_arg y va_end.
* Maneja correctamente punteros y valores nulos ((nil) y (null)).
* No utiliza funciones prohibidas por la Norminette.
* Cumple con las flags: -Wall -Wextra -Werror.
* Es totalmente independiente de printf(3).

---

## 🔹 Funciones variádicas (breve explicación)

Las funciones variádicas permiten que una función reciba un número indeterminado de argumentos, y printf es una función variádica, por lo que entender cómo funcionan internamente es la clave de este proyecto.

En C, se usan principalmente con `stdarg.h`:

- `va_list args;` → Define la lista de argumentos variables.
- `va_start(args, last_fixed_arg);` → Inicializa la lista usando el último argumento fijo.
- `va_arg(args, type);` → Obtiene el siguiente argumento de tipo `type`.
- `va_end(args);` → Finaliza la lista y libera recursos.

En `ft_printf`, se emplean para iterar sobre los argumentos que se pasan según los especificadores de formato (`%s`, `%d`, `%p`, etc.).

---

## 🔹 Flujo de implementación de ft_printf

El flujo de implementación de ft_printf en realidad es sencillo (¡divide y vencerás!).  
Podrás reutilizar funciones de tu [libft](https://github.com/maramartinezvargas/libft) propia que ya hiciste, adaptándolas un poco, ya que ft_printf debe devolver el número de caracteres impresos.  
Bien, el flujo que se ha implementado en mi proyecto es el siguiente:

1. **Recibir el formato y argumentos variables**  
   - Declarar `va_list args;` y usar `va_start(args, format);`.

2. **Recorrer la cadena de formato**  
   - Iterar carácter por carácter.
   - Si el carácter es `%`, procesar el siguiente como especificador de formato.

3. **Delegar al manejador de formatos**  
   - Crear función `ft_format(char c, va_list args)` para cada especificador (`%s`, `%d`, `%p`, etc.).
   - Llamar a la función correspondiente para imprimir el valor.

4. **Imprimir caracteres literales**  
   - Si no es `%`, imprimir directamente usando `ft_putchar`.

5. **Contar caracteres impresos**  
   - Cada función de impresión devuelve el número de caracteres escritos.
   - Sumar al contador total.

6. **Finalizar la lista de argumentos**  
   - Llamar a `va_end(args)` para limpiar recursos.

7. **Devolver el total de caracteres impresos**  
   - `ft_printf` devuelve este valor como `printf` estándar.

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

