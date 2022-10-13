const frequency = () => {

    let arr = [1,2,8,3,2,2,2,5,1];

    let visitedArray = [];

    const visited = -1;

    for (let i = 0; i < arr.length; i++) {
        let count = 1;
        for (let j = i + 1; j < arr.length; j++) {
            if(arr[i] === arr[j]) {
                count++;
                visitedArray[j] = visited;
            }
        }

        if (visitedArray[i] !== visited) {
            visitedArray[i] = count;
        }
    }

    visitedArray.map((item, index) => {
        console.log(item);
    })
}

frequency();

// freq array using plain js
freq = {};

    for (const item of arr) {
        if (item in freq)
            freq[item] += 1;
        else
            freq[item] = 1;
    }

    const newArr = Object.values(freq);
