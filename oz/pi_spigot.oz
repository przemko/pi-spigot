declare   

fun lazy {Pi Q R T I}
   U = 3*(3*I+1)*(3*I+2)
   Y = (Q*(27*I-12)+5*R) div (5*T)
in
   Y|{Pi 10*Q*I*(2*I-1) 10*U*(Q*(5*I-2)+R-Y*T) T*U I+1}
end

for D in {List.take {Pi 1 180 60 2} 10000} do
   {Print D}
end

{Show done}

