# THIS FILE IS AUTOMATICALLY GENERATED
<<<<<<< HEAD
# Project: C:\Users\mechatoro\Documents\PSoC Creator\rotary_enc_hard\rotary_enc_hard.cydsn\rotary_enc_hard.cyprj
# Date: Thu, 19 Apr 2018 03:16:13 GMT
#set_units -time ns
create_clock -name {Clock_2(routed)} -period 200000000 -waveform {0 100000000} [list [get_pins {ClockBlock/dclk_3}]]
=======
# Project: C:\Users\mechatoro\Documents\PSoC Creator\rotary_enc_hard_for_git\PSoC_rotaryenc_PI\rotary_enc_hard.cydsn\rotary_enc_hard.cyprj
# Date: Sun, 22 Apr 2018 00:57:23 GMT
#set_units -time ns
create_clock -name {Clock_2(routed)} -period 100000000 -waveform {0 50000000} [list [get_pins {ClockBlock/dclk_3}]]
>>>>>>> bde16a60fc9443ec2d8f488d376a61c4e0b16aa3
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 9 17} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {UART_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 313 627} [list [get_pins {ClockBlock/dclk_glb_1}]]
create_generated_clock -name {Clock_3} -source [get_pins {ClockBlock/clk_sync}] -edges {1 481 961} [list [get_pins {ClockBlock/dclk_glb_2}]]
<<<<<<< HEAD
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/clk_sync}] -edges {1 4800001 9600001} [list [get_pins {ClockBlock/dclk_glb_3}]]


# Component constraints for C:\Users\mechatoro\Documents\PSoC Creator\rotary_enc_hard\rotary_enc_hard.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\mechatoro\Documents\PSoC Creator\rotary_enc_hard\rotary_enc_hard.cydsn\rotary_enc_hard.cyprj
# Date: Thu, 19 Apr 2018 03:16:00 GMT
=======
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2400001 4800001} [list [get_pins {ClockBlock/dclk_glb_3}]]


# Component constraints for C:\Users\mechatoro\Documents\PSoC Creator\rotary_enc_hard_for_git\PSoC_rotaryenc_PI\rotary_enc_hard.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\mechatoro\Documents\PSoC Creator\rotary_enc_hard_for_git\PSoC_rotaryenc_PI\rotary_enc_hard.cydsn\rotary_enc_hard.cyprj
# Date: Sun, 22 Apr 2018 00:57:10 GMT
>>>>>>> bde16a60fc9443ec2d8f488d376a61c4e0b16aa3
