let test = [|
  "latin",
  "banana",
  "trash",
  "happy",
  "duck",
  "dopest",
  "me",
  "too",
  "will",
  "moist",
  "wet",
  "real",
  "simple",
  "say",
  "words"
|];

let test2 = [|"cheers", "shesh", "smile", "string", "thanks", "stupid", "glove"|];

let test3 = [|"eat", "omelet", "are", "egg", "explain", "always", "ends"|];

let consonant = [|
  "b",
  "c",
  "d",
  "f",
  "g",
  "h",
  "j",
  "l",
  "m",
  "n",
  "p",
  "q",
  "r",
  "s",
  "t",
  "v",
  "w",
  "x",
  "z"
|];

let rec foo = (a, b) =>
  if (a === "") {
    b ++ "ay"
  } else {
    switch (List.find((x) => x === Char.escaped(a.[0]), Array.to_list(consonant))) {
    | exception Not_found => a ++ b ++ "ay"
    | x => foo(String.sub(a, 1, String.length(a) - 1), b ++ x)
    }
  };

let piglatin = (array) => Array.map((x) => foo(x, ""), array);

Js.log(piglatin(Array.append(Array.append(test, test2), test3)));