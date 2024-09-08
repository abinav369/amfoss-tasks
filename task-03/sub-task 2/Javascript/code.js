const fs = require('fs');

fs.readFile('/home/abinav/git/amfoss-tasks/task-03/sub-task 2/input.txt', 'utf8', (err, data) => {
    if (err) throw err;
    fs.writeFile('/home/abinav/git/amfoss-tasks/task-03/sub-task 2/Javascript/output.txt', data, (err) => {
        if (err) throw err;
    });
});
