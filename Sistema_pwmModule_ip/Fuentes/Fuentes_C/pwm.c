#include "xparameters.h"
#include "xil_io.h"
#include "pwm_ip.h"
 

//====================================================

int main (void) {

	//int pwm_out;
	int modulo = 15;
	int duty = 7;
	int enable = 1;
	//int i;

    xil_printf("-- Inicio del programa para validar el uso de IP cores propios --\r\n");
 
    PWM_IP_mWriteReg(XPAR_PWM_IP_0_S00_AXI_BASEADDR, PWM_IP_S00_AXI_SLV_REG0_OFFSET, modulo);
    PWM_IP_mWriteReg(XPAR_PWM_IP_0_S00_AXI_BASEADDR, PWM_IP_S00_AXI_SLV_REG1_OFFSET, duty);
    PWM_IP_mWriteReg(XPAR_PWM_IP_0_S00_AXI_BASEADDR, PWM_IP_S00_AXI_SLV_REG2_OFFSET, enable);
    //pwm_out = PWMMODULE_IP_mReadReg(XPAR_PWM_IP_0_S00_AXI_BASEADDR, PWMMODULE_IP_S_AXI_SLV_REG3_OFFSET);

    xil_printf("modulo, duty, enable: %d , %d , %d\r\n", modulo, duty, enable);

 
}
 
