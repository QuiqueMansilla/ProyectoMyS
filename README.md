Repositorio MyS
Se creo el ip cord pwmModule_ip

Se ajusto ip cord led_ip a 1 bit y se lo llamó led1_ip

Se creó poryecto Sistema_pwmModule_ip

se agregaron los siguientes modulos:
	# Zynq
	# pwmModule_ip
	# led1_ip
	# ila_0

Se generó el bitstream --> ok

Se completó el proceso exportando hardware y lanzado el SDK

Se desarrollo el pwm.c a partir de otro modelo y se adaptó a los parámetros del proyecto actual

Se programo la FPGA

Se corrio sobre la placa el proyecto pwm sin errores pero no se puede apreciar le cambio de la señal de salida pwm.

En vivado se abrio el target y se vio la salida pwm hacia el ILA