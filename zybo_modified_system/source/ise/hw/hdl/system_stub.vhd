-------------------------------------------------------------------------------
-- system_stub.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

entity system_stub is
  port (
    SWs_4Bits_TRI_IO : inout std_logic_vector(3 downto 0);
    BTNs_4Bits_TRI_IO : inout std_logic_vector(3 downto 0);
    processing_system7_0_MIO : inout std_logic_vector(53 downto 0);
    processing_system7_0_PS_SRSTB : in std_logic;
    processing_system7_0_PS_CLK : in std_logic;
    processing_system7_0_PS_PORB : in std_logic;
    processing_system7_0_DDR_Clk : inout std_logic;
    processing_system7_0_DDR_Clk_n : inout std_logic;
    processing_system7_0_DDR_CKE : inout std_logic;
    processing_system7_0_DDR_CS_n : inout std_logic;
    processing_system7_0_DDR_RAS_n : inout std_logic;
    processing_system7_0_DDR_CAS_n : inout std_logic;
    processing_system7_0_DDR_WEB_pin : out std_logic;
    processing_system7_0_DDR_BankAddr : inout std_logic_vector(2 downto 0);
    processing_system7_0_DDR_Addr : inout std_logic_vector(14 downto 0);
    processing_system7_0_DDR_ODT : inout std_logic;
    processing_system7_0_DDR_DRSTB : inout std_logic;
    processing_system7_0_DDR_DQ : inout std_logic_vector(31 downto 0);
    processing_system7_0_DDR_DM : inout std_logic_vector(3 downto 0);
    processing_system7_0_DDR_DQS : inout std_logic_vector(3 downto 0);
    processing_system7_0_DDR_DQS_n : inout std_logic_vector(3 downto 0);
    processing_system7_0_DDR_VRN : inout std_logic;
    processing_system7_0_DDR_VRP : inout std_logic;
    axi_dispctrl_0_RED_O_pin : out std_logic_vector(4 downto 0);
    axi_dispctrl_0_GREEN_O_pin : out std_logic_vector(5 downto 0);
    axi_dispctrl_0_VSYNC_O_pin : out std_logic;
    axi_dispctrl_0_BLUE_O_pin : out std_logic_vector(4 downto 0);
    axi_dispctrl_0_HSYNC_O_pin : out std_logic;
    LEDs_4Bits_TRI_IO : inout std_logic_vector(3 downto 0);
    hdmi_tx_0_HDMI_D2_P_pin : out std_logic;
    hdmi_tx_0_HDMI_CLK_P_pin : out std_logic;
    hdmi_tx_0_HDMI_D2_N_pin : out std_logic;
    hdmi_tx_0_HDMI_D1_P_pin : out std_logic;
    hdmi_tx_0_HDMI_D1_N_pin : out std_logic;
    hdmi_tx_0_HDMI_D0_P_pin : out std_logic;
    hdmi_tx_0_HDMI_D0_N_pin : out std_logic;
    hdmi_tx_0_HDMI_CLK_N_pin : out std_logic;
    hdmi_oen : out std_logic;
    AC_SDA : inout std_logic;
    AC_SCL : inout std_logic;
    AC_MCLK : out std_logic;
    AC_BCLK : out std_logic;
    AC_RECLRC : out std_logic;
    AC_SDATA_O : out std_logic;
    AC_SDATA_I : in std_logic;
    AC_PBLRC : out std_logic;
    AC_MUTE_N : out std_logic
  );
end system_stub;

architecture STRUCTURE of system_stub is

  component system is
    port (
      SWs_4Bits_TRI_IO : inout std_logic_vector(3 downto 0);
      BTNs_4Bits_TRI_IO : inout std_logic_vector(3 downto 0);
      processing_system7_0_MIO : inout std_logic_vector(53 downto 0);
      processing_system7_0_PS_SRSTB : in std_logic;
      processing_system7_0_PS_CLK : in std_logic;
      processing_system7_0_PS_PORB : in std_logic;
      processing_system7_0_DDR_Clk : inout std_logic;
      processing_system7_0_DDR_Clk_n : inout std_logic;
      processing_system7_0_DDR_CKE : inout std_logic;
      processing_system7_0_DDR_CS_n : inout std_logic;
      processing_system7_0_DDR_RAS_n : inout std_logic;
      processing_system7_0_DDR_CAS_n : inout std_logic;
      processing_system7_0_DDR_WEB_pin : out std_logic;
      processing_system7_0_DDR_BankAddr : inout std_logic_vector(2 downto 0);
      processing_system7_0_DDR_Addr : inout std_logic_vector(14 downto 0);
      processing_system7_0_DDR_ODT : inout std_logic;
      processing_system7_0_DDR_DRSTB : inout std_logic;
      processing_system7_0_DDR_DQ : inout std_logic_vector(31 downto 0);
      processing_system7_0_DDR_DM : inout std_logic_vector(3 downto 0);
      processing_system7_0_DDR_DQS : inout std_logic_vector(3 downto 0);
      processing_system7_0_DDR_DQS_n : inout std_logic_vector(3 downto 0);
      processing_system7_0_DDR_VRN : inout std_logic;
      processing_system7_0_DDR_VRP : inout std_logic;
      axi_dispctrl_0_RED_O_pin : out std_logic_vector(4 downto 0);
      axi_dispctrl_0_GREEN_O_pin : out std_logic_vector(5 downto 0);
      axi_dispctrl_0_VSYNC_O_pin : out std_logic;
      axi_dispctrl_0_BLUE_O_pin : out std_logic_vector(4 downto 0);
      axi_dispctrl_0_HSYNC_O_pin : out std_logic;
      LEDs_4Bits_TRI_IO : inout std_logic_vector(3 downto 0);
      hdmi_tx_0_HDMI_D2_P_pin : out std_logic;
      hdmi_tx_0_HDMI_CLK_P_pin : out std_logic;
      hdmi_tx_0_HDMI_D2_N_pin : out std_logic;
      hdmi_tx_0_HDMI_D1_P_pin : out std_logic;
      hdmi_tx_0_HDMI_D1_N_pin : out std_logic;
      hdmi_tx_0_HDMI_D0_P_pin : out std_logic;
      hdmi_tx_0_HDMI_D0_N_pin : out std_logic;
      hdmi_tx_0_HDMI_CLK_N_pin : out std_logic;
      hdmi_oen : out std_logic;
      AC_SDA : inout std_logic;
      AC_SCL : inout std_logic;
      AC_MCLK : out std_logic;
      AC_BCLK : out std_logic;
      AC_RECLRC : out std_logic;
      AC_SDATA_O : out std_logic;
      AC_SDATA_I : in std_logic;
      AC_PBLRC : out std_logic;
      AC_MUTE_N : out std_logic
    );
  end component;

  attribute BOX_TYPE : STRING;
  attribute BOX_TYPE of system : component is "user_black_box";

