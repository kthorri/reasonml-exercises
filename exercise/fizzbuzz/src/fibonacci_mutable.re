let first = ref(0);

let second = ref(1);

let third = ref(1);

let temp = ref(0);

while (first < ref(10000)) {
  Js.log(string_of_int(first^));
  temp := third^;
  third := second^ + third^;
  first := second^;
  second := temp^
};