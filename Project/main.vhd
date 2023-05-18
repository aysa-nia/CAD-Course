----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:21:03 01/23/2023 
-- Design Name: 
-- Module Name:    main - Behavioral 
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
use IEEE.math_real.all  ;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity main is
	generic( N : integer := 4);
	port (picture_in : in pic_type ;
			pic_out : out result_type);
end main;

architecture Behavioral of main is
	type array_of_pe is array (0 to N -1 ) of array_of_real;
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
		  variable seed1 : integer := 1;
		  variable seed2 : integer := 100;
		  variable result : array_of_filters(N-1 downto 0);
		  variable tmp : real;
			begin
			for j in 0 to N-1 loop
			  for i in 0 to 2 loop
						uniform(seed1 , seed2, r );
						intx := integer(floor(r* real(2**3)));
						tmp := real(intx );
						for j in 0 to 2 loop
							o(i , j) := tmp;
						end loop;
				 end loop ;
				 result(j) := o;
			end loop;
        return result;
	 end function;
	component PE is
		 Port ( weight_filter : in  three_three;
				  window : in  three_three;
				  output : out real);
	end component;
	component Rasht is
		port (pes: in array_of_real ;
				result_out : out real);
	end component;
	signal pe_out : array_of_pe;
	signal filters_array : array_of_filters(N-1 downto 0);
	signal window_array : array_of_filters(N-1 downto 0);
	signal rasht_out_array : array_of_real;
begin
	filters_array <= generate_random_filter(N);
	window_array <= GetWindow(N ,picture_in);
	col_generate : for i in 0 to N -1 generate
		row_generate : for j in 0 to N-1 generate --architecture due to number of filters
			PE1 : PE port map(filters_array(j) , window_array(i), pe_out(i)(j));
		end generate;
			Rasht1 : Rasht port map (pe_out(i) ,  rasht_out_array(i));
	end generate;
	process is
		begin
			for i in 0 to 125 loop
				for j in 0 to 125 loop
					pic_out(i ,j) <= rasht_out_array( 125 * i + j);
				end loop;
			end loop;
		wait;
	end process;
end Behavioral;

