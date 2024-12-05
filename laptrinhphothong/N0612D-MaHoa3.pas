uses crt;
var s, t : string; 
n, i, a, e : longint;
begin
    clrscr;
    readln(s);
    n := length(s);
    repeat
        inc(i, 2);
        t := s[i - 1] + s[i];
        if t < '97' then
            begin inc(i); t := t + s[i]; end;
        val(t, a, e); write(chr(a));
    until i >= n;
readln
end.
    