----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:59:28 01/23/2023 
-- Design Name: 
-- Module Name:    Rasht - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;
use IEEE.math_real.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Rasht is
	port (pes: in array_of_real;
			result_out : out real);
end Rasht;


architecture Behavioral of Rasht is
function tree_adder (pes : array_of_real ; start_idx , end_idx : integer) return real is
	variable left : real;
	variable right : real;
	variable mid : integer;
	variable tmp1 : real;
	variable tmp2 : real;
	begin
		if end_idx - start_idx + 1 = 2 then
			tmp1:= pes(start_idx);
			tmp2 := pes(end_idx);
			return tmp1 + tmp2;
		else 
			mid := (start_idx + end_idx)/2;
			 left:= tree_adder(pes , start_idx , mid );
			 right := tree_adder(pes , mid + 1 , end_idx);
			 return left + right;
		end if;
	end tree_adder;
begin
	
	result_out <= tree_adder(pes , 0 , pes'length -1);
end Behavioral;

