Construir una aplicación que a partir de las especificaciones de un 
vehículo calcule su coeficiente impositivo y su valor de mercado. 
Se tienen autos, camionetas y camiones. 

coeficiente_impositivo = (precio_base * cilindrada) / 1000000

valor_mercado auto = (coeficiente_impositivo * precio_base * combustible) /   (1 + 0.001 * kilometraje)
valor_mercado camioneta = 3*(coeficiente_impositivo * precio_base) / (kilometraje + cilindrada)*0.003)
valor_mercado camion = (coeficiente_impositivo * precio_base) / ((kilometraje + cilindrada + combustible)*0.002)

Donde precio base:
auto 1000
camioneta 1500
camion 2000
