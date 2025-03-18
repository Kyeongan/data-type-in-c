function displayDataTypes() {
  console.log("Size of Data Types in JavaScript");
  console.log("===============================");
  console.log(`Size of Number = ${8} Bytes`); // JavaScript number is always a 64-bit double precision float
  console.log(
    `Size of String = Depends on the length of the string (approximated as 2 bytes per character)`
  );
  console.log(`Size of Boolean = ${typeof true} (Internally stored as 1 byte)`);
  console.log(`Size of Object = Depends on the number of properties`);
  console.log(
    `Size of Undefined = Typically 0 Bytes (though variable size in memory allocation)`
  );
  console.log("\n");

  console.log("The Range of Data Types in JavaScript");
  console.log("===============================");
  console.log("Range of Number: From -1.8e308 to 1.8e308 (approximately)");
  console.log("Range of Boolean: Only two values: true and false");
  console.log("Range of String: No fixed range, depends on memory available.");
  console.log(
    "Range of Object: No fixed range, depends on properties and references."
  );
  console.log(
    "Range of Undefined: Undefined has no range, it's a special type."
  );
}

displayDataTypes();
