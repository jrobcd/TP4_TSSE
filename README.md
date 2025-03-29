# TP2

## Uso del repositorio

Este repositorio utiliza [pre-commit](https://pre-commit.com) para validaciones de formato. Para trabajar con el mismo usted debería tener instalado:

1. pre-commit (https://pre-commit.com/#install)

Después de clonar el repositorio usted debería ejecutar el siguiente comando:

```
pre-commit install
```

Para generar la documentación del proyecto se utiliza el siguiente comando:

```
make doc

```

Para `compilar` el proyecto se utiliza el siguiente comando:

```
make all
```


### Funcionalidades Básicas
| Prueba | Estado | Descripción |
|--------|--------|-------------|
| `INIT` | ✅ | Todos los LEDs deben iniciar apagados |
| `LED_ON` | ✅ | Encender un LED individual |
| `LED_OFF` | ✅ | Apagar un LED individual |
| `LED_GET_STATE` | ✅ | Consultar estado de un LED |

### Funcionalidades Avanzadas
| Prueba | Estado | Descripción |
|--------|--------|-------------|
| `MULTI_LED` | ✅ | Control simultáneo de múltiples LEDs |
| `ALL_ON` | ✅ | Encender todos los LEDs simultáneamente |
| `ALL_OFF` | ✅ | Apagar todos los LEDs simultáneamente |


## License

This work is distributed under the terms of the [MIT](https://spdx.org/licenses/MIT.html) license.
