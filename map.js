// // const res = new Map();
// // res.set("name", "cj");
// // res.set("location", "jalna");
// // res.set("region", "india");
// // res.set(true, "we are open").set(false, "we are close");

// // res.set("owner", ["chinmay", "jape"]).set("open", 11).set("close", 4);

// // console.log(res.get("owner"));

// // console.log(res.get("location"));

// // const t = 34;
// // // console.log(res.get(t > res.get("open")));

// // console.log(res.get("owner") == "cj");
// // console.log(res.has("open"));

// const newMap = new Map([
//   ["q1", "Which is the best way to attian samadhi?"],
//   [1, "AWERRT"],
//   [2, "sasasa"],
//   ["correct", 2],
//   [true, "ans is correct"],
//   [false, "wrong"],
// ]);

// console.log(newMap);
// // const ans = prompt("Enter the ans");
// const ans = 1;

// if (newMap.get(newMap.get("1") == ans)) {
//   console.log(`your ans ${ans} is true ${newMap.get(true)}`);
// }

// ////////////////////////////////////////////////////////////////////////////////

// const checkModdleSeat = (seat) => {
//   // B  and E are middle seats

//   const lastC = seat.slice(-1);
//   if (lastC == "B" || lastC == "E")
//     console.log(`you got the middle seat ${seat}`);
//   else {
//     console.log("You are lucky");
//   }
// };

// checkModdleSeat("11B");
// checkModdleSeat("11C");
// checkModdleSeat("11F");
// checkModdleSeat("11EE");

// //////////////////////////////////////////////

// const airline = "TAP Air Portugal";

// const pass = "ChinMaY";
// const low = pass.toLowerCase();

// const ans1 = pass.toLowerCase().charAt(0).toUpperCase() + low.slice(1);
// console.log(ans1);

// const email1 = "chinmayjape2@gmail.com";
// const email2 = "  CHInmayJAPE2@gmaiL.com";

// if (email2.toLowerCase().trim())
//   console.log(`your emails are correct ${email1} and \n ${email2} \n`);

console.log("chinmay+jape+hi".split("+").join(" "));

const capital = function (name) {
  const ans = name.split("  ");

  const nupper = [];
  for (const n in ans) {
    nupper.push(n.replace(n[0], n[0].toUpperCase()));
    // console.log(nupper.join(" "));
  }

  console.log(nupper.join(" "));
};

capital("chinmay jape");