begin

  system_i : system
    port map (
      SWs_4Bits_TRI_IO => SWs_4Bits_TRI_IO,
      BTNs_4Bits_TRI_IO => BTNs_4Bits_TRI_IO,
      processing_system7_0_MIO => processing_system7_0_MIO,
      processing_system7_0_PS_SRSTB => processing_system7_0_PS_SRSTB,
      processing_system7_0_PS_CLK => processing_system7_0_PS_CLK,
      processing_system7_0_PS_PORB => processing_system7_0_PS_PORB,
      processing_system7_0_DDR_Clk => processing_system7_0_DDR_Clk,
      processing_system7_0_DDR_Clk_n => processing_system7_0_DDR_Clk_n,
      processing_system7_0_DDR_CKE => processing_system7_0_DDR_CKE,
      processing_system7_0_DDR_CS_n => processing_system7_0_DDR_CS_n,
      processing_system7_0_DDR_RAS_n => processing_system7_0_DDR_RAS_n,
      processing_system7_0_DDR_CAS_n => processing_system7_0_DDR_CAS_n,
      processing_system7_0_DDR_WEB_pin => processing_system7_0_DDR_WEB_pin,
      processing_system7_0_DDR_BankAddr => processing_system7_0_DDR_BankAddr,
      processing_system7_0_DDR_Addr => processing_system7_0_DDR_Addr,
      processing_system7_0_DDR_ODT => processing_system7_0_DDR_ODT,
      processing_system7_0_DDR_DRSTB => processing_system7_0_DDR_DRSTB,
      processing_system7_0_DDR_DQ => processing_system7_0_DDR_DQ,
      processing_system7_0_DDR_DM => processing_system7_0_DDR_DM,
      processing_system7_0_DDR_DQS => processing_system7_0_DDR_DQS,
      processing_system7_0_DDR_DQS_n => processing_system7_0_DDR_DQS_n,
      processing_system7_0_DDR_VRN => processing_system7_0_DDR_VRN,
      processing_system7_0_DDR_VRP => processing_system7_0_DDR_VRP,
      axi_dispctrl_0_RED_O_pin => axi_dispctrl_0_RED_O_pin,
      axi_dispctrl_0_GREEN_O_pin => axi_dispctrl_0_GREEN_O_pin,
      axi_dispctrl_0_VSYNC_O_pin => axi_dispctrl_0_VSYNC_O_pin,
      axi_dispctrl_0_BLUE_O_pin => axi_dispctrl_0_BLUE_O_pin,
      axi_dispctrl_0_HSYNC_O_pin => axi_dispctrl_0_HSYNC_O_pin,
      LEDs_4Bits_TRI_IO => LEDs_4Bits_TRI_IO,
      hdmi_tx_0_HDMI_D2_P_pin => hdmi_tx_0_HDMI_D2_P_pin,
      hdmi_tx_0_HDMI_CLK_P_pin => hdmi_tx_0_HDMI_CLK_P_pin,
      hdmi_tx_0_HDMI_D2_N_pin => hdmi_tx_0_HDMI_D2_N_pin,
      hdmi_tx_0_HDMI_D1_P_pin => hdmi_tx_0_HDMI_D1_P_pin,
      hdmi_tx_0_HDMI_D1_N_pin => hdmi_tx_0_HDMI_D1_N_pin,
      hdmi_tx_0_HDMI_D0_P_pin => hdmi_tx_0_HDMI_D0_P_pin,
      hdmi_tx_0_HDMI_D0_N_pin => hdmi_tx_0_HDMI_D0_N_pin,
      hdmi_tx_0_HDMI_CLK_N_pin => hdmi_tx_0_HDMI_CLK_N_pin,
      hdmi_oen => hdmi_oen,
      AC_SDA => AC_SDA,
      AC_SCL => AC_SCL,
      AC_MCLK => AC_MCLK,
      AC_BCLK => AC_BCLK,
      AC_RECLRC => AC_RECLRC,
      AC_SDATA_O => AC_SDATA_O,
      AC_SDATA_I => AC_SDATA_I,
      AC_PBLRC => AC_PBLRC,
      AC_MUTE_N => AC_MUTE_N
    );

end architecture STRUCTURE;

