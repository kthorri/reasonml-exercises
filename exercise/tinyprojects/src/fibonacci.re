let rec f = (i) => {
    switch (i) {
        | 0 => 0
        | 1 => 1
        | _ => f(i-1) + f(i-2)
    };
};

for (i in 0 to 10) {
    Js.log(f(i));
}