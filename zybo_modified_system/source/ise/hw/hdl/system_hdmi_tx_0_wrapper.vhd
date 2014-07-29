-------------------------------------------------------------------------------
-- system_hdmi_tx_0_wrapper.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

library hdmi_tx_v1_00_a;
use hdmi_tx_v1_00_a.all;

entity system_hdmi_tx_0_wrapper is
  port (
    PXLCLK_5X_I : in std_logic;
    PXLCLK_I : in std_logic;
    LOCKED_I : in std_logic;
    RST_I : in std_logic;
    HDMI_CLK_P : out std_logic;
    HDMI_CLK_N : out std_logic;
    HDMI_D2_P : out std_logic;
    HDMI_D2_N : out std_logic;
    HDMI_D1_P : out std_logic;
    HDMI_D1_N : out std_logic;
    HDMI_D0_P : out std_logic;
    HDMI_D0_N : out std_logic;
    VGA_HS : in std_logic;
    VGA_VS : in std_logic;
    VGA_DE : in std_logic;
    VGA_R : in std_logic_vector(7 downto 0);
    VGA_G : in std_logic_vector(7 downto 0);
    VGA_B : in std_logic_vector(7 downto 0)
  );
end system_hdmi_tx_0_wrapper;

architecture STRUCTURE of system_hdmi_tx_0_wrapper is

  component hdmi_tx is
    port (
      PXLCLK_5X_I : in std_logic;
      PXLCLK_I : in std_logic;
      LOCKED_I : in std_logic;
      RST_I : in std_logic;
      HDMI_CLK_P : out std_logic;
      HDMI_CLK_N : out std_logic;
      HDMI_D2_P : out std_logic;
      HDMI_D2_N : out std_logic;
      HDMI_D1_P : out std_logic;
      HDMI_D1_N : out std_logic;
      HDMI_D0_P : out std_logic;
      HDMI_D0_N : out std_logic;
      VGA_HS : in std_logic;
      VGA_VS : in std_logic;
      VGA_DE : in std_logic;
      VGA_R : in std_logic_vector(7 downto 0);
      VGA_G : in std_logic_vector(7 downto 0);
      VGA_B : in std_logic_vector(7 downto 0)
    );
  end component;

begin

  hdmi_tx_0 : hdmi_tx
    port map (
      PXLCLK_5X_I => PXLCLK_5X_I,
      PXLCLK_I => PXLCLK_I,
      LOCKED_I => LOCKED_I,
      RST_I => RST_I,
      HDMI_CLK_P => HDMI_CLK_P,
      HDMI_CLK_N => HDMI_CLK_N,
      HDMI_D2_P => HDMI_D2_P,
      HDMI_D2_N => HDMI_D2_N,
      HDMI_D1_P => HDMI_D1_P,
      HDMI_D1_N => HDMI_D1_N,
      HDMI_D0_P => HDMI_D0_P,
      HDMI_D0_N => HDMI_D0_N,
      VGA_HS => VGA_HS,
      VGA_VS => VGA_VS,
      VGA_DE => VGA_DE,
      VGA_R => VGA_R,
      VGA_G => VGA_G,
      VGA_B => VGA_B
    );

end architecture STRUCTURE;

