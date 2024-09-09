main = do
    putStrLn "Enter an odd number of rows for the diamond:"
    input <- getLine
    let n = read input :: Int

    -- Upper part including the middle row
    mapM_ putStrLn [replicate ((n `div` 2) - i) ' ' ++ replicate (2 * i + 1) '*' | i <- [0..(n `div` 2)]]

    -- Lower part (excluding the middle row)
    mapM_ putStrLn [replicate ((n `div` 2) - i) ' ' ++ replicate (2 * i + 1) '*' | i <- reverse [0..(n `div` 2 - 1)]]
