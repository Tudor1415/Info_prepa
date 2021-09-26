(* Question 4*)

(* Q4.1 *)
let prod t =
    let len = Array.length t in
    let result = ref 1 in
    for i=0 to len-1 do
        result := t.(i) * !result
    done;
    !result

let quotient a b =
    let q = ref 0 in
    if a > 0 then
       let tmp = ref a in
       while !tmp > 0 do
          if b > 0 then
             tmp := !tmp - b;
          else
             tmp := !tmp + b;
          q := !q + 1
       done;
    else
       let tmp = ref -a in
       while !tmp > 0 do
          if b > 0 then
             tmp := !tmp - !b;
          else
             tmp := !tmp + !b;
          q := !q + 1
       done;
    !q
