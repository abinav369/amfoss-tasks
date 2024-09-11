import System.IO

main = do
    input <- readFile "/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt"
    let n = read input :: Int

    writeFile "/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Haskell/output.txt" $ unlines $
      [replicate ((n `div` 2) - i) ' ' ++ replicate (2 * i + 1) '*' | i <- [0..(n `div
