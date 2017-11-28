let test = [|"latin", "banana", "trash", "happy", "duck", "dopest", "me", "too", "will", "moist", "wet", "real", "simple", "say", "words"|];
let test2 = [|"cheers", "shesh", "smile", "string", "thanks", "stupid", "glove"|];
let test3 = [|"eat", "omelet", "are", "egg", "explain", "always", "ends"|];

let consonant = [|"b", "c", "d", "f", "g", "h", "j", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "z"|];

let pigLatin = (arr) => {
    Array.map(item => {
        switch(Js.Array.find(element => element == String.sub(item, 0, 1), consonant)) {
            | (None) => item ++ "yay"
            | (Some(_)) => {
                if (Js.Array.find(element => element == String.sub(item, 1, 1), consonant) != None) {
                    String.sub(item, 2, String.length(item) - 2) ++ String.sub(item, 0, 2) ++ "ay"
                } else {
                    String.sub(item, 1, String.length(item) - 1) ++ String.sub(item, 0, 1) ++ "ay"
                }
        
            }
        }
        
    }, arr)
};

Js.log(pigLatin(Array.concat([test, test2, test3])));