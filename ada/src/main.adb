with Ada.Integer_Text_IO;
with Spigot;

procedure Main is
   X : Integer;
begin
   loop
      Spigot.Pi.Get (Digit => X);
      Ada.Integer_Text_IO.Put (Item => X, Width => 1);
   end loop;
end Main;
