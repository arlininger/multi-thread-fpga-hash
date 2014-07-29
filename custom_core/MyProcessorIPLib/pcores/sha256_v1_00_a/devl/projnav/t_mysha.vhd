----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:31:18 07/24/2014 
-- Design Name: 
-- Module Name:    t_mysha - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity t_mysha is
end t_mysha;

architecture Behavioral of t_mysha is

component mysha is
   port(
   m      : in  bit_vector ( 31 downto 0); -- 32 bit data path require 16 clock to load all 512 bits of each block
   init   : in  bit;                       --    initial message
   ld     : in  bit;                       --    load signal
   md     : out bit_vector ( 31 downto 0); --    5 clock after active valid signal is the message hash result
   v      : out bit;                       --    hash output valid signal one clock advance
   clk    : in  bit;                       --    master clock signal
   rst    : in  bit                        --    master reset signal
   );
	end component;

	signal m      : bit_vector ( 31 downto 0); -- 32 bit data path require 16 clock to load all 512 bits of each block
	signal init   : bit;                       --    initial message
	signal ld     : bit;                       --    load signal
	signal md     : bit_vector ( 31 downto 0); --    5 clock after active valid signal is the message hash result
	signal v      : bit;                       --    hash output valid signal one clock advance
	signal clk    : bit;                       --    master clock signal
	signal rst    : bit;                       --    master reset signal

	constant CLOCK_PERIOD : time := 10 ns;
begin


	process
	begin
		clk <= '0';
		wait for CLOCK_PERIOD/2;
		clk <= '1';
		wait for CLOCK_PERIOD/2;
	end process;
--		message_block <= x"6162638000000000000000000000000000000000000000000000000000000018";

	process
		variable I : integer;
	begin
		ld <= '0';
		rst <= '1';
		m <= x"00000000";
		init <= '1';
		wait for CLOCK_PERIOD * 0.3;
		wait for CLOCK_PERIOD;
		rst <= '0';
		init <= '0';
		ld <= '1';
		m <= x"61626380";
		wait for CLOCK_PERIOD;
		for I in 0 to 15 loop 
			case I is
				when 0  => 
					m <= x"61626380";
					--init <= '1';
				when 15 => 
					m <= x"00000018";
				when others => m <= x"00000000";
			end case;
			wait for CLOCK_PERIOD;
		end loop;
		m <= x"00000000";
		init <= '0';
		ld <= '0';
		wait;
	end process;

	UNT: mysha port map (
		clk => clk,
		ld => ld,
		m => m,
		md => md,
		init => init,
		v => v,
		rst => rst
	);

end Behavioral;

