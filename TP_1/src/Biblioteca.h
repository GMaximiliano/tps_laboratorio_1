/** brief Funcion que contiene el menu de opciones
 */
void MenuPrincipal();

/** \brief Funcion que realiza el costo usando tarjeta de Debito
 * \param y: Precio ingresado para vuelos de Aerolineas
 * \ return retorna el costo con descuento para tarjetas de Debito en Aerolineas
 */
float CostoDebitoAerolineas(float y);

/** \brief Funcion que realiza el costo usando tarjeta de Credito
 * \param y: Precio ingresado para vuelos de Aerolineas
 * \ return retorna el costo con incremento para tarjetas de Credito en Aerolineas
 */
float CostoCreditoAerolineas(float y);

/** \brief Funcion que realiza la conversion del precio a BITCOIN
 * \param y: Precio ingresado para vuelos de Aerolineas
 * return retorna el resultado de la conversion
 */
float CostoBitCoinAerolineas(float y);

/** \brief Funcion que recibe los Kilometros y el precio de vuelos en Aerolineas
 * \param x: km ingresados
 * \param y: Precio ingresado para vuelos de Latam
 * return retorna el precio Unitario entre km y el precio de vuelo
 */
float PrecioUnitarioAerolineas(float x,float y);

/** \brief Funcion que realiza el costo usando tarjeta de Debito
 * \param z: Precio ingresado para vuelos de Latam
 * \ return retorna el costo con descuento para tarjetas de Debito en Latam
 */
float CostoDebitoLatam(float z);

/** \brief Funcion que realiza el costo usando tarjeta de Credito
 * \param z: Precio ingresado para vuelos de Latam
 * \ return retorna el costo con incremento para tarjetas de Credito en Latam
 */
float CostoCreditoLatam(float z);

/** \brief Funcion que realiza la conversion del precio a BITCOIN
 * \param z: Precio ingresado para vuelos de Latam
 * return retorna el resultado de la conversion
 */
float CostoBitCoinLatam(float z);

/** \brief Funcion que recibe los Kilometros y el precio de vuelos en latam
 * \param x: km ingresados
 * \param z: Precio ingresado para vuelos de Latam
 * return retorna el precio Unitario entre km y el precio de vuelo
 */
float PrecioUnitarioLatam(float x,float z);

/** \brief Funcion que pide un numero y lo valida
 * \param char mensaje[] vector que recibe una cadena de caracteres
 * return retorna el numero ingresado
 */
float PedirYValidarNumero(char mensaje[]);
