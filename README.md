Repositorio MyS

Proyecto Sistema_pwmModule

Se creo el ip cord pwm_ip

Se creó poryecto Sistema_pwmModule

se agregaron los siguientes modulos:
	# Zynq
	# pwm_ip
	# ila_0

Se generó el bitstream --> ok

Se completó el proceso exportando hardware y lanzado el SDK

Se desarrollo el pwm.c a partir de otro modelo y se adaptó a los parámetros del proyecto actual

Se programo la FPGA

Se corrio sobre la placa el proyecto pwm sin errores.

En vivado se abrio el target y se vio la salida pwm hacia el ILA

No se observa la salida en el ILA, por falta de tiempo, queda pendiente resolver ese asunto.
El IP Core pwm_ip fue modificado y se corrigió el problema de que faltaba su salida para la señal pwm.
Deberia funcionar, ya que todo se rehizo desde cero varias veces, y se ajusto lo que habia que ajustar y se corriegio lo que habia que corregir.
