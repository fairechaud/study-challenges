function findAndReturnSecondArray(firstNestedArray, secondArray, searchValue) {
  const foundItem = secondArray.find(item => {
    return item.nestedArray.includes(searchValue);
  });

  if (foundItem) {
    return foundItem;
  } else {
    return null;
  }
}
const firstNestedArray = ["apple", "banana", "orange"];
const secondArray = [
  { nestedArray: ["apple", "grape"] },
  { nestedArray: ["banana", "strawberry"] },
  { nestedArray: ["orange", "kiwi"] },
];
const searchValue = "banana";

const foundItem = findAndReturnSecondArray(firstNestedArray, secondArray, searchValue);
console.log(foundItem);
// Output: { nestedArray: ["banana", "strawberry"] }
