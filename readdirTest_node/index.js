const fs = require('fs');

console.log("nodejs 測試10萬的檔案的 readdir 執行速度")
console.time("readdir_100k_file");
fs.readdir("C:\\Users\\pickuse\\Documents\\GitHub\\CreateDummyFiles_PowerShell\\test_folder", (err, files) => {
    if (err)
        console.log(err);
    else {
        files.forEach(file => { })

        console.timeEnd("readdir_100k_file");
    }
})

console.log("nodejs 測試10萬的資料夾+檔案的 readdir 執行速度")

console.time("readdir_100k_path_with_file");
fs.readdir("C:\\Users\\pickuse\\Documents\\GitHub\\CreateDummyFiles_PowerShell\\test_folder2", (err, files) => {
    if (err)
        console.log(err);
    else {
        files.forEach(file => { })

        console.timeEnd("readdir_100k_path_with_file");
    }
})
