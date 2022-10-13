const getPivot = (arr) => {
    let low = 0;
    let high = arr.length - 1;

    let mid = Math.floor(low + (high - low))/2;

    while (low <= high) {
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            high = mid;
        }

        mid = Math.floor(low + (high - low))/2;
    }

    return mid;
}

const arr = [8, 10, 17, 1, 3];

const pivotIndex = getPivot(arr);

console.log(pivotIndex);
