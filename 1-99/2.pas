program tsyfry;
var n:int64; k:integer;
begin
readln(n); if n=0 then k:=1 else begin
k:=0;
while n<>0 do
begin
n:=n div 10;
inc(k);
end;
end;
writeln(k);
end.
