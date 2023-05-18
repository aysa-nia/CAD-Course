----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:38:23 01/23/2023 
-- Design Name: 
-- Module Name:    PE - Behavioral 
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
use Work.My_Package.all;
use IEEE.numeric_std.all;
--USE ieee.std_logic_unsigned.all;
--use IEEE.STD_LOGIC_ARITH.ALL;
--use IEEE.math_real.all  ;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity PE is
    Port ( weight_filter : in  three_three;
           window : in  three_three;
			  output : out real);
end PE;

architecture Behavioral of PE is

begin
	process(weight_filter , window)
		variable tmp : real;
		begin
			for i in 0 to 2 loop
				for j in 0 to 2 loop
					tmp := tmp + (weight_filter(i , j) * window(i , j)) ;
				end loop;
			end loop;
			if integer(tmp) < 0 then
				tmp:= real(0);
			end if;
			output<= tmp;
	end process;
end Behavioral;

