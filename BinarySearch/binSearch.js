const binSearch = (low, high, arr, key) => {
    
    while (low <= high) {
      
    let mid = Math.floor(low + (high - low)/2);

        if (arr[mid] === key) {
            return mid;
        }

        else if (key < arr[mid]) {
            high = mid - 1;
        }

        else {
            low = mid + 1;
        }
    }

    return -1;
}

let arr = [2, 10, 21, 34, 56];
const itemIndex = binSearch(0, 4, arr, 34);
console.log('result', itemIndex);

if (itemIndex !== -1) {
    console.log(`Item found ${arr[itemIndex]}`)
}
else {
    console.log(`Kuchh ni mila bhai`);
}