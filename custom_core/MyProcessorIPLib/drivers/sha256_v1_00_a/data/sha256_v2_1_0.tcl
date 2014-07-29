##############################################################################
## Filename:          /home/arlininger/FPGA/ZYBO/custom_core/MyProcessorIPLib/drivers/sha256_v1_00_a/data/sha256_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Thu Jul 24 19:08:12 2014 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "sha256" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
