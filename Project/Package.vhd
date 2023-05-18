----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:47:59 01/23/2023 
-- Design Name: 
-- Module Name:    Package - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;
use IEEE.math_real.all  ;

PACKAGE My_Package IS
    type pic_type is array (0 to 127 , 0 to 127) of real;
    type three_three is array (0 to 2 , 0 to 2) of real;
	 type result_type is array (0 to 125,0 to 125) of real;
	 type array_of_real is array (0 to 3) of real; -- N = 4
	 type array_of_filters is array(INTEGER RANGE <>) of three_three;
END My_Package;

package body My_Package is
    function GetWindow (N: integer; pic_in: pic_type) return array_of_filters is
        variable window : three_three ;
		  variable result : array_of_filters(N-1 downto 0);
    begin
	 for m in 0 to N-1 loop
		for i in 0 to 125 loop
			for j in 0 to 125 loop
			  for x in 0 to 2 loop
					for y in 0 to 2 loop
						 window(x , y) := pic_in(i+x , j+y);
					end loop;
			  end loop;
			  result(m) := window;
			 end loop;
			end loop;
		end loop;
        return result ;
    end function ;
	 function generate_random_filter(N : integer) return array_of_filters is
			variable r : real;
        variable o : three_three ;
        variable intx : integer ;
		  variable seed1 : integer := 0;
		  variable seed2 : integer := 100;
		  variable result : array_of_filters(N-1 downto 0);
		  variable tmp : real;
			begin
			for j in 0 to N-1 loop
			  for i in 0 to 2 loop
						uniform(seed1 , seed2, r );
						intx := integer(floor(r* real(2**3)));
						tmp := real(intx);
						for j in 0 to 2 loop
							o(i , j) := tmp;
						end loop;
				 end loop ;
				 result(j) := o;
			end loop;
        return result;
	 end function;
end My_Package;
    