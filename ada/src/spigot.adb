with GNATCOLL.GMP.Integers;      use GNATCOLL.GMP.Integers;
with GNATCOLL.GMP.Integers.Misc; use GNATCOLL.GMP.Integers.Misc;

package body Spigot is

   task body Pi is
      Q, R, T, I     : Big_Integer;
      Q2, R2         : Big_Integer;
      U, Y           : Big_Integer;
   begin
      Set (Q, 1); Set (R, 180); Set (T, 60); Set (I, 2);
      loop
         Set (U, 3 * (3 * I + 1) * (3 * I + 2));
         Set (Y, (Q * (27 * I - 12) + 5 * R) / (5 * T));
         accept Get (Digit : out Integer) do
            Digit := Integer (As_Signed_Long (Y));
         end Get;
         Set (Q2, 10 * Q * I * (2 * I - 1));
         Set (R2, 10 * U * (Q * (5 * I - 2) + R - Y * T));
         Set (T, T * U);
         Set (I, I + 1);
         Set (Q, Q2); Set (R, R2); 
      end loop;
   end Pi;

end Spigot;

