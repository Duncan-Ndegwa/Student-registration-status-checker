const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function ask(question) {
  return new Promise((resolve) => rl.question(question, resolve));
}

async function checkRegistration() {
  console.log("=============================================");
  console.log("   STUDENT REGISTRATION STATUS CHECKER");
  console.log("=============================================");

  const name = (await ask("\nEnter student name: ")).trim();
  const unitsInput = await ask("Enter number of registered units: ");
  const units = parseInt(unitsInput);

  const status =
    units > 7 ? "Overload - Approval Required" : "Registration Accepted";

  console.log("\n=============================================");
  console.log("           REGISTRATION SUMMARY");
  console.log("=============================================");
  console.log(`  Student Name : ${name}`);
  console.log(`  Units        : ${units}`);
  console.log(`  Status       : ${status}`);
  console.log("=============================================");

  rl.close();
}

checkRegistration();
