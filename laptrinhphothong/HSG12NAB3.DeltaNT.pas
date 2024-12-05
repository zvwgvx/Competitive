Var i, j, n : Longint;
    dem : Qword;
    a : Array[1..500] Of Int64;

Function kt(n : Longint) : Boolean;
Var i : Longint;
Begin
    If (n = 2) or (n = 3) then Exit(True);
    If (n mod 2 = 0) or (n mod 3 = 0) or (n < 2) then Exit(False);
    i := 5;
    While Sqr(i) <= n do
    Begin
        If (n mod i = 0 ) or (n mod (i + 2) = 0) then Exit(False); inc(i, 6);
    End;
    Exit(True);
End;

Begin
    Readln(n);
    For i := 1 to n do Read(a[i]);
    For i := 1 to n - 1 do
        For j := i + 1 to n do
            If Kt(Abs(a[i] - a[j])) then inc(dem, 1);
    Write(dem);
End.