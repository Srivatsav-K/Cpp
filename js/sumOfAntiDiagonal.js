const arr = [
  [2, 1, 7],
  [3, 2, 4],
  [5, 6, 3],
];

function sumOfDiag2Loops(arr) {
  console.log("sum of diag using 2 loop");
  let sum = 0;

  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      if (i === j) {
        console.log("element :", arr[i][j]);
        sum += arr[i][j];
      }
    }
  }

  return sum;
}

function sumOfDiag(arr) {
  console.log("sum of diag using 1 loop");
  let sum = 0;

  for (let i = 0; i < arr.length; i++) {
    console.log("element :", arr[i][i]);
    sum += arr[i][i];
  }

  return sum;
}

function sumOfAntiDiagonal2Loops(arr) {
  console.log("sum of anti-diag using 2 loop");
  let sum = 0;

  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      const indexOfLastEle = arr[i].length - 1;

      if (j === indexOfLastEle - i) {
        sum += arr[i][j];
      }
    }
  }

  return sum;
}

function sumOfAntiDiagonal(arr) {
  console.log("sum of anti-diag using 1 loop");
  let sum = 0;

  for (let i = 0; i < arr.length; i++) {
    const arrInner = arr[i];
    const indexOfLastEle = arrInner.length - 1;
    const antiDiagonal = arrInner[indexOfLastEle - i];
    console.log("element :", antiDiagonal);
    sum += antiDiagonal;
  }
  return sum;
}

console.log(sumOfDiag2Loops(arr));
console.log(sumOfDiag(arr));
console.log(sumOfAntiDiagonal2Loops(arr));
console.log(sumOfAntiDiagonal(arr));
